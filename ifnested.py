# Write a programe to findout which number is greater out of given three number 
num1=int(input("Enter value of number 1 "))
num2=int(input("Enter value of number 2 "))
num3=int(input("Enter value of number 3 "))

if num1==num2:
    if num2==num3:
        print("all are equall ")
elif num2==num3:
    if num1==num3:
        print("all are equall ")
else:    
    if num1 > num2:
        if num1 > num3:
            print("num1 is greater ")
        else:
            print("num3 is greater ")
    else:
        if num2 > num3:
            print("num2 is greater ")
        else:
            print("num3 is greater ")
        


print("Goodbyee...")