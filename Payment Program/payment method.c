#include<stdio.h>
#include<string.h>

struct Payment{
       int transactionId;
       char name[30];
       float amount;
       
       int type;
       
union{
       char upiId[30];
       char cardnumber[20];
       float cashamount;
  }payment;
  };
  int main(){
  
      struct Payment p;
  
      printf("******Smart Payment Wallet******\n\n");  
        
       printf("Enter Transaction ID:\n");
         scanf("%d",&p.transactionId);
        
        printf("Enter Customer Name:\n");
         scanf("%s",&p.name);
        
        printf("Enter Amount:\n");
         scanf("%f",&p.amount);
       
     printf("\nselected the payment method\n");  
     printf("1.UPI\n");
     printf("2.Card\n");
     printf("3.cash\n");
     
     printf("Enter choice:\n");
     scanf("%d",&p.type);
     
     switch(p.type){
     case 1:
             printf("Enter UPI Id:");
             scanf("%s",&p.payment.upiId);
             break;
             
     case 2:
             printf("Enter Card Number:");    
             scanf("%d",&p.payment.cardnumber);    
             break;
           
     case 3: 
             p.payment.cashamount = p.amount;
             break;
   default:
             printf("invalid payment method\n");
             return 0;
             
   }          
   printf("\n======Payment Receipt=====");
   
   printf("Transaction ID: %d\n",p.transactionId);
   printf("customer name: %s\n",p.name);
   printf("amount:%2f\n",p.amount);
   
   
   switch(p.type){
    case 1:
    printf("payment Type:UPI");
    printf("UPI ID:%S\n",p.payment.upiId);
    break;
   
   case 2:
    printf("payment Type:cardnumber");
    printf("cardnumber:%S\n",p.payment.cardnumber);
    break;
    
    case 3:
    printf("payment Type: cashamount");
    printf("cashamount:%S\n",p.payment.cashamount);
    break;
    }
    }
           