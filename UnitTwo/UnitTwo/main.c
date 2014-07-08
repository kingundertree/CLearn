//
//  main.c
//  UnitTwo
//
//  Created by xiazer on 14-7-6.
//  Copyright (c) 2014年 xiazer. All rights reserved.
//

#include <stdio.h>

void newMethod(void);

int main(int argc, const char * argv[])
{

    // insert code here...
    printf("Hello, World!\n");
    
    newMethod();
    
    return 0;
}

void newMethod(void){
    int  i = 99;
    int j = i*i;
    
    printf("new num is -->>%d \n",j);
}