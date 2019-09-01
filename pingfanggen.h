//
//  pingfanggen.h
//  ddd
//
//  Created by GeekJason on 2019/8/16.
//  Copyright © 2019 GeekJason. All rights reserved.
//
/*
 求解 ax^2 + bx +c =0 方程的解
 a=0 不是二次方程
 b^2-4ac=0 有两个相等实根
 b^2-4ac>0 有两个不等实根
 b^2-4ac<0 有两个共轭复数根。p + qi 和 p-qi 形式输出。p=-b/2a，
 q=（根号下b^2-4ac）/2a
 */

#ifndef pingfanggen_h
#define pingfanggen_h
#include<stdio.h>
#include<math.h>

void  pingfanggen(double a,double b,double c)
 {
    
    double disc,x1,x2,realpart,imagpart;
    if (fabs(a)<=1e-6)// <=1e-6判断是否是等0，小于极小值(10^-6)
    {
        printf("这不是二次方程");
    }
    
    else {
         disc = b*b-4*a*c;
        
        if (fabs(disc)<=1e-6)
            //b^2-4ac=0 有两个相等实根
         {
             printf("有两个相等实数根:%8.4f\n",-b/(2*a));
         } else {
             if (disc>1e-6) {
                 x1 = (-b+sqrt(disc)/(2*a));
                 x2 = (-b-sqrt(disc)/(2*a));
                 
                 printf("有两个画不同的实数根：%8.4f and %8.4f\n",x1,x2);
                 
             } else {
                 // 其他情况b^2-4ac<0 有两个共轭复数根。
                 realpart = -b/(2*a);
                 imagpart=sqrt(-disc)/(2*a);
                 printf("有复数根\n");
                 printf("%8.4f+%8.4fi\n",realpart,imagpart);
                 printf("%8.4f-%8.4fi\n",realpart,imagpart);
                 
             }
         }
         
    }
 //    return 0;
 }



#endif /* pingfanggen_h */
