/*
Java - C -002

Please convert the following Java code to C so that the 
C program executes successfully passing the test cases.

import java.util.*;
public class Hello {
public static void main(String[] args) { 
    Scanner sc = new Scanner(System.in);
    //from and to will not be more than 10^5 int from sc.nextInt();
    int to = sc.nextInt();
    Set<Integer> allFactors = new TreeSet<>(); 
    for (int val = from; val <= to; val++) 
    { 
        for (int ctr = 1; ctr * ctr <= val; ctr++) 
        {
            if (val % ctr == 0) 
            { 
                allFactors.add(ctr);
                allFactors.add(val / ctr);
            }
        }
    }
    for (Integer factor: allFactors) 
    { 
        System.out.print(factor + " ");
    }
}
}*/

Program:

#include <stdio.h>
#include <math.h>

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    int fac[b+1];
    for (int i=0;i<=b;i++) {
        fac[i] = 0;
    }
    for (int i=a;i<=b;i++) {
        for (int j=1;j*j<=i;j++) {
            if (i%j== 0) {
                fac[j] = 1;
                fac[i/j] = 1;
            }
        }
    }
    for (int i=1;i<=b; i++) {
        if (fac[i] == 1) {
            printf("%d ", i);
        }
    }

    return 0;
}