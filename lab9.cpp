#include <stdio.h>
#include <stdbool.h>



int main() {

    int i =0 ;
    int value ;
    int channel ; //จำนวนช่อง
    int array[i];
    int Index ;
    int Number ; //ตรวจสอบค่าที่รับเข้ามา
    int  isPrime ;
        

    for ( isPrime ;int Number  ) {
        if (Number < 2) {
        return false;
    }
    for (int i = 2; i * i <= Number; i++) { 
        if (Number % i == 0) {
            return false;
        }
    }
    
    return true;
        }
        printf("Enter channel: "); //รับค่าอาร์เล
        scanf("%d", &channel) ;

            for (int i = 0 ; i < channel ; i++) { //รับค่าตัวเลข
                printf("Enter value[%d] : ", i);
                scanf("%d", &array[i]);
    }
                printf("Index:  ");
                for (int i = 0; i < channel; i++) {
                    printf("%d  ", i);
    }
                 printf("Array:\n");
                    for (int i = 0; i < channel; i++) {
                    
                     if ( isPrime (array[i] )) {
                     printf("%d  ", array[i]);
        } else {
            printf("#  ");
        }
    }

    return 0;
}
