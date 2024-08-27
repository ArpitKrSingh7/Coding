def multiplication(a,b):
    if(b==0):
        return a
    
    return a+multiplication(a,b)
   
	

integers = input()
integers = integers.split()

print(integers)

x = multiplication((integers[0]),int(integers[1]))

print(x,end ="")