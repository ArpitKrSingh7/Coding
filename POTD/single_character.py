# Write a program to find the one character that
# appears only once in a given array of characters,
# while all other characters appear multiple times.
# This unique character needs to be identified and extracted from the array

# Input Format

# An array of characters.

# Constraints

# 1 <= array.length <= 10,000,000

# Output Format

# The character, which appears only once in the array.

# Sample Input 0

# aabfccddeeb
# Sample Output 0

# f
# Sample Input 1

# a#2a#
# Sample Output 1

# 2


def remove_items(test_list, item): 
   
    res = list(filter((item).__ne__, test_list)) 
    return res 

x = list(input())
# print(x.count(x[1]))
for i in x:
    if(x.count(i) == 1): 
        print(i)
        exit()
    else:
        x = remove_items(x,i)
        
        