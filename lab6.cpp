#include<stdio.h>

int main() {

    int number ; 
    scanf ("%d", &number) ;
    for(int i=0 ; i < number ; i++ ) {
        if ( number %2 == 0) {
            for(int a = 0 ; a < number ; a++){
                if( i == a) {
                    printf("1 ");
                }
                else{
                    printf("0 ") ;
                }
            }
        } else {
            for (int k = 0; k < number; k++) {
                if(i==number - k - 1 ) {
                    printf("1 ");
                } else{
                    printf("0 ");
            
                }
            }
            
        }
    printf("\n");
    }//end for
     
 return 0;
}
