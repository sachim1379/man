import os

os.system("git add *")
os.system('git commit -m "automatic committed by PY-script"')
os.system("git push")

print(":::git add * EXECUTED:::")
print(":::git commit EXECUTED:::")
print(":::git push EXECUTED:::")
print(":::return:::")