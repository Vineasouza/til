import requests
import datetime 
from pytz import timezone 
from bs4 import BeautifulSoup
from threading import Timer

url = "https://www.worldometers.info/coronavirus/country/brazil/"
r = requests.get(url)
s = BeautifulSoup(r.text,"html.parser")
data = s.find_all("div",class_ = "maincounter-number")

url2 = "https://www.worldometers.info/coronavirus/"
r2 = requests.get(url2)
s2 = BeautifulSoup(r2.text,"html.parser")
data2 = s2.find_all("div",class_ = "maincounter-number")

now = datetime.datetime.now()
fuso_horario = timezone('America/Sao_Paulo')
nowtime = now.astimezone(fuso_horario)

# console log
print(nowtime.strftime("%Y-%m-%d %H:%M") + "\nTotal Casos: 🇧🇷 "+ data[0].text.strip() + " // 🌎 " + data2[0].text.strip() + "\nTotal Mortes: 🇧🇷 " + data[1].text.strip() + " // 🌎 " + data2[1].text.strip() + "\nTotal Recuperados: 🇧🇷 " + data[2].text.strip()+ " // 🌎 " + data2[2].text.strip())