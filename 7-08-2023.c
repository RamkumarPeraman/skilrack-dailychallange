/*
Sum and Average - Even and Odd

The program must accept a list of integers as the input. The program must print the sum of even integers in the list then the program must print the average of odd integers in the list with the precision up to one decimal place. If there is no even integer in the list, the program must print -1 as the output. If there is no odd integer in the list, the program must print -1 as the output.

Note: Zero is neither odd nor even. So no need to consider the zero to find the sum of even integers and to find the average of odd integers.

Boundary Condition(s):
0 <= Each integer value <= 10^5

Input Format:
The first line contains the list of integers separated by space(s).

Output Format:
The first line contains the sum of even integers in the list or -1.
The second line contains the average of odd integers in the list or -1.

Example Input/Output 1:
Input:
1 2 3 4 5 6 7 8

Output:
20
4.0

Explanation:
The even integers are 2 4 6 and 8. So their sum is 20
The odd integers are 1 3 5 and 7. So their average is 4.0
Hence the output is
20
4.0

Example Input/Output 2:
Input:
10 20 30 40 50

Output:
150
-1

Example Input/Output 3:
Input:
11 13 15 17 19

Output:
-1
15.0*/

Program:

#include <stdio.h>
int main() {
    int i,j,a[100],n;
    int sum=0,k=0;
    float s=0.0;
    while(scanf("%d",&n)==1 && n!=-1 && i<100)
    {
        a[i]=n;
        i++;
    }
    for(j=0;j<i;j++)
    {
        if(a[j]%2==0)
        {
            sum+=a[j];
        }
        else{
            s+=a[j];
            k++;
        }
    }
    if(sum==0)
    {
        printf("-1\n");
    }
    else{
        printf("%d\n",sum);
    }
    if(s==0)
    {
        printf("-1");
    }
    else{
        printf("%.1f",s/k);
    }
    return 0;
}