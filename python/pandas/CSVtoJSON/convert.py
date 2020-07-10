#import pandas package
import pandas as pd

#read the CSV file
df = pd.read_csv (r'datasetReviewed.csv')

df['polaridade'] = df['polaridade'].astype(float)

print(df)

#convert de CSV to JSON string
df.to_json (r'datasetReviewed.json')



