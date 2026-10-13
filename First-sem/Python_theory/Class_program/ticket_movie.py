age=int(input("Enter age:"))
day=input("Enter day of the week:")
time_day=input("Enter time of the day:")
ticket_price=250 

if age.isdigit():
     age=int(age)
     data_type=type(age).__name__
     is_valid =True
else:
    is_valid=False     
if age<0:
    valid=False
elif age <=5:
    category="child"
    age_discount_percent =50
elif age >=6 and age <=59:
    category="adult"
    age_discount_percent=0
elif age >=60:
    category="senior citizen"
    age_discount_percentage=10

if day == "weekend" or day ==  "saturday" or day == "sunday":
    price= price +(250 *0.25)
if time_day == "afternoon":
    price= price+ (250 * 0.10)
elif time_day ==  "evening":
    price=price+(250 *0.30)

final_price = price - (price * discount)
print("Final-price   :",final_price)
else:
print("please enter a valid age number.")

if valid:
    print("age group   :",category)
    print("day type    :",day type)
    print("final price :",final_price) 



    
    

