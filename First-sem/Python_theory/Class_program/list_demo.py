marks=['Sachin',50,55,67,76,89]   
#declares an list  'marks' to store marks of 'sachin'
my_mark=[]
# dynamic initialization
for number in range(5):
    newmark=int(input("Enter the marks:"))
    my_mark.append(newmark)

print("List elements are:")
for i in range(len(my_mark)):
    print(my_mark[i])
    