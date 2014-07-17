//
//  main.c
//  UnitSix
//
//  Created by xiazer on 14-7-17.
//  Copyright (c) 2014年 xiazer. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    
    char ch[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    for (int i = 0; i < 26; i++) {
        printf("%c\n",ch[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            printf("$");
        }
        printf("\n");
    }
    
    char chs = 'F';
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c",chs-j);
        }
        printf("\n");
    }
    
    
    return 0;
}
