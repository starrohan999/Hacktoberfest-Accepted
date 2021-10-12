#OTP VERIFICATION SYSTEM USING PYTHON 


import os 
import math
import random
import smtplib

digits = "0123456789"

OTP = ""

for in range(6):
  OTP+=digits[math.floor(random.random()*10)]
otp = OTP + " is your OTP"
msg = otp
s = smtplib.SMTP('smtp.gmail.com', 587)
s.starttls()
s.login("YOUR EMAIL", "YOUR PASSWORD")
emailid = input("Enter your email: ")
s.sendmail('&&&&&&&&&&&',emailid,msg)
a = input("Enter Your OTP >>: ")
if a == OTP:
  print("Verified")
else:
  print("Plase check your OTP again")
  
