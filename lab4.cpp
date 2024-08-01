#include <stdio.h>

int main() {
  char employeesID [ 10 ] ;
  int hrs, salary ;
  int month =28 ;
  float money ;
    
    printf( " Input the EmployeesID (Max. 10 char) : " ) ;
    scanf( "%s", employeesID ) ;
    printf( "Input the Working hrs : " ) ;
    scanf ( "%d , &hrs") ;
    printf( "salary amount/hr : " ) ;
    scanf( "%d", &salary ) ; 
     
     money = hrs * salary * month ;
    
    printf( "----------------------\n" ) ;
    printf( "Employees ID = %s \n", employeesID ) ;
    printf( "salary = U$ %.2f", money ) ;
    printf( "\n--------------------\n" ) ;
    
    return 0 ;
    
}//end main function
