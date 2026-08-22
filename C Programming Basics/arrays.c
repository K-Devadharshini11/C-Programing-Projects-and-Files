//day 5
//ARRAYS

//reversing an array
//#include <stdio.h>
//int main(){
//int i;
//int arr[5]={12,20,30,40,50};
//int n=sizeof(arr)/sizeof(int);
//printf("Size:%d\n",n);
//for(i=n-1;i>=0;i--) {
//  printf("%d\n",arr[i]);
//}
//}

//finding max and min
//#include <stdio.h>
//int main(){
//int i;
//int arr[5]={12,20,30,40,50},max=arr[0];
//int n=sizeof(arr)/sizeof(int);
//printf("Size:%d\n",n);
//for(i=0;i<=0;i++)  {
//    if(arr[i]>max){
//       max=arr[i]
//    }
//
//printf("max:%d",max);
//
//}



//2d array in uneven order problem
#include <stdio.h>
int main(){
    int i,j;
    int a[3][3]={{1,3},{2,-3,4},{6,3}};
    for(i=0;i<3;i++){
        int n=sizeof(a[i])/sizeof(int);
        for(j=0;j<3;j++){
          if(a[i][j]!=0){
            printf("%d ",a[i][j]);
        }

    }
     printf("\n");
}
}
