str = str(input())
# print(str)
i = 0
# print(str)
while(i < len(str)):
    if(str[i]<'A'):
        if(i==0):
            # print(str[i])
            str.remove(str[i])
            i = 0
            continue
        else:
            # print(i)
            del str[i-1]
            # print(str)
            del (str[i-1])
            
            i = 0
            continue
            
    i = i + 1
        
str = ''.join(str) 
print(str)