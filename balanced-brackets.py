x=input()
arr={'{':'}','<':'>','(': ')','[':']'}
for i in x:
        try: x.replace(arr[i], '', 1)
        except: pass
print(len(x)==0)
