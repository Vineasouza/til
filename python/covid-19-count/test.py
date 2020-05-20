import requests
import datetime 
from pytz import timezone 
from bs4 import BeautifulSoup
from threading import Timer


url = "https://www.worldometers.info/coronavirus/country/brazil/"
r = requests.get(url)
s = BeautifulSoup(r.text,"html.parser")
data_name = s.find_all("div",class_ = "number-table-main")
data_name2 = s.find_all("span",class_ = "number-table")

def data1():
    print("Casos ativos\nAtualmente infectados: " + data_name[0].text.strip() + "\nEm condições suaves: " + data_name2[0].text.strip() + " (" + data_name2[0].next_sibling.next_sibling.text.strip() + "%)\nSério ou Crítico: " + data_name2[1].text.strip() + " (" + data_name2[1].next_sibling.next_sibling.text.strip() + "%)\n\nCasos fechados\nCasos que tiveram um resultado: " + data_name[1].text.strip() + "\nRecuperados: " + data_name2[2].text.strip() + " (" + data_name2[2].next_sibling.next_sibling.text.strip() + "%)\nMortos: " + data_name2[3].text.strip() + " (" + data_name2[3].next_sibling.next_sibling.text.strip() + "%)")
    Timer(5.0, data1).start()


Timer(5.0, data1).start()

