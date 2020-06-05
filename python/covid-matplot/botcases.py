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

    row_list = [data[0].text.strip().replace(',',''), nowtime.strftime("%Y-%m-%d %H:%M:%S")]

    with open('covidcases.csv', 'a+', newline='') as file:
        writer = csv.writer(file, delimiter=',')
        writer.writerow(row_list)


    df = pandas.read_csv('covidcases.csv', 
                header=0, 
                names=['Cases', 'Date'])
    print(df)
    Timer(10.0, rep).start()

Timer(10.0, rep).start()