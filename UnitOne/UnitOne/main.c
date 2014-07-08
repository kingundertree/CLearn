//
//  main.c
//  UnitOne
//
//  Created by xiazer on 14-7-4.
//  Copyright (c) 2014年 xiazer. All rights reserved.
//

#include <stdio.h>
void butter(void);

//int main(int argc, const char * argv[])
int main(void)
{
    /* 片段1 */
//    int num;
//    num = 111;
//    
//    /* 简单的注释 */
//    printf("i am a simple ");
//    printf("computer . \n");
//    
//    printf("my favorite number is %d because it is first .\n",num);
//    
//    butter();

    /* 片段2 */
    int n1, n2, n3;//注释
    
    n1 = 5;
    n2 = n1*n1;
    n3 = n1*n2;
    
    printf("n1,n2,n3---->>%d, %d, %d \n",n1,n2,n3);
    
    return 0;
}


void butter(void) //定义新的函数
{
    printf(" new methode begin \n");
}



