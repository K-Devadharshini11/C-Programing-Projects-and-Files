/*
#include <stdio.h>
#include <string.h>
int main(){
char c[10]={'m','a','m','\0'};
char x[10]={'s','i','r','\0'};
strcat(c,x);
printf("%s",c);
}*/


/*
#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main(){
int i ;
char result[50]="";
char s[50]={"mOM"};
int l=strlen(s);
for(i=0;i<=l;i++){
  if((int)s[i]>=65&&(int)s[i]<=90){
    result[i]=(char)(s[i]+32);
    }
   else if((int)s[i]>=97&&(int)s[i]<=122){
     result[i]=(char)(s[i]-32);
     }
     else{
     }
     
     }
     printf("Result:%s", result);
}*/


/*
#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main(){
int i,c ;
char result[50]="";
char s[50]={"mOM"};
int l=strlen(s);
for(i=0;i<=l;i++){
 c=s[i];
  if(c>=65&&c<=90){
    result[i]=(char)(s[i]+32);
    }
   else if(c>=97&&c<=122){
     result[i]=(char)(s[i]-32);
     }
     else{
     }
     
     }
     printf("Result:%s", result);
}*/


/*
#include<stdio.h>
#include<string.h>
int main(){
int i,c,l;
char result[50]="";
char s[50]={"aBI@"};
l=strlen(s);
for(i=0;i<l;i++){
c = s[i];
if(c>='A' && c<='Z'){
result[i] = (c+32);
}
else if(c>='a' && (int)c <='z'){
result[i] = (c-32);
}
else{
result [i]=c;
}
}
printf("result:%s",result);
}*/


/*
#include <stdio.h>
int main(){
int age;
printf("Enter your age: ");
scanf("%d",&age);
if(age>0&&age<=120){
  if(age>=18){
    printf("Major");
    }
  else{
    printf("Minor");
    }
    }
else{
    printf("Not defined");
    }
    }
 */
 
  
    
/*  
#include <stdio.h>
int main(){
int year;
printf("Enter the year: ");
scanf("%d",&year);
if(year>0){
  if(year%400==0||year%4==0&&year%100!=0){
    printf("Leap Year");
    }
  else{
    printf("Not a leap year");
    }
    }
else{
    printf("Not defined");
    }
    }
 */


/*
#include<stdio.h>
#include<string.h>
#include<ctype.h>
   int main(){
   int v,i,l,n,j,k=0;
   char res[50]="";
   char s[50]={"a2b2c3"};
   l = strlen(s);
   for(i=0;i<l;i++){
     if(isalpha (s[i])){
        v=s[i];
        }
     else{
     n = s[i] - '0';
     for(j=0; j<n; j++){
       res[k++] = v;
     }
     }
     }
     printf("%s",res);
     }*/ 



/*
#include <stdio.h>
#include <string.h>
int main(){
char s[50]={"aabbccc"};
char c[50]="";
int l=strlen(s);
int i,count=0;
for(i=0;i<l;i++){
if(s[i]==s[i+1]){
 count++;
 }
else{
  printf("%c%d",s[i],count);
  count=1;
 }
  }
 }*/
 

/* 
#include <stdio.h>

int main()
{
    int budget;

    printf("Enter your budget: ");
    scanf("%d", &budget);

    if (budget < 100000)
    {
        printf("Stay at home 🏠");
    }
    else
    {
        if (budget < 200000)
        {
            printf("You can visit Singapore 🇸🇬");
        }
        else
        {
            printf("Your dream destination is South Korea 🇰🇷");
        }
    }

    return 0;
}
*/

/*
#include <stdio.h>
int main (){
   int jars[5]={10,20,30};
   int n=sizeof(jars)/sizeof(int);
   int A=0,B=0,C=0,i,j;
   for (i=0;i<n;i++){
      for(j=1;j<=jars[i];j++){
      if(j%3==1 ){
        A++;
        }
      else if(j%3==2){
        B++;
      }
      else{
        C++;   
      }  
   }
   }   
   printf("%d chocolate for A\n",A);
   printf("%d chocolate for B\n",B);
   printf("%d chocolate for C\n",C);
}
*/


// ----Swapping------


//using arithmetic 
/*
#include <stdio.h>
int main (){
int a=10,b=20;
a=a+b;//30
b=a-b;//10
a=a-b;//20
printf("a=%d",a);
printf("b=%d",b);
} */

//using pointers
#include <stdio.h>
void swap(int a,int b){
 int temp;
 temp=*a;
 *a=*b;
 *b=temp;
}
int main(){
 int a,b;
 printf("Enter the value of a & b:");
 scanf("%d %d",&a,&b);
 swap(&a,&b);
 printf("a=%d.  b=%d",a,b);
 }