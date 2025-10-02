#include <stdio.h>

int main(){
	//TASK 3
	
	int num, A, B, temp, Answer;
	
	printf("Enter any number : ");
	scanf(" %d", &num);
	
	temp = num;
	while(temp>9){
		

			temp/=10;
			}
	
	A = temp;
	B = num%10;
	  
	
	printf("First digit = %d", A);
	printf("\nLast digit  = %d", B);
	Answer = A + B;
	printf("\nSum = %d", Answer);
	
	return 0;
}
