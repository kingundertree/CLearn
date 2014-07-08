//
//  main.c
//  UnitFour
//
//  Created by xiazer on 14-7-6.
//  Copyright (c) 2014年 xiazer. All rights reserved.
//

#include <stdio.h>
#include <string.h>

#define DENSITY 62.4
#define PRAISE "what a super marvelous" //宏定义

int main(int argc, const char * argv[])
{

    // insert code here...
    printf("Hello, World!\n");
    
    //片段1 常见字符串操作 sizeof strlen
//    float weight,volume;
//    int size;
//    long int letters;
//    char name[40];
//    
//    printf("hi,what is your name? \n");
//    scanf("%s",name);
//
//    printf("%s,what is your weight? \n",name);
//    scanf("%f",&weight);
//    
//    size = sizeof name;
//    volume = weight/DENSITY;
//    letters = strlen(name);
//    
//    printf("%s, your volume is %2.2f cubic feet \n",name,volume);
//    printf("Also, your first name has %ld letters \n",letters);
//    printf("and we have %d bytes to store it in \n",size);
//    
//    char newName[100] = "冬天的风，往北吹 \n";
//    printf("--->>%s",newName);

    char name[40];
    
    printf("what is your name? \n");
    scanf("%s",name);
    printf("Hello, %s. %s \n",name,PRAISE);
    printf("Your name of %ld letters occupies %ld memory cells \n",strlen(name),sizeof name);
    printf("The phrase of praise has %ld letters",strlen(PRAISE));
    printf("add occupies %ld memory cells \n",sizeof PRAISE);
    
    return 0;
}

