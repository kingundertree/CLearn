//
//  main.c
//  递归算法
//
//  Created by xiazer on 14-7-8.
//  Copyright (c) 2014年 xiazer. All rights reserved.
//

#include <stdio.h>

int recursive1(int n);
int recursive2(int n,int m);

int main(int argc, const char * argv[])
{

    // insert code here...
    printf("Hello, World!\n");
    
    long int num1 = recursive1(5);
    printf("num1-->>%ld \n",num1);
    
    long int num2 = recursive2(5, 1);
    printf("num2-->>%ld \n",num2);
   
    return 0;
}


int recursive1(int n)
{
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    if (n > 1) {
        return n*recursive1(n-1);
    }
    return 0;
}

int recursive2(int n,int m)
{
    if (n < 0) {
        return 0;
    }
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return m;
    }
    if (n > 0) {
        return recursive2(n-1, n*m);
    }
    return 0;
}