# Write a programe to findout wether the user given year is millienum year or not 
# 1000,2000,3000,4000,5000...
year=int(input("Enter any year "))
# == , != , < , > , <= , >= , <>
# answer=year+1000
if year % 1000 == 0:
    print("it is millienum year")
    