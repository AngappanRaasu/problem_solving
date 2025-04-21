def LeapYear(year):

    if(year %4 ==0):
        if(year %100 != 0) or (year % 400 == 0):
            return True
    else:
        return False
year=int(input("Enter the year:"))

if (LeapYear(year)):
    print("This is leap year",LeapYear(year))

else:
    print("not a leap year")
