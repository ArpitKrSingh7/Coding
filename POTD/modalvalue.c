// Professor Stephen gave his students a coding assignment where they work on a given dataset to find all the 3 central tendencies with some modified rules. However students were able to find mean and median with modified rules. Here modified mode is considered as an element that occurs more than half the size of dataset. Help students with a code that finds out the modal value of the dataset.

// NOTE : Can you come up with a solution that traverses through the dataset only once(without a nested loop)?

// Input Format

// First line of input denotes size of dataset
// Second line of input consists of N space seperated values representing elements in dataset
// Elements of the data set could be floating point values
// Constraints

// 1 <= N <= 100

// Output Format

// For each testcase, print the modal value of dataset on a new line.
// NOTE : If there exists no modal value, return -1 as the modal value of the dataset.
// Sample Input 0

// 7
// 1 2 89 2 2 3 2
// Sample Output 0

// 2
// Explanation 0

// In the given dataset, 2 occured for 4 times which is greater than half the size of dataset(7). So, 2 is the Modal value.

// Sample Input 1

// 8
// 5 6 8 5 5 7 8 3
// Sample Output 1

// -1
// Explanation 1

// There is no element that occurs more than half the size of dataset, so modal value is -1.




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,t=0;
    scanf("%d",&n);
    typedef struct dataset
        {
            char c[100];
        }hello;
    
    hello C[n];
    
    for(int i=0;i<n;i++)
        {
            scanf("%s", C[i].c);
        }
    
    for(int i=0;i<n;i++) 
        {
            for(int j=0;j<n;j++) 
                {
                    if (strcmp(C[i].c,C[j].c) == 0) 
                        {
                            t++;
                        }
                }
        if(t>n/2) 
            {
               printf("%s", C[i].c);
            return 0;
            }
        t=0;
        }
    printf("-1");
    return 0;
}
