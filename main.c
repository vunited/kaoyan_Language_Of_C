//
//  main.c
//  test_array_01
//
//  Created by GeekJason on 2019/1/13.
//  Copyright © 2019 GeekJason. All rights reserved.
//

#include <stdio.h>


int main(int argc, const char * argv[]) {
    int t,a[5];
    long int i,k;
    for(i = 95860;;i++)
    {
        k = i;
        t = 4;
        while (k!=0)
        {
            a[t] = k%10;
            k = k / 10;
            t --;
        }
        if(a[0] == a[4] && a[1] == a[3])
        {
            printf("新的对称数：%d%d%d%d%d\n",a[0],a[1],a[2],a[3],a[4]);
            printf("该车的速度是：%.2f\n",(i-95859)/2.0);
            break;
        }
    }
    
    printf("Hello, World!\n");
    return 0;
}
