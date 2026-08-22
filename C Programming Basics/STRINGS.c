//------STRINGS--------

/*
#include<stdio.h>
int main(){
char ch;
char c[50];
printf("enter the string s:");
getchar(c);
putchar(c);
printf("Enter the character:");
ch=getchar();
putchar(ch);
}*/

/*#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main (){
 int size,i,upper=0,lower=0,digit=0,space=0;
 char s[50]={"CSE-A mass@104 "};
 size= strlen(s);
 for(i=0;i<size;i++){
   if(isupper(s[i])){
     upper++;
     }
   else if (islower(s[i])){
     lower++;
     }
   else if (isdigit(s[i])){
     digit++;
     }
    else if (isspace(s[i])){
       space++;
      }
     }
    printf("Upper=%d",upper);
     printf("Lower=%d",lower);
     printf("Digit=%d",digit);
     printf("Space=%d",space);
     }
     */

 /*#include<stdio.h>
#include<string.h>
int main(){
int i,l;
char result[50]="";
char s[50]={"dEEPu@"};
l=strlen(s);
for(i=0;i<l;i++){
if(( int)s[i]>=65 && (int)s[i]<=90){
result[i] =(char)(s[i]+32);
}
else if((int)s[i]>=97 && (int)s[i] <=122){
result[i] =(char)(s[i]-32);
}
else{
result [i]=s[i];
}
}
printf("result:%s",result);
}
*/

/*#include<stdio.h>
#include<string.h>
int main(){
int i,l;
char c;
char result[50]="";
char s[50]={"dEEPu@"};
l=strlen(s);
for(i=0;i<l;i++){
c=s[i];
if( c >= 'A' && c <= 'z'){
result[i] =c+32;
}
else if(c >= 'a'&& c <='z'){
result[i] =c-32;
}
else{
result [i]=c;
}
}
printf("result:%s",result);
}
*/

/*#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
int i,l,v,n,k,j=0;
char res[50]="";
char s[50]={"a2b2c3"};
l=strlen(s);
for(i=0;i<l;i++){
if(isalpha(s[i])){
v=s[i];
}
    else{
    n=s[i] -'0';
   for(j=0; j<n; j++){
   res[k++] =v;
    }
    }
    printf("%s",res);
    }

    }
    */
   /* #include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
int i,l,n,j,count=1;
char res[50]="";
char s[50]={"aabbccc"};
l=strlen(s);
for(i=0;i<l;i++){
if(s[i]==s[i+1]){
count++;
}
else{
printf("%c%d",s[i],count);
count=1;
}
}
}
*/

/* #include<stdio.h>
 void add(int a,int b){
 int c=a+b;
 printf("total:%d\n",c);
 }
 int main (){
 add(30,70);
 }
 */

/* #include<stdio.h>
 int add (){
 int a,b;
 printf("enterA&B:");
 scanf("%d%d",&a,&b);
 return a+b;
 }
 int main (){
 int r=add();
 printf("total:%d\n",r);
 }
 */

/* #include<stdio.h>
 int add (int a,int b){
 return a+b;
 }
 int main (){
 int r=add(40,50);
 printf("total:%d\n",r);
 }
 */
 //---------typedef with enum--------

/*#include<stdio.h>
typedef enum {sun,mon,tues,wed,thur,fri,sat,}weekday;
int main(){
    weekday today =sun;
    switch(today){
    case sun:
    printf("it's a fundayyy");
    break;
    case mon:
    case tues:
    case wed:
    case thur:
    case fri:
    printf("it's a working day");
    break ;
    case sat:
    printf("weekoff");
    break;
    default:
    printf("enter the day properly");
    break;
    }
}
*/
/*#include <stdio.h>
struct student {
char*name;
int age;
float per;
};

int main(){
struct student o={"elamathi athai",18,9.52};
struct student *ptr=&o;
printf("\n name :%s",ptr->name);
printf("\n age :%d",ptr->age);
printf("\n per :%0.2f",ptr->per);
printf("\n name:%s",(*ptr).name );
printf("\n age:%d",(*ptr).age);
printf("\n per:%0.2f",(*ptr).per);
}
*/
 /*   #include <stdio.h>
int main (){
   int jars[3]={10,20,30};
   int A=0,B=0,C=0,i,j;
   for(i=0;i<3;i++)
   for (j=1;j<=jars[i];j++){
      if(j%3==1){
         A ++;
      }
      else if(j%3== 2){
         B ++;
      }
      else{
         C ++;
      }
   }
   printf("%d chocolate for A\n",A);
   printf("%d chocolate for B\n",B);
   printf("%d chocolate for C\n",C);
}
*/
//****Chocolate Jar Program using swap case****//
/*#include <stdio.h>
int main(){
    int jar[3]={10,20,30};
    int a=0,b=0,c=0,i, j;
    int n=sizeof(jar)/sizeof(int);
    for(i=0;i<n;i++){
        for(j=1;j<=jar[i];j++){
           if(j % 3 ==1){
            a++;
            }
            else if(j % 3 ==2){
            b++;
            }
            else{
            c++;
           }
        }
    }
    a = a+b;
    b = a-b;
    a = a-b;
     printf("A got %d Chocolates\n", a);
     printf("B got %d Chocolates\n", b);
     printf("C got %d Chocolates\n", c);
}
*/
