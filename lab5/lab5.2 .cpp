#include<stdio.h>

int main() {

 int score = 0 ;
 printf("enter score :: ") ;
 if (scanf("%d", &score) !=1 ){
    printf("Plese Enter Number Only Or Enter number less then 100 ");
    return 1;
 } 

    switch (score/5) {
    case 20 : 
    case 19 :
    case 18 :
    case 17 :
    case 16 :
    printf(" grade A ") ;
     break;
    case 15 :
    printf(" grade B+") ;
     break;
    case 14 :
    printf(" grade B ") ;
     break;
   case 13 :
   printf(" grade C+ ") ;
     break;
   case 12 :
   printf(" grade C ") ;
     break;
   case 11:
   printf(" grade D+ ") ;
     break;
   case 10 :
   printf(" grade D ") ;
     break;
   case 9 :
   case 8 :
   case 7 :
   case 6 :
   case 5 :
   case 4 :
   case 3 :
   case 2 :
   case 1 :
   case 0 :
   printf(" grade F ") ;
      break;

  default:
    printf(" please enter number only") ;
     break;
 }

  return 0;
}
 