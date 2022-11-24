# Write a programe to print following pattern 
# 2, 1, 3, 4, 7, 11, 18, 29, 47, 76, 123 .... 300

first=2
second=1
print(first)
print(second)
answer=first+second
print(answer) # 3
while answer < 123:
    first=answer 
    answer=answer+second
    print(answer) # 4
    second=answer
    answer=answer+first
    print(answer) # 7

# first=answer
# answer=answer+second
# print(answer) # 11
# answer=second
# answer=answer+first
# print(answer) #18
# answer=answer+second
# print(answer)