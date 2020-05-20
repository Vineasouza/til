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
data_name3 = s.find_all("div",class_ = "panel-front")
#data_name4 = data_name3[0].find_all("strong")


print("\nDATA1")
print(data_name[0].text.strip())
print(data_name2[0].text.strip())
print(data_name2[1].text.strip())
print(data_name3)

print("\nDATA2")
print(data_name[1].text.strip())
print(data_name2[2].text.strip())
print(data_name2[3].text.strip())





