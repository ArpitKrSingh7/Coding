# Create a Python program that merges two sorted lists into one 
# sorted list. The program should prompt the user to input two sorted lists of integers.
# The program should then merge these two lists into one sorted list and print the result.

# Input Format:
# The first line of input consists of a space-separated sorted list of integers.
# The second line of input consists of another space-separated sorted list of integers.

# Output Format:
# - The output consists of a single sorted list, which is the result of merging the two input lists.

# Example:

# Input:
# 1 3 5 7
# 2 4 6 8


# Output:
# 1 2 3 4 5 6 7 8


list1 = input()
list1 = list1.split()

list2 = input()
list2 = list2.split()

final_list = []
j = 0
k = 0

while(1):
        if(int(list1[j])<int(list2[k])):
            final_list.append(list1[j])
            j = j+1
        else:
            final_list.append(list2[k])
            k = k+1
        if(k >= len(list2) or j >= len(list1)):
            break
    
if(k >= len(list2)):
        while(j<len(list1)):
            final_list.append(list1[j])
            j = j+1
    
if(j >= len(list1)):
        while(k<len(list2)):
            final_list.append(list2[k])
            k = k+1          
    
print(final_list)     
            
final_list = ' '.join(final_list)
print(final_list , end="")
# print(list1)

