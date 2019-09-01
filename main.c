//
//  main.c
//  C_exercise
//
//  Created by GeekJason on 2019/1/5.
//  Copyright © 2019年 GeekJason. All rights reserved.
//
///<调用系统中的>
#include <stdio.h>
#include <math.h>//使用数学函数调用math.h头文件
#include <time.h>
#include <stdlib.h>
#include <string.h>
//#include <conio.h>
//“调用文件中的”
#include "Header.h"
#include "Sort.h"
#include "pingfanggen.h"
//宏定义
#define _FILE_ ;//宏名后必须留空白 //表示当前文件名
#define _DATE_ ;//MM DD YYYY
#define _TIME_ ;//HH:MM:SS
#define _LINE_ ;//now line
#define _STDC_ ;//if ANSI ->1
//宏定义优化
#define ADD(x) ((x)+(x))//无宏陷阱写法


/*
 数据类型
 
 double result;
 char ch = 'A';
 int i = 2;
 float f = 2.3f;
 double d = 3.4;
 
 TurboC int=2 byte;long=4 byte; -32768～32767
 Visual C++ int = long = 4 byte; -21亿～21亿
 
 int  字节位不够（无法容纳）的情况会导致精度丢失
 解决方法：类型转换 int->double 并且 进行位宽定义 如%22.15e 数据宽度22位，数字小数部分为15位。
 
 */

int array[6]= { 1, 2, 3, 4, 5, 6 };

/*
 水仙花数
 */

int shuixianhua(int x)
{
    int is;
    int ge,shi,bai;
    ge = x % 10;
    shi = x/10%10;
    bai = x/100;
    
    if(ge*ge*ge+shi*shi*shi+bai*bai*bai == x)
    {
        is = 1;
        //return is;
        
    }
    else
    {
        is = 0;
        //return is;
    }
    
    //is = shuixianhua(n);
    if(is == 1)
    {
        printf("%d是水仙花数\n",x);
       
        
    }
    else
    {
        printf("%d不是水仙花数\t",x);
    }
    return 0;
}


/*
 求平方
 */

void qiupingfang()
{
    int a = 1,b = 4,c = 4;
    double x1,x2;
    printf("请输入一元二次方程的三个系数:\n");
    scanf("%d,%d,%d",&a,&b,&c);
    x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
    x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
    printf("一元二次方程的两个实数根：\n");
    printf("x1= %.2f\n",x1);
    // return 0;
}

/*
    求两数之和
 */


void add()
{
    int number1,number2;
    int sum;
    printf("请输入\n");
    scanf("%d%d",&number1,&number2);
    sum = number1 + number2;
    printf("%d+%d = %d\n",number1,number2,sum);
    
}

/*
 比较三数大小
 */


void compare()
{
    int a,b,c;
    printf("\n 请输入三个数");
    scanf("%d,%d,%d",&a,&b,&c);
    printf("\na = %d,b = %d,c = %d\n",a,b,c);
    // return 0 ;
}


void xiaoshu()
{
    float x = 123456.789;
    double y = 123456789.123456;
    printf("x = %f,y = % f\n",x,y);
    
}

void xiaoshu2()
{
    float x = 123.456;
    printf("%f\n %10f\n %10.2f\n %.2f\n %-10.2f\n",x,x,x,x,x);
    
}

void zhishu()
{
    float f = 1234.567;
    printf("%e\n",f);
    
}

/*
 类型转换
 */
void leixing()
{
    double result;
    char ch = 'A';
    int i = 2;
    float f = 2.3f;
    double d = 3.4;
    result = (ch/i)+(f*d)-(f+1.5);
    printf("result = %f\n",result);
    
}

void leixingzhuanhuan()
{
    int a = 3 , b = 5;
    float c = 3.6f;
    b = a+(int)c;
    
    printf("b = %d\n",b);
    
}

int getRandNum()
{
    //    srand(time(NULL));//随机数种子
    return rand();
}

double areaOfTriangle(double a,double b,double c)
{
    double area;
    double s;
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}

/*
 打印矩阵图 4*5
 */
void dayinjuzhen(){
    int i,j,n=0;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=5;j++,n++)
        {
            if(n%5==0)
            {
                printf("\n");
            }
            printf("%d\t",i*j);//转义字符r->回车，t-tab,v-垂直制表符
        }
    }
     printf("\n");
    
}


/*
 圆周率-格里高利共公式法
 π/4=1−1/3+1/5−1/7+...

 */
int pi1(){
    int sign = 1;
    double pi = 0.0,//多项式的值，用于表示派
    n = 1.1,//n代表分母
    term = 1.0;//term代表当前项的值
    int count=0;
    while (fabs(term)>=1e-6)//检查当前 tern 的绝对值是否大于等于10的-6次
    {
        pi = pi +term;//把当前项term 累加到pi中
        n = n + 2;//n+2是下一项的分母
        sign = -sign;//sign代表符号，下一项的符号与上一项的符号相反
        term = sign/n;//求出下一项的值
        count++;
    }
    pi = pi*4;//多项式的和pi乘以4，才是pi的近似值
    printf("pi=%10.8f\n",pi);
    printf("运行%d次\n",count);
    return 0;
}

//同上 优化版
int pi2()
{
    double pi4 = 0;
    double j = 0;
    double i = 1;
     int count=0;
    while (1)
    {
        j = pow(-1, i + 1) * (1.0 / (2 * i - 1));
        
        //求绝对值
        if (fabs(j) <= 0.0001)
            break;
        else
        {
            pi4 += j;
            
            i++;
             count++;
        }
    }
    
    printf("π = %f\n", pi4 * 4);
    printf("运行%d次\n",count);
    return 0;
}


/*
汉诺塔 递归思路
 */

void hanoi(int n,char x,char y,char z){
   
    if(n == 0){
        
    }
    else
    {
        hanoi(n-1, x, y, z);
        
        printf("%c->%c\t",x,y);
        hanoi(n-1, z, y, x);
       
    }
    
}


/*
 数学归纳法
 */
void prove(int n)
{
    if(n == 0)
    {
        printf("根据步骤1，得出p(%d)成立.\n",n);
        
    }
    else{
        prove(n - 1);
        printf("根据步骤2，可以说【若p(%d)成立,则p(%d)也成立】\n",n-2,n);
        printf("因此可以说【p(%d)】是成立的.\n",n);
        
    }
}


/*
 斐波那契数列
 
 斐波那契数，通常用 F(n) 表示，形成的序列称为斐波那契数列。该数列由 0 和 1 开始，后面的每一项数字都是前面两项数字的和。也就是：
 
 F(0) = 0,   F(1) = 1
 F(N) = F(N - 1) + F(N - 2), 其中 N > 1.
 给定 N，计算 F(N)。
 */


int fabonacci(){
    int f1 = 1, f2 = 2,f3;
    int i;
    printf("%d12d\n%12d\n",f1,f2);
    for(i = 1;i<=38;i++)
    {
        f3 = f1+f2;
        printf("%12d\n",f3);
        f1=f2;
        f2=f3;
    }
    return 0;
}


//  带参数版
//int fabonacci2(int n){
//    int f[200];
//    if(n == 1 || n == 2)
//        return f[n] = 1;
//    else{
//        if(f[n] == 0)
//            return f[n] = fabonacci(n - 1) + fabonacci(n - 2);
//        else
//            return f[n];
//    }
//}
//int main()
//{
//    int n;
//    while(scanf("%d",&n) != EOF){
//        int res;
//        res = fabonacci(n);
//        printf("%d",res);
//    }
//    return 0;
//}




//用数组的方法表示 斐波那契

int fbnc()
{
    int i;
    int f[20]={1,1};
    for (i=2; i<20; i++) {
        f[i]=f[i-2]+f[i-1];
        
    }
    for (i=0; i<20; i++) {
        if(i%5==0){
            printf("\n");
            
        }
        printf("%12d",f[i]);
        
    }
    printf("\n");
    return 0;
}

/*
 素数【质数】
 */

int sushu(){
    
int m;  // 输入的整数
int i;  // 循环次数
int k;  // m 的平方根
printf("输入一个整数：");
scanf("%d",&m);
// 求平方根，注意sqrt()的参数为 double 类型，这里要强制转换m的类型
k=(int)sqrt( (double)m );
for(i=2;i<=k;i++)
if(m%i==0)
break;
// 如果完成所有循环，那么m为素数
// 注意最后一次循环，会执行i++，此时 i=k+1，所以有i>k
if(i>k)
printf("%d是素数。\n",m);
else
printf("%d不是素数。\n",m);
return 0;
}

void prime(int n){
    
//    for(int i=2;i<=n-1;i++)
//    {
//        if(n%i == 0)
//        {
//            break;
//        }
//    }
//
//            if(i<n)
//            {
//                printf("%d 不是素数\n",n);
//                break;
//            }
//            else{
//                printf("%d 是素数\n",n);
//                break;
//            }
//
//

    
    int i,k;
    k=sqrt(n);
    for (i=2; i<=k; i++) {
        if (n%i==0) {
            break;
        }
    }
        if (i<=k) {
            printf("%d不是素数\n",n);
        }
        else
        {
            printf("%d是素数\n",n);
        }
    
    //return 0;
}

//扩展 求100-200 间的全部素数
//int prime100_200(int n);
int prime100_200()
{
    int n,k,i,m=0;
    for (n=101; n<=200; n=n+2) {
        k=sqrt(n);
        for (i=2; i<=k; i++) {
            if (n%i==0) {
                break;
            }
        }
        if (i>=k+1) {
            printf("%d\t",n);
            m=m+1;
        }
        if (m%10==0) {
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}



/*
 阶乘
 */
int jiechen(void);
int jiecheng(void){
    
    return 0;
}



/*
    计算闰年
    先整除100，在同时被400整除
 */


 
/*
 二维数组
 
 */

void array_two()
{
    int a[2][3] = {{1,2,3},{4,5,6}};
    int b[3][2] ;
    int i,j;
    printf("array a:\n");
    for (i=0; i<=1; i++)
    {
        for (j=0; j<=2; j++)
        {
            printf("%5d",a[i][j]);
            b[j][i] = a[i][j];
        }
        printf("\n");
    }
    printf("array b:\n");
    for (i=0; i<=2; i++) {
        for (j=0;j<=1;j++) {
            printf("%5d",b[i][j]);
            
        }
        printf("\n");
    }
  
}


/*
 矩阵最大值
 */

void array_max()
{
    int i,j,row = 0,colum = 0,max;
    int a[3][4]={{1,2,3,4},{9,8,7,6},{-10,10,-5,2}};
    max = a[0][0];
    for (i=0; i<=2; i++)//行
    {
        for (j=0;j<=3; j++)//列
        {
            if (a[i][j]>max) {
                max = a[i][j];
                row = i;
                colum = j;
            }
            
        }
            
    }
   
    printf("最大阿值=%d，位于第%d行%d列\n",max,row+1,colum+1);
}


void zifuchuan()
{
    char str[3][20];
    char string[20];
    int i ;
    
   
    
    for (i=0; i<3; i++) {
      //  gets(str[i]);//会报错 warning: this program uses gets(), which is unsafe.
        /**
         对于C语言中不安全的函数我们要使用安全的函数来替代，用fgets()、strncpy()、strncat()来替代gets()、strcpy()、strcat()等不限制字符串长度，不检查数组越界的函数。实际上编译器在编译完代码之后就已经提示了一个警告warning, this program uses gets(), which is unsafe.,所以，我们应该重视编译器给我们的提示，这样往往能避免常见的错误。
         */
        //gets()函数存在一个严重的缺陷，这个缺陷就是：它不会检查数组是否能够装得下输入行。
        scanf("%s", str[i]);
       // printf(str[i]);
        
    }
    if (strcmp(str[0], str[1])>0) {
        strcpy(string, str[0]);
        
    }
    else{
        strcpy(string, str[1]);
        }
    
    if (strcmp(str[2],string)>0) {
            strcpy(string, str[2]);
        
        }
    
    
    printf("\n最大数是：\n%s\n",string);
    
}


/*
 主函数
 */



int main()
{
    
    //宏定义调用
    printf("File : %s\n", __FILE__);
    // 开始
    printf("开始学习C语言吧：\n");
    printf("字符串排序\n");
    zifuchuan();
    printf("素数玩法\n");
    //素数根号法
    sushu();
    //素数递归法
    prime(17);
    
    
    int a = 0;
    a = ADD(2)*ADD(2) ;
    
    printf("%d\n",a);
    //add();
    //compare();
    //    xiaoshu();
    //    xiaoshu2();
    //    zhishu();
    //    qiupingfang();
    //leixing();
    leixingzhuanhuan();
    int x = getRandNum();
    printf("%d\n",x);
    shuixianhua(x);
    
    dayinjuzhen();
    
    //    double x1,y1,z1;
    //    double area;
    //    printf("请输入三边边长：");
    //    scanf("%lf,%lf,%lf",&x1,&y1,&z1);
    //    area = areaOfTriangle(x1, y1, z1);
    //    printf("%lf\n",area);
    pi1();
    pi2();
    
    //han nuo ta
    hanoi(6,'A','B','C');
    //shu xue gui na
    //prove(8);
    //fei bo na qi
    printf("%d\n",fabonacci());
    
    

    
    
        //clrscr();
    //数组长度
        int len=sizeof(array)/sizeof(int);
        printf("Length Of Array=%d\n", len);
       // getch();
    
    //fib(3);
    
    prime100_200();
    
    
    fbnc();
    
    header();
//    //求解平方方程
//    double af;
//    double bf;
//    double cf;
//    printf("请输入二次平方方程的a,b,c系数\n");
//    scanf("%lf,%lf,%lf",&af,&bf,&cf);
//    pingfanggen(af,bf,cf);
//
    
    //冒泡排序
    //maopao();
    
    //矩阵反转
    array_two();
    
    //矩阵最大值
    array_max();
    
    //int bb[10]={12,22,35,52,12,32,55,66,77.91};
   // maopao(bb[10]);
    
    
    
    
}



