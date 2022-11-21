#write a program to print given how many days a month has 
month=int(input("Enter value of month ")) 

# if month<=12 and month>=1:
#     if month==2:
#         print("28/29 days ")
#     elif month==4 or month==6 or month==9 or month==11:
#         print("30 days")
#     else :
#         print("31 days ")
# else:
#     print("invalid month ")
if month>12 and month<1:
    print("invalid month ")
else:
    if month==2:
        print("28/29 days ")
    else:
        if month>=7:
            if month%2==0:
                print("31 days ")
            else:
                print("30 days ")
        else:
            if month%2==0:
                print("30 days ")
            else:
                print("31 days ")
                
                