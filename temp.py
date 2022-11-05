# Write a program to find bmi using user's input
#bmi= weight/height *height
# height is given in feet and inches
# convert heght into meter
heightf = int(input("enter value of height in feet"))
heighti = int(input("enter value of height in inch")) 
weight = int(input("enter value of weight"))
print ("the value of height in feet", heightf,"the value of height in inch", heighti, "thevalue of weight", weight)
height = (heightf*0.305)+(heighti*0.0254) 
answer = int (weight/(height*height))
print ("the value of answer is", answer)