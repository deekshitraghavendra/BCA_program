sum =0
element=[]
for number in range(5):
    list=int(input("Enter the list element:"))
    element.append(list)
    sum+= element[number]
print(element)
print("the sum of list element is:",sum)
