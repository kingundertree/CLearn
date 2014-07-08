//
//  main.c
//  UnitThree
//
//  Created by xiazer on 14-7-6.
//  Copyright (c) 2014年 xiazer. All rights reserved.
//

#include <stdio.h>
#include <inttypes.h>

int main(int argc, const char * argv[])
{

    // insert code here...
    printf("Hello, World!\n");

    //片段1
//    float weight;
//    float value;
//    
//    printf("enter your weight value:\n");
//    printf("获得您的weight 值: \n");
//    scanf("%f",&weight);
//    
//    value = 770 * weight * 14.5833;
//    
//    printf("value is -->>%f \n",value);
    
    //片段2 八进制和十六进制
//    int x = 100;
//    printf("dec = %d,octal = %o,hex = %x \n",x,x,x);
//    printf("dec = %d,octal = %#o,hex = %#x \n",x,x,x);

    //片段3 整数溢出
//    int i = 2147483647; //有符号整形，包括正负，任何数值类型都是有范围的
//    unsigned int j = 4294967295; // 无符号整形，0 和正整数
//    
//    printf("%d %d %d \n",i,i+1,i+2);
//    printf("%u %u %u \n",j,j+1,j+2);

    //片段4 long shot long long 数值
//    unsigned int un = 3000000000;
//    short end = 200;
//    
//    long big = 65537;
//    long long verybig = 123445678903211;
//    
//    printf("un = %u and not %d \n",un,un);
//    printf("end = %hd and not %d \n",end,end);
//    printf("big = %ld and not %ld \n",big,big);
//    printf("verybig = %lld and not %lld \n",verybig,verybig);

    //片段5 字符串
//    char response;
//    char itable,latan;
//    
//    response = 'A';
//    itable = '&';
//    latan = '<';
//    
//    printf("ALL char -->>%d/%d/%d \n",response,itable,latan);

    //片段6 输入字段获得对应值
//    char enter;
//    scanf("%c",&enter);
//    
//    printf("The code for %c is %d \n",enter,enter);

    //片段7 可移植类型数据
//    int16_t me16;
//    
//    me16 = 4593;
//    printf("me16 = %hd \n",me16);
//    printf("me16 = %" PRId16 "\n",me16);

    //片段8 浮点型数据
//    float about = 32000.0;
//    double abet = 2.14e9;
//    
//    double dip = 5.32e-5;
//    
//    printf("%f can be write %e \n",about,about);
//    printf("%f can be write %e \n",abet,abet);
//    printf("%f can be write %e \n",dip,dip);

    //片段9 输出类型大小
//    printf("Type int --->> %lu bytes \n",sizeof(int));
//    printf("Type char --->> %lu bytes \n",sizeof(char));
//    printf("Type long --->> %lu bytes \n",sizeof(long));
//    printf("Type double --->> %lu bytes \n",sizeof(double));
    
    //片段10 转义系列
//    float salary;
//    
//    printf("\a Enter your desired monthly salary: ");
//    printf(" &__ \b\b\b\b\b");
//    scanf("%f",&salary);
//    printf("\n\t$%.2f a month is $%.2f a year.",salary,salary*12);
//    
//    printf("\r Gee!\n");
    
    //片段11 数字转字符串
//    int value;
//    scanf("%d",&value);
//    
//    printf("new char --->> %c",value);

    //片段12 警报提示
//    printf("\a warning ! \n");

    //片段13 float转换
//    double value;
//    value = 4.331e10;
//    printf("value is %f and is not %e \n",value,value);

    //片段14 总描述转换
//    int years;
//    scanf("%d",&years);
//    long int num = 3.156e7;
//    printf("How much second --->>%ld \n",num*years);

    //片段14 计算
//    double value  = 2.0e-23;
//    printf("value--->>%e",value);
//    int num;
//    
//    scanf("%d",&num);
//    printf("so much --->>%e \n",num*950*value);

    //片段15 计算
    int height;
    
    scanf("%d",&height);
    
    printf("how many cm --->>%f \n",height*2.54);
    
    scanf("%d",&height);
    printf("hao many inch --->%f \n",height/2.54);
    
    
    return 0;
}










