import os

new_username = input("input new user.name... : ")
cmd = "git config --global user.name" + ' ' + new_username 
os.system(cmd)
print('user.name CHANGE SUCESS...')

new_useremail = input("input new user.email... : ")
cmd = "git config --global user.email"+' '+ new_useremail
os.system(cmd)
print('user.email CHANGE SUCESS...')