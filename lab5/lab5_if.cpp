#include<stdio.h>

int main() {

 int score = 0 ;
 printf("enter score :: ") ;
 if (scanf("%d", &score) !=1 ){
    printf("Plese Enter Number Only Or Enter number less then 100 ");
    return 1;
 } 
 
   if(score >= 80 ) {
    printf( "your are grade A ");
   }
   else if(score >= 75 && score < 80 ) {
    printf("your are grade B+");
   }
   else if(score >= 70 && score < 75) {
    printf("your are grnde B");
   }
   else if(score >= 65 && score < 70 ) {
    printf("your are grade C+");
   }
   else if(score >= 60 && score < 65 )  {
    printf("your are grade C");
   }
   else if(score >= 55 && score < 60 ) {
    printf("your are grade D+");
   }
   else if(score >= 50 && score < 55 ) { 
    printf("your are grade D");
   }
   else {
    printf("your are grade F");
   }
   
 return 0 ;

}//end main function

