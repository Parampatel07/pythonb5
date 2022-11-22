# Write a program to accept male and female person birth day and month separately and calculate the compatibility for relationship using following criteria
# https://web.colby.edu/cogblog/files/2018/04/barnum-2-580x758.png 
male_day=int(input("Enter your birth day for male "))
male_month=int(input("Enter your birth month for male "))
female_day=int(input("Enter your birth day for female "))
female_month=int(input("Enter your birth month for female "))
male_sign='leo'
female_sign='aries'
# if male_month==3 and (male_day>20 and male_day>=31) or (male_month==4 and (male_day<=19 and male_day>=1)):
#     male_sign='aries'
# elif male_month==4 and (male_day>20 and male_day>=31) or (male_month==5 and (male_day<=20 and male_day>=1)):
#     male_sign='tarus'
if male_sign=='leo' and female_sign=='aries':
    print("you are favorable ")