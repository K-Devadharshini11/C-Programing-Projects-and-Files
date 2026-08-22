
//-----no return without argument-----


//#include <stdio.h>
//void add(){                 //int and void both can be use void does not return anything
// int a,b,c;
// printf("enter the A&B value: ");
// scanf("%d %d",&a,&b);
// c=a+b;
// printf("Total:%d\n",c);
//}
//int main(){
//    add();
//}


//------no return with argument-----

//#include <stdio.h>
//void add(int a,int b){
//int c=a+b;
// printf("Total:%d\n",c);
//}
//int main(){
//    add(30,70);
//}


//-------return without argument------

#include <stdio.h>
//int add(){            //use int while u use return function
//int a,b;
//printf("Enter A & B : ");
//scanf("%d %d",&a,&b);
//return a+b;
//}
//int main(){
//    int c=add();
//    printf("Total:%d",c);
//}


//------return with argument-----

//#include <stdio.h>
//int add(a,b){            //use int while u use return function
//return a+b;
//}
//int main(){
//    int a,b;
//    printf("Enter a & b :");
//    scanf("%d %d",&a,&b);
//    int c=add(a,b);
//    printf("Total:%d",c);
//}

//pointers
//array pointers
//enum

//------typedef-------

//#include <stdio.h>
//int main (){
//typedef int deepu;
//deepu age=18;
//printf("%d",age);
//}


//-------typedef with enum----------

//#include <stdio.h>
//typedef enum {sun,mon,tue,wed,thu,fri,sat}weekday;   //here weekday is an object name
//int main (){
//    weekday today=sun;
//    switch(today){
//    case sun:
//      printf("it's a fundayyy");
//      break;
//    case mon:
//    case tue:
//    case wed:
//    case thu:
//    case fri:
//       printf("it's a working day");
//       break;
//    case sat:
//        printf("weekoff");
//        break;
//    default:
//        printf("enter the day properly");
//        break;
//
//    }
//}


//-------------accessing structure with pointers----------
#include <stdio.h>
struct student{
  char *name;
  int age;
  float per;
};
int main (){
struct student o={"DEEPU",19,9.43};
struct student *ptr=&o;

//using arrow operator
printf("\nName: %s",ptr->name);
printf("\nAge: %d",ptr->age);
printf("\nPercentage: %0.2f",ptr->per);

//equivalent using dereference operator
printf("\nName: %s",(*ptr).name);
printf("\nAge: %d",(*ptr).age);
printf("\nPercentage: %0.2f",(*ptr).per);
return 0;

}














