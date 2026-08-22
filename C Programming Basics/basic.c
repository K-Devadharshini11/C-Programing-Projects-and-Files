
//#include <stdio.h>
//int main(){
//int i,sum=0,n=10;
//for(i=1;i<=n;i++){
//    sum+=i;
//     if (n<0){
//        goto add;
//     }
//
//    }
//add:
//printf("Sum=%d",sum);
//}


//looping
//#include<stdio.h>
//int main(){
//int i,j,k,row;    //i=rows j=columns
//printf("Enter the rows:");
//scanf("%d",&row);
//for(i=1;i<=row;i++){
//    for(j=1;j<=row;j++){
//        if(i+j<=row){
//           printf("@");
//         }
//        else{
//           printf("*");
//
//        }
//}
// printf("\n");
//}
//}

//#include<stdio.h>
//int main(){
//int i,j,k,row;    //i=rows j=columns
//printf("Enter the rows:");
//scanf("%d",&row);
//for(i=1;i<=row;i++){
//     for(j=1;j<=row-i;j++){
//        printf("@");
//     }
//       for(k=1;k<=i;k++){
//         printf("*");
//     }
//     printf("\n");
//  }
//}


//#include <stdio.h>
//int main(){
//int i,j,k,row;    //i=rows j=columns
//printf("Enter the rows:");
//scanf("%d",&row);
//for(i=1;i<=row;i++){
//    for(j=3;j>=i;j--){
//        printf("%d",i);
//    }
//    for(k=2;k<=i;k++){
//         printf("%d",i);
//     }
//     printf("\n");
//   }
//}



//printing of letterss next to one another
//#include <stdio.h>
//int main(){
//int i,j,row;    //i=rows j=columns
//printf("Enter the rows:");
//scanf("%d",&row);
//for(i=1;i<=row;i++){
//    for(j=1;j<=row;j++){
//        if(i==1||i==3||i==5||j==1&&i<3||j==5&&i>3){
//            printf("* ");
//        }
//        else{
//            printf("  ");
//        }
//    }
//
//    printf("   ");
//
//
//    for(j=1;j<=row;j++){
//        if(i==1||i==3||i==5||j==1&&i<3||j==5&&i>3){
//            printf("* ");
//        }
//        else{
//            printf("  ");
//        }
//    }
//    printf("\n");
//
//
//}
// printf("\n");
//}



// my name
#include <stdio.h>
int main(){
int i,j,row;    //i=rows j=columns
printf("Enter the rows:");
scanf("%d",&row);
for(i=1;i<=row;i++){
    for(j=1;j<=row;j++){
        if(i==1||i==3||i==5||j==1){
            printf("* ");
        }
        else{
            printf("  ");
        }
    }
    printf("  ");
    for(j=1;j<=row;j++){
        if(i==5||j==1){
            printf("* ");
        }
        else{
            printf("  ");
        }

    }
    printf("  ");

    for(j=1;j<=row;j++){
        if(i==1||i==3||j==1||j==5){
            printf("* ");
        }
        else{
            printf("  ");
        }
    }
    printf("  ");
    for(j=1;j<=row;j++){
        if(j==1||j==5||j==2&&i==2||j==3&&i==3||j==4&&i==2){
            printf("* ");
        }
        else{
            printf("  ");
        }
    }
     printf("  ");

     for(j=1;j<=row;j++){
        if(i==1||i==3||j==1||j==5){
            printf("* ");
        }
        else{
            printf("  ");
        }
    }
    printf("  ");

     for(j=1;j<=row;j++){
        if(i==1||j==3){
            printf("* ");
        }
        else{
            printf("  ");
        }
    }
    printf("  ");

    printf("  ");

     for(j=1;j<=row;j++){
        if(i==3||j==1||j==5){
            printf("* ");
        }
        else{
            printf("  ");
        }
    }
    printf("  ");

    for(j=1;j<=row;j++){
        if(j==3){
            printf("* ");
        }
        else{
            printf("  ");
        }
    }
    printf("  ");

    printf("\n");
}
}
