w = open("covid.csv", "w")
w.write(data[0].text.strip().replace(',','') + "," + data[1].text.strip().replace(',','') + "," + data[2].text.strip().replace(',',''))
w.close()