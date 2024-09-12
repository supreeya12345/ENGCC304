#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int Number , play   ; 
   do { 
        int score = 100 ;
        int Low = 1 ; //จำนวนต่ำที่สุด
        int Hight = 100 ; //จำนวนที่สูงที่สุด

          printf( "Do you want to play game (1=play,-1=exit) : \n" ) ; //พิมพ์ 1 ถ้าต้องาการที่เล่น พิมพ์ -1 ถ้าไม่ต้องการเล่น
          scanf( "%d", &play ) ;

            if(play == -1 ) {
             exit(0) ;
            }
             srand(time(0)) ; 
             int K = rand() % 100 +1 ; // K เก็บค่า ตั้งแต่ 1-100
              printf(" %d ",K) ;

             printf("score %d \n" , score ) ;
              
              do {
                  printf( "Guess the winning number (%d - %d) : \n" , Low , Hight ) ; //ป้อนตัวเลขที่จะทาย
                  scanf( "%d" , &Number) ;
                  
                    if( Number == K ){
                    printf(" That is correct! The winning number is %d \n" , K ) ;
                    scanf("Score this game: %d  \n" , score ) ;
                    }
                    if( Number < K ) {
                        if(Number > Low){
                            Low =  Number + 1 ;
                            score= score-10 ;
                             printf(  "Sorry, the winning number is LOWER than %d ( Score : %d )\n " , Number, score);

                        }else{
                            score= score-10 ;
                            printf(  "Sorry, the winning number is LOWER than %d ( Score : %d )\n " , Number, score);


                        }
            
                    }else if ( Number > K) {
                        if (Number > Hight) {
                             score = score - 10 ;
                            printf(" Sorry, the winning number is HIGHER than  %d ( Score : %d )\n" , Number , score) ;
                        } else {
                            Hight = Number - 1 ;
                             score = score - 10 ;
                            printf(" Sorry, the winning number is HIGHER than  %d ( Score : %d )\n" , Number , score) ;
                        }

                        
                        
                      }
                  }while (Number != K) ;

        } while (play == 1);
     return 0 ;
}
