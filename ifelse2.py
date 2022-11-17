# Write a programe to findout which triangle is smaller outof given two triagnles take height and base as an input  
height1=int(input("Enter value of height for triagnle 1"))
base1=int(input("Enter value of base for triangle 1 "))
height2=int(input("Enter value of height for triagnle 2 "))
base2=int(input("Enter value of base for triangle 2 "))
area1=height1*base1/2
area2=height2*base2/2
if area1 < area2:
    print("triangle1 is smaller than area 2")
else:
    print("triagnle2 is smaller than area 1 ")
print("Goodbyee..")