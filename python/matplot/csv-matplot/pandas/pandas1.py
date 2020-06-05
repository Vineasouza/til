# pandas.read_csv() opens, analyzes, and reads the CSV file provided, and stores the data in a DataFrame

import pandas
df = pandas.read_csv('hrdata.csv', index_col='Name', parse_dates=['Hire Date'])
print(df)


# If your CSV files doesn’t have column names in the first line, you can use the names optional parameter to provide a list of column names. You can also use this if you want to override the column names provided in the first line

df = pandas.read_csv('hrdata.csv', 
            index_col='Employee', 
            parse_dates=['Hired'], 
            header=0, 
            names=['Employee', 'Hired','Salary', 'Sick Days'])
#print(df)


# Writing CSV Files With pandas
df = pandas.read_csv('hrdata.csv', 
            index_col='Employee', 
            parse_dates=['Hired'],
            header=0, 
            names=['Employee', 'Hired', 'Salary', 'Sick Days'])
df.to_csv('hrdata_modified.csv')
