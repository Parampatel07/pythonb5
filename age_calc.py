# write a program to find the age
# age in dd-mm-yy
birthdate = int(input('Enter date of birth'))
birthmonth = int(input('enter month of birth'))
birthyear = int(input('enter year of birth'))
todaydate = int(input('enter date as on today'))
todaymonth = int(input('enter month as on today'))
todayyear = int(input('enter year as on today'))
print('enter the date of birth ', birthdate,'enter the month of birth ', birthmonth, 'enter the year of birth ', birthyear,'enter current date ',todaydate,'enter current month ', todaymonth, 'enter current year',todayyear)
answer1 = int(todaydate-birthdate)
answer2 = int(todaymonth-birthmonth)
answer3 = int(todayyear-birthyear)
print('age in day', answer1,'age in month', answer2, 'age in year', answer3)