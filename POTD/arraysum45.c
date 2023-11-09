// Consider an array of size ‘n’. Here, ‘n’ distinct values are placed in the array. Raghav tries to give an input value ‘Key’ and tries to find whether the given ‘Key’ is present in the array or not. If the ‘key’ exists in the array, then he subdivides the given array into two sub arrays namely SUB1 and SUB2, which are given to his friends Suman and Vaibhav respectively. Suman holds SUB1 array, that holds all the value to the left of the index position of ‘key’(Excluding the key value). Vaibhav holds the SUB2 array holds all the value to the right of the index position of ‘key’ (Excluding the key value). Now, Raghav computes a resultant array RES that holds all the values after performing the cell wise addition in both SUB1 and SUB2 arrays. (i.e., RES[0]=SUB1[0]+SUB2[0], RES[1]=SUB1[1]+SUB2[1] , etc.). Perform this operation until any one sub array has reached the last index position of that sub array. The remaining left-over elements present in the other sub array should be directly copied to the resultant array RES. If 'Key' is not present in the array, Raghav returns the original array.

// Input Format

// 1st line contains an integer N denoting array size. 2nd line contains N space seperated integers,denoting array elements. 3rd line contains an integer denoting 'KEY'

// Constraints

// 100 10^6 10^6

// Output Format

// Print elements in array with exactly one space between them. If the array RES[] is empty, then print '-100'.

// Sample Input 0

// 6
// 1 5 6 7 9 10
// 6
// Sample Output 0

// 8 14 10
// Sample Input 1

// 7
// 2 4 7 9 12 17 19
// 6
// Sample Output 1

// 2 4 7 9 12 17 19


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,i,j,key,breakpoint=0,c=0,g=0;
    scanf("%d",&n);
    int N[n],sub1[n],sub2[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&N[i]);
    }
    
    scanf("%d",&key);
    
    for(i=0;i<n;i++)
    {
        if(N[i]==key)
        {
            c++;
            breakpoint = i;
            break;
        }
        
    }
    
    if (c==0)
    {
        for(i=0;i<n;i++)
        {
            printf("%d ",N[i]);
        }
    }
    
    
    else
    {
        for(i=0,j=0;i<breakpoint;i++)
        {
            sub1[i]=N[i];
        }
        
        for(i=breakpoint + 1;i<n;i++)
        {
            sub2[j]=N[i];
            j++;
        }
        int res[n];
        
        for(i=0;i<n;i++)
        {
            res[i]=-1;
        }
        
        if(breakpoint < (float)(n-1)/2)
        {
           for(i=0;i<breakpoint;i++)
           {
               res[i]=sub1[i] + sub2[i];
           }
            
            for(i=breakpoint;i<n-1-breakpoint;i++)
            {
                res[i] = sub2[i];
            }
        
        
        for(i=0;i<n;i++)
        {
            if(res[i]==-1)
            {
                g++;
            }
        }
            
            if(g==n)
            {
                printf("-100");
            }
            else
            {
               for(i=0;i<n;i++)
        {
            if(res[i]!=-1)
            {
                printf("%d ",res[i]);
            }
        } 
            }
        }
        
        else if(breakpoint > (float)(n-1)/2)
        {
           for(i=0;i<n-breakpoint-1;i++)
           {
               res[i]=sub1[i] + sub2[i];
           }
            
            for(i=n-breakpoint-1;i<breakpoint;i++)
            {
                res[i] = sub1[i];
            }
        
        
        for(i=0;i<n;i++)
        {
            if(res[i]==-1)
            {
                g++;
            }
        }
            
            if(g==n)
            {
                printf("-100");
            }
            else
            {
               for(i=0;i<n;i++)
        {
            if(res[i]!=-1)
            {
                printf("%d ",res[i]);
            }
        } 
            }
        }
        
        else
        {
           for(i=0;i<breakpoint;i++)
           {
               res[i]=sub1[i] + sub2[i];
           }
            
        
      for(i=0;i<n;i++)
        {
            if(res[i]==-1)
            {
                g++;
            }
        }
            
            if(g==n)
            {
                printf("-100");
            }
            else
            {
               for(i=0;i<n;i++)
        {
            if(res[i]!=-1)
            {
                printf("%d ",res[i]);
            }
        } 
            }
        }
    
    }
    
    return 0;
}
