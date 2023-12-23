// You have decided to move to a new neighbourhood and want to select the best house to live in. There are N houses on a road and you have to select one among them. You have a list of M amenities which you prefer to have in the house. Each house may either have/do not have any of the M amenities. Your task is to choose the house that minimizes the maximum distance you have to walk to experience all of the M amenities.

// Houses are labelled from 1 to N. If there are multiple best houses,print all of them in ascending order.

// Hint1: You have M quantities each for N houses. How do you store them? Each house having an array of values??

// Hint 2: Can you use a structure??

// Hint 3: If all the houses lack a specific amenity, the maximum distance you have to walk can be treated infinite

// Input Format

// First line consists of the integer N Second line consists of the integer M The next N lines each contain M true/false conveying presence/absence of each of the amenities

// Constraints

// 1<=N<=100 1<=M<=100

// Output Format

// Print the best house/ best houses in ascending order

// Sample Input 0

// 3
// 3
// true true false
// false true false
// false true true
// Sample Output 0

// 2
// Explanation 0

// The first house already has amenities 1 and 2. To experience the third amenity he has to walk 2 units,i.e to the third house. Similarly a person living in the third house has to walk 2 units to the first house to experience the first amenity.

// The person living in the second house has to walk just 1 unit of distance to experience the first and third amentity. Therefore house 2 is the best house

// Sample Input 1

// 2
// 3
// true true true
// true true false
// Sample Output 1

// 1
// Explanation 1

// House 1 already has all the amenities



#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n;
	scanf("%d *[^\n]", &n);
	int m;
	scanf("%d *[^\n]",&m);
    
	int dist[n][m];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
			dist[i][j] = 1000;
	
	struct home
	{
		char val[m*10];
		int v[m];
	}h[n];
	for(int i = 0; i < n; i++)
	{
		int I = 0;
		fgets(h[i].val,sizeof(h[i].val),stdin);
		if(h[i].val[I] == 't')
			h[i].v[I++] = 1;
		else
			h[i].v[I++] = 0;
		for(int j = 0; h[i].val[j] != '\0'; j++)
		{
			if(h[i].val[j-1] == ' ')
			{
				if (h[i].val[j] == 't')
					h[i].v[I++] = 1;
				else
					h[i].v[I++] = 0;
			}
		}
	}
	for(int i = 0; i < n; i++)
	{
        for(int j = 0; j < m; j++)
        {
            if(h[i].v[j] == 0)
            {
				int up,dw,k1 = 1, k2 = 1, f1 = 0, f2 = 0;
				for(up = i-1; up > -1; up--)
				{
					if(h[up].v[j] == 0)
						k1++;
					else
					{
						f1 = 1;
						break;
					}
				}
				for(dw = i+1; dw < n; dw++)
				{
					if(h[dw].v[j] == 0)
						k2++;
					else
					{
						f2 = 1;
						break;
					}
				}
				if(i != 0 && i != n-1)
				{
					if(f1+f2 == 2)
						dist[i][j] = (k1<=k2)?k1:k2;
					else if(f1 == 1 && f2 == 0)
						dist[i][j] = k1;
					else if(f1 == 0 && f2 == 1)
						dist[i][j] = k2;
				}
				else if(i == 0)
				{
					if(f2 == 1)
						dist[i][j] = k2;
				}
				else if(i == n-1)
				{
					if(f1 == 1)
						dist[i][j] = k1;
				}
			}
			else
				dist[i][j] = 0;
        }
	}
	int max[n];
	for(int i = 0; i < n; i++)
		max[i] = 0;
	for(int i = 0; i < n; i++)
	{
		int max_ = 0;
		for(int j = 0; j < m; j++)
		{
			if(max_ < dist[i][j] && dist[i][j] != 1000)
				max_ = dist[i][j];
		}
		max[i] = max_;
	}
	int min_ = max[0];
	for(int i = 1; i < n; i++)
	{
		if(max[i] < min_)
			min_ = max[i];
	}
	for(int i = 0; i < n; i++)
	{
		if(max[i] == min_)
			printf("%d ", i+1);
	}
}