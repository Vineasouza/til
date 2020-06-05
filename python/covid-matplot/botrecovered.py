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

row_list = [data[2].text.strip().replace(',',''), nowtime.strftime("%Y-%m-%d %H:%M:%S")]

with open('covidrecovered.csv', 'a+', newline='') as file:
    writer = csv.writer(file, delimiter=',')
    writer.writerow(row_list)


df = pandas.read_csv('covidrecovered.csv', 
            header=0, 
            names=['Recovered', 'Date'])
print(df)