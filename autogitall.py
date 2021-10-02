import os
os.system("git add *")
print("git add * EXECUTED")
os.system("git commit -m 'automatic committed by PY-script'")
print("git commit EXECUTED")
os.system("git push")
print("git push EXECUTED")