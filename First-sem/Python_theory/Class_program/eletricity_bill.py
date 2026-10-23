units=float(input("enter number of units :"))
category=input("enter  category:")
threshold=input("is peak threshold found[yes/no]:")
penalty=100
penaltyco=50
bill=0

if category =="commerical":
    if units < 100:
        bill =units * 10

    elif units <= 300:
        bill=(100*10)+((units-100)*12)

    else: 
        bill =(100*10)+(100*12)+((units-200)*15)
    if threshold == 1:    
        bill =bill + penalty
else:
    if units < 100:
     bill=units * 5

    elif units >100 and units<300:
        bill=(100*5)+((units-100)*5)
    else:
        bill=(100*5)+(100*6)((units-200)*6)
    if threshold == 2:
        bill=bill + penaltyco
print("bill",bill)
