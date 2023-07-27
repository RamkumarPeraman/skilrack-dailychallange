/*
 The program must accept N integers as the input. The program must print the smallest factor count among these N integers.

Boundary Condition(s):
1 <= N <= 100

Input Format:
The first line contains the value of N.
The second line contains N integers separated by space(s).

Output Format:
The first line contains the smallest factor count among the N integers.

Example Input/Output 1:
Input:
4
10 32 100 60

Output:
4

Explanation:
The factors of 10 are 1, 2, 5 and 10. So its factor count is 4.
The factors of 32 are 1, 2, 4, 8, 16 and 32. So its factor count is 6.
The factors of 100 are 1, 2, 4, 5, 10, 20, 25, 50 and 100. So its factor count is 9.
The factors of 60 are 1, 2, 3, 4, 5, 6, 10, 12, 15, 20, 30 and 60. So its factor count is 12.
Here the smallest factor count is 4.
Hence the output is 4

Example Input/Output 2:
Input:
2
42 32

Output:
6
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int l[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &l[i]);
    }
    
    int a[n];
    for (int i = 0; i < n; i++) {
        int c = 0;
        for (int j = 1; j <= l[i]; j++) {
            if (l[i] % j == 0) {
                c++;
            }
        }
        a[i] = c;
    }
    
    int minVal = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < minVal) {
            minVal = a[i];
        }
    }
    
    printf("%d", minVal);
}
