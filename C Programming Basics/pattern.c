//#include <stdio.h>
//int main(){
//int i,j,k,row;    //i=rows j=columns
//printf("Enter the rows:");
//scanf("%d",&row);
//for(i=1;i<=row;i++){
//     for(j=1;j<=row-i;j++){
//        printf("  ");
//     }
//       for(k=1;k<=i;k++){
//         printf("* ");
//     }
//     printf("\n");
//  }
//}

//imp
//#include <stdio.h>
//int main(){
//int i,j,k,row;    //i=rows j=columns
//printf("Enter the rows:");
//scanf("%d",&row);
//for(i=1;i<=row;i++){
//    for(j=i;j>=1;j--){
//        printf("%d",j);
//    }
//    for(k=2;k<=i;k++){
//         printf("%d",k);
//     }
//     printf("\n");
//   }
//}

//pyramid shape in the prev output


#include <stdio.h>
int main(){
int i,j,row,letter=65;    //i=rows j=columns
printf("Enter the rows:");
scanf("%d",&row);
for(i=1;i<=row;i++){
        for(j=1;j<=i;j++){
          printf("%c",letter);
          letter+=3;
        }
        printf("\n");
}
}

