# 12) Write a program to display zodiac symbol & given zodiac sign from given birth day and month as per following criteria.
# https://in.pinterest.com/pin/81698180718875314/
month=int(input("Enter your birth month "))
days=int(input("Enter your birth day "))

# if month == 3  and  days>20:
#     if days<=31:
#         print("your zodiac sign is aries  ")
# elif month==4 and days<19:
#     if days>=1:  
#         print("your zodiac sign is aries ")
# else:
#     print("invalid input ")   
    
if (month==3 and (days>20 and days<=31)) or (month==4 and (days<=19 and days>=1)):
    print("your zodiac sign is aries ")