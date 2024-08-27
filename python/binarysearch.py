number = input()
number = number.split()
target = int(input())


a = 0
b = len(number)
for i in range(len(number)):
    m = int((a+b)/2)
    
    if(int(number[m]) == target):
        print(m,end="")
        exit()
    
    elif(int(number[m]) < target):
        a = m
    else:
        b = m

print("-1" , end="")
# print(number)