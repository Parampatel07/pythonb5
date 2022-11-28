# Write a programe to findout how many letter's does the senctence have and also count have much time 
sentence = "this is an oragne it has vitamin d"
count=0
alphabet={'a':0,'b':0,'c':0,'d':0,'e':0,'f':0,'g':0,'h':0,'i':0,'j':0,'k':0,'l':0,'m':0,'n':0,'o':0,'p':0,'q':0,'r':0,'s':0,'t':0,'u':0,'v':0,'w':0,'x':0,'y':0,'z':0,' ':0,}
for value in sentence:
    # print(value,end=" ")
    count=count+1
    if value in alphabet:
        alphabet[value]=alphabet[value]+1
    
print(alphabet)
