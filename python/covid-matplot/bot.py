import requests
import csv
import pandas 
import datetime 
from pytz import timezone
from bs4 import BeautifulSoup
from threading import Timer

def rep():
    url = "https://www.worldometers.info/coronavirus/"
    r = requests.get(url)
    s = BeautifulSoup(r.text,"html.parser")
    data = s.find_all("div",class_ = "maincounter-number")

    #getting date
    now = datetime.datetime.now()
    fuso_horario = timezone('America/Sao_Paulo')
    nowtime = now.astimezone(fuso_horario)

    row_list = [data[0].text.strip().replace(',',''), data[1].text.strip().replace(',',''), data[2].text.strip().replace(',',''), nowtime.strftime("%Y-%m-%d %H:%M:%S")]

    with open('covid.csv', 'a+', newline='') as file:
        writer = csv.writer(file, delimiter=',')
        writer.writerow(row_list)


    df = pandas.read_csv('covid.csv', 
                header=0, 
                names=['Cases', 'Deaths','Recovered', 'Date'])
    #print(df)
    Timer(10.0, rep).start()
Timer(10.0, rep).start()