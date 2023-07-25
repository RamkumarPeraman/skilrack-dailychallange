/* ProgramID- 7558:

Even/Odd Strength

The program must accept N integers as the input. The program must print the output based on the conditions given below.
- If the even integers have occurred more number of times than the odd integers then the program must print even as the output. 
- If the odd integers have occurred more number of times than the even integers then the program must print odd as the output. 
- If the even integers and the odd integers have occurred equal number of times then the program must print -1 as the output. 

Boundary Condition(s):
1 <= N <= 100
1 <= Each Integer Value <= 100

Input Format:
The first line contains the value of N.
The second line contains N integers separated by space(s).

Output Format:
The first line contains odd or even or -1.

Example Input/Output 1:
Input: 
10
1 6 5 3 5 7 8 5 2 3

Output:
odd

Explanation:
The odd integers are 1, 5, 3, 5, 7, 5, 3 and the count is 7
The even integers are 6, 8, 2 and the count is 3
Here the odd integers count is maximum  
Hence the output is odd

Example Input/Output 2:
Input:
8
1 2 3 4 5 6 7 8

Output:
-1*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,c=0,d=0;
    scanf("%d ",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&a[i]);
        if(a[i]%2==0){
            c++;
        }
        else{
            d++;
        }
    }
    if(c<d){
        printf("odd")
    }
    else if(c==d){
        printf("-1");
    }
    else{
        printf("even");
    }
}