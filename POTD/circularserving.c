// A fancy restaurant is hosting a grand food fest where N people are seated at a contiguous circular table. Each person is assigned a bowl with a certain capacity. The restaurant serves soup to the guests in a unique way, as follows:

// They use two integers, Q and K. During the first iteration, they serve soup to the first person, then to the next kth person and continue in this fashion. At each serving, they can pour Q quantity of soup into the bowl.

// If, during any soup serving, adding the soup would cause the quantity of soup in the bowl to exceed the bowl's capacity, they fill the bowl to its capacity and remove the person from the seating arrangement after that iteration.

// Given an array of integers of size N, integers Q and K, and an integer V representing the total volume of soup available at the restaurant, your task is to return an array that displays the remaining volume of each bowl (if the person is still present in the seating arrangement) when no more soup can be served to the guests. (You are not allowed to use any inbuilt function to remove an element from the array and while removing the element from the array take care of boundary conditions)

// **REMOVING A PERSON SHOULD BE DONE ONLY AT THE END OF EACH ITERATION.

// IF ALL THE PEOPLE ARE REMOVED FROM THE SEATING ARRANGEMENT print -1**

// Input Format

// The first line is an integer N representing the size of the array The Second line has N space seperated integer elements each representing the capacity of each bowl The Third line is the integer Q The Fourth line is the integer K The Fifth line is the integer V

// Constraints

// .
// Output Format

// Space seperated integers representing the remaining volume(if person is still in the seating arrangement) of each bowl or -1 if no person is present in the seating arrangement.

// Sample Input 0

// 10
// 250 150 600 1000 100 90 75 1000 990 1000
// 100
// 2
// 2400
// Sample Output 0

// 200 700 600 690 665
// Explanation 0

// 1st iteration: 150 150 500 1000 0 90 75(remove) 1000 890 1000 (updated V=2400-100-100-100-75-100=1925) 2nd iteration: (Since the last soup serving was done to the guest at 8th index, start at 0 again) 50 150 400 1000 0(remove) 90 900 890 900 (updated V=1925-100-100-100-100=1525) 3rd iteration: (Since the last soup serving was done to the guest at last index now start from 1st index) 50 50 400 900 90 800 890 800 (updated V=1525-100-100-100-100=1125) 4th iteration: (Since the last soup serving was done to the last index, start from 1st index) 50 50(remove) 400 800 90 700 890 700 (updated V=1125-50-100-100-100=775) 5th iteration:(Since the last soup serving was done to the last index, start from 1st index) 50 300 800 90(remove) 700 790 700 (updated V=775-100-90-100=485) 6th iteration: (Since the last soup serving was done to the person at the last before index, start from 0th index) 50(remove) 300 700 700 690 700(updated V=485-50-100-100=235) 7th iteration:(Since the last soup serving was done to the person at the last before index, start from 0th index) 200 700 600 690 665 (The amount of soup prepared by the restaurant has exhausted)

// Sample Input 1

// 2
// 16 100
// 10
// 1
// 19
// Sample Output 1

// 6 91
// Explanation 1

// Serve 10mL soup to the first bowl(16-10), remaining 9mL to the second bowl(100-9)





#include <stdio.h>
int main ()
 
{
    int a,i,r=0,d=0,p=0;
    scanf("%d",&a);
    int A[a],sum=0;

    for(i=0;i<a;i++)
    {
        scanf("%d",&A[i]);
        sum=sum+A[i];
    }
    int Q,V,K;  
    scanf("%d %d %d",&Q,&K,&V);
if(V<=sum)
{
    while(V>0)
    {
        for(i=d;i<a;i+=K)
        {
            if(A[i]>=Q && V>=Q)
            {
                A[i]=A[i]-Q;
                V=V-Q;
            }

            else if(A[i]< Q && V>=Q)
            {
                V=V-A[i];
                A[i]=A[i]-Q;
            }

            else if(A[i]<V && V<=Q)
            {
                V=V-A[i];
                A[i]=-1;
            }
            else 
            {
                A[i]=A[i] - V;
                V=0;
                break;
            }
            
        }
        d=i%a;
        
        r=0;
        for(i=0;i<a;i++)
        {
            if(A[i]>=0)

            {
                A[r]=A[i];
                r++;
            }

        }
        a=r;
        
    }
    
    for(i=0;i<r;i++)
    {
        if(A[i]>0)
        {
            A[p]=A[i];
            p++;
        }
    }
    
    
    for(i=0;i<p;i++)
    {
        printf("%d ",A[i]);
        
    }

}

else
printf("-1");

}

