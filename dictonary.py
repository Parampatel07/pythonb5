person = {'name':'param patel','age':18,'weight':45.45,'gender':True}
print(person['name'])
print(person['gender'])
print(person)
person['name']='dhaivat bhatt '
print(person)
person['name'] = ['param patel','dhaivat','ghanshyambhai',{'value':10,"value2":30}]
print(person)
temp=person.items()
print(temp)
temp=person.keys()
print(temp)
temp=person.values()
print(temp)
person.update({'number':90162293308})
print(person)