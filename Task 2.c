#include <stdio.h>

int main(){
	
	//TASK 2
	int Num1, Num2, i, Answer;
	Answer = 0;
	char operand;
	printf("Enter Num1 : ");
	scanf(" %d", &Num1);
	printf("Enter Num2 : ");
	scanf(" %d", &Num2);
	
	printf("Enter operation. (M) for multiplication, (D) for division : ");
	scanf(" %c", &operand);
	
	if (operand == 'M' || operand == 'm'){
		for ( i = 1 ; i <= Num2; ++i){
			Answer = Answer + Num1;
		}
		
	}else if(Num2 !=0){
		for(Num1 = Num1;Num1>=Num2 ;){
			Num1=Num1-Num2;
			++Answer;
		}
	}else{
		printf("Cannot divide by zero");
	}
	printf("%d", Answer);
	
	return 0;
}
