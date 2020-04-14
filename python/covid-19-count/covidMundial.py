import requests 
from bs4 import BeautifulSoup
from threading import Timer

def covid():
    url = "https://www.worldometers.info/coronavirus/"
    r = requests.get(url)
    s = BeautifulSoup(r.text,"html.parser")
    data = s.find_all("div",class_ = "maincounter-number")

    print("---Mundial Stats---")
    print("Total Cases:",data[0].text.strip())
    print("Total Deaths:",data[1].text.strip ())
    print("Total Recovered:",data[2].text.strip())
    print("\n ----- \n")

    w = open("covidMundial.txt", "w")
    w.write("Total Cases: "+ data[0].text.strip() + "\n")
    w.write("Total Deaths: " + data[1].text.strip () + "\n")
    w.write("Total Recovered: " + data[2].text.strip() + "\n")
    w.close()
    Timer(60.0, covid).start()

Timer(60.0, covid).start()