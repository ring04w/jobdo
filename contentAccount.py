import os
s = []
path = os.getcwd()
for root,dirs,files in os.walk(path):
    for filespath in files:
      print(os.path.join(root, filespath))
      s.append(filespath)
	
print len(s)
