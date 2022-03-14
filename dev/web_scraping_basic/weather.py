import pandas as pd
import csv
import json

csv_data = pd.read_csv("city_temperature.csv", sep = ",")
csv_data.to_json("city_temperature.json", orient = "records")

with open('file.csv', 'r') as file_csv:
    fieldnames = ("field1","field2")
    reader = csv.DictReader(file_csv, fieldnames)
    
with open('myfile.json', 'w') as file_json:
    for row in reader:
            json.dump(row, file_json)    