import requests
import csv
import pandas 
import datetime 
from pytz import timezone
from bs4 import BeautifulSoup
from threading import Timer


url = "https://www.worldometers.info/coronavirus/"
r = requests.get(url)
s = BeautifulSoup(r.text,"html.parser")
data = s.find_all("div",class_ = "maincounter-number")

#getting date
now = datetime.datetime.now()
fuso_horario = timezone('America/Sao_Paulo')
nowtime = now.astimezone(fuso_horario)

row_list = [data[1].text.strip().replace(',',''), nowtime.strftime("%Y-%m-%d %H:%M:%S")]

with open('coviddeaths.csv', 'a+', newline='') as file:
    writer = csv.writer(file, delimiter=',')
    writer.writerow(row_list)


df = pandas.read_csv('coviddeaths.csv', 
            header=0, 
            names=['Deaths', 'Date'])
print(df)