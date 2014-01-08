#include <stdio.h>

int main(){
       int x=1, y=0, temp, sum = 0;
    
       while( x < 4000000){
			temp = y;
			y = x;
			x = x+temp;
	   
		if( x%2 == 0){
			sum += x;
		}
	   }
	  printf("%i", sum); 
      scanf("%i", &x);
    }
