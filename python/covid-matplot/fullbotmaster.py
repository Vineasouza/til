import requests
import csv
import pandas 
import datetime 
from pytz import timezone
from bs4 import BeautifulSoup
from threading import Timer

def rep():
    # getting data
    url = "https://www.worldometers.info/coronavirus/"
    r = requests.get(url)
    s = BeautifulSoup(r.text,"html.parser")
    data = s.find_all("div",class_ = "maincounter-number")

    # getting date
    now = datetime.datetime.now()
    fuso_horario = timezone('America/Sao_Paulo')
    nowtime = now.astimezone(fuso_horario)

    ### ALL ###
    row_list1 = [data[0].text.strip().replace(',',''), data[1].text.strip().replace(',',''), data[2].text.strip().replace(',',''), nowtime.strftime("%Y-%m-%d %H:%M:%S")]

    with open('covid.csv', 'a+', newline='') as file:
        writer = csv.writer(file, delimiter=',')
        writer.writerow(row_list1)
    
    ### CASES ###
    row_list2 = [data[0].text.strip().replace(',',''), nowtime.strftime("%Y-%m-%d %H:%M:%S")]

    with open('covidcases.csv', 'a+', newline='') as file:
        writer = csv.writer(file, delimiter=',')
        writer.writerow(row_list2)

    ### DEATHS ###
    row_list3 = [data[1].text.strip().replace(',',''), nowtime.strftime("%Y-%m-%d %H:%M:%S")]

    with open('coviddeaths.csv', 'a+', newline='') as file:
        writer = csv.writer(file, delimiter=',')
        writer.writerow(row_list3)

    ### RECOVERED ###
    row_list4 = [data[2].text.strip().replace(',',''), nowtime.strftime("%Y-%m-%d %H:%M:%S")]

    with open('covidrecovered.csv', 'a+', newline='') as file:
        writer = csv.writer(file, delimiter=',')
        writer.writerow(row_list4)
    Timer(3600.0, rep).start()
Timer(3600.0, rep).start()