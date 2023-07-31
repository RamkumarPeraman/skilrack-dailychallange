/*Multiples in Range

The program must accept five integers A, B, X, Y and Z as the input. The program must print the multiples of X, Y and Z in the range from A to B (inclusive of A and B) as the output.

Boundary Condition(s):
1 <= A <= X, Y, Z <= B <= 10^5

Input Format:
The first line contains the values of A and B separated by space(s).
The second line contains the values of X, Y and Z separated by space(s).

Output Format:
The first line contains the multiples of X, Y and Z in the range from A to B (inclusive of A and B) separated by a space.

Example Input/Output 1:
Input:
2 15
3 4 6

Output:
3 4 6 8 9 12 15

Example Input/Output 2:
Input:
20 50
24 30 41

Output:
24 30 41 48*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,b,c,d,e;
    scanf("%d %d\n%d %d %d",&a,&b,&c,&d,&e);
    for(int i=a;i<=b;i++){
        if((i%c==0) || (i%d==0) || (i%e==0)){
            printf("%d ",i);
        }
    }

}