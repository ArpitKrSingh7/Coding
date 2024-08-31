x = list(input())
# print(x.count(x[1]))
for i in x:
    if(x.count(i) == 1): 
        print(i)
        exit()
    else:
        del i
        
        