import matplotlib.pyplot as plt
import csv

x = []
y = []

with open('covidcases.csv','r') as csvfile:
    plots = csv.reader(csvfile, delimiter=',')
    for row in plots:
        x.append(int(row[1]))
        y.append(int(row[0]))

plt.plot(x,y, label='Loaded from file!')
plt.xlabel('date')
plt.ylabel('cases')
plt.title('Interesting Graph\nCheck it out')
plt.legend()
plt.show()