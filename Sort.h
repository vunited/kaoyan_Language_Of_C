////
////  sort.h
////  ddd
////
////  Created by GeekJason on 2019/7/23.
////  Copyright © 2019 GeekJason. All rights reserved.
////
//
#ifndef sort_h
#define sort_h




///*
// 1.冒泡排序
// 
// */




int maopao()
{
    int a[10];
    int i,j,t;
    printf("请输入是个数字：\n");
    for (i=0; i<10; i++) {
        scanf("%d",&a[i]);
        printf("\n");
    }
    
    
    for (i=0; i<10; i++) {
        
        
            if (a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        
            
            
        }
        
    
    printf("排序后的数字是：\n");
    for (i=0; i<10; i++) {
        printf("%d",a[i]);
        
    }
    
    return 0;
    
}
    
    
    
    
    
//    printf("----");
//    for (int i=0; i<10; i++) {
//        scanf("%d",&a[i]);
//
//    }
//
//
//
//    int j,t;
//
//
//    for (j=0; j<9; j++) {
//        for (int i=0; i<9-j; i++) {
//            if (a[i]>a[i+1]) {
//                t=a[i];
//                a[i]=a[i+1];
//                a[i+1]=t;
//            } else {
//
//            }
//        }
//        printf("排序后：\n");
//        for (int i=0; i<10; i++) {
//            printf("%d",a[i]);
//        }
//        printf("\n");
//
//    }
//


//
//int maopao(int *a)
//{
//    int *a[10];
//    int i,j,t;
//    printf("input 10 numbers:\n");
//
//    for (i=0; i<10; i++) {
//       scanf("%d",&a[i]);
//
//   }
//   printf("");
//
//    for (j=0; j<9; j++) {
//        if (a[i]>a[i+1]) {
//            t = a[i];
//           a[i]=a[i+1];
//           a[i+1]=t;
//        }
//       printf("the sorted numbers:\n");
//        for (i=0; i<10; i++) {
//            printf("%d",a[i]);
//
//        }
//     printf("\n");
//  }
//    return 0;
//}

#endif /* sort_h */
