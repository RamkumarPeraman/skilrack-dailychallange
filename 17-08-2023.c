/*Python-C-001

Please convert the following Python code to C so that the C program executes successfully passing the test cases.

X, Y = input().split()

left, right = Y.split('.') print(int(X)*int (left), '.', int(X)*int (right), sep="")*/

Program:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char x[10], y[10];
    scanf("%s %s", x, y);

    char *left = strtok(Y, ".");
    char *right = strtok(NULL, ".");

    int a = atoi(X);
    int l = atoi(left);
    int r = atoi(right);

    printf("%d.%d\n", a * l, a * r);

    return 0;
}