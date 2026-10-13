#def bank_account_details():
tuple=([])
name=input("Enter name:")
acc_no=int(input("Enter account no:"))
DOB=input("Enter your DOB:")
aadhar_no=int(input("Enter your aadhar no"))
pan_no=int(input("Enter your pan no:"))
email=input("Enter your email:")
phone_no=int(input("Enter your phone no:"))
address=input("Enter your address:")
current_balance=float(input("Enter your current balance:"))

bank_account_data=[email,phone_no,address,current_balance,(name,acc_no,DOB,aadhar_no,pan_no)]
print("bank details:",bank_account_data)


