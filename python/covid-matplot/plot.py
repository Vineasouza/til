import csv
import matplotlib.pyplot as plt
import matplotlib as mpl

x = []
y = []

with open('covidcases.csv','r') as csvfile:
    plots = csv.reader(csvfile, delimiter=',')
    for row in plots:
        x.append(row[1])
        y.append(row[0])
mpl.rcParams['figure.figsize'] = 15, 10
plt.plot_date(x,y, xdate = True, linestyle="solid", marker="x", color="green")
plt.xlabel('date')
plt.xticks(rotation=90)
plt.ylabel('cases')
plt.title('COVID- 19 CASES')
plt.subplots_adjust(left=0.08, right=0.97, bottom=0.25, top=0.92)
plt.tight_layout()
plt.savefig('covidcases.png', dpi = 150)
plt.show()


