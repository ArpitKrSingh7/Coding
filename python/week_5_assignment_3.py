# Create a Python program that finds the k-th largest and k-th smallest elements in a list of integers.
# The program should prompt the user to input a list of integers and a value `k`. 
# The program should then find and print:

# 1 if the k-th largest and k-th smallest elements are the same and are at the middle of the sorted list.
#  -1 if the k-th largest and k-th smallest elements are the same but are not in the middle of the sorted list.
# 0 if the k-th largest and k-th smallest elements are different.
# Input Format:
# The first line of input consists of a space-separated list of integers.
# The second line of input consists of a single integer k.

# Output Format:
# The output consists of a single integer 1, -1, or 0 based on the conditions specified.

# Example:

# Input:
# 3 8 7 5 9 1
# 2

# Output:
# 0


string = input()
k = int(input())
string = string.split()
string.sort()

m = int((0 + len(string))/2)

if(string[k-1] == string[len(string)-k] and (k-1) == m):
    print("1",end="")

elif(string[k-1] == string[len(string)-k]):
    print("-1",end="")
    
else:
    print("0" ,end="")
# print(string)