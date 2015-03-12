import os
from bs4 import BeautifulSoup

path = os.getcwd()
file_list = os.listdir(path)

for file_name in file_list:
	li = os.path.splitext(file_name)   
	if(li[1] == ".apk"):
		new_name = "%s\%s"%(path, li[0] + ".zip")
		dex_name = "%s\%s"%(path, li[0] + ".apk")
		new_name = ".".join(new_name.split())
		dex_name = ".".join(dex_name.split())

		dex_Name = "%s\%s"%((path, file_list), dex_name)
		new_Name = "%s\%s"%((path, file_list), new_name)

print new_Name
print '-----------------------------------------------'
print dex_Name
