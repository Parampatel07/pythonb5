# Write a programe to count how many vowel string has accept string from user 
# sentence = str(input("Enter your sentence "))
sentence = "this is an apple with red color"
count = 0
for i in sentence :
    # print(i)
    if i == 'a' or i=='e' or i=='o' or i=='i' or i=='u' :
        # print(i,end=" ")
        count=count+1
    
print("total number of vowel are ",count)    