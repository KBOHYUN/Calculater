// Calculater.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

void calculate(int num1, char op, int num2);
void Exitexamination(char m);
void inputOperationExpression(int *num1, char *op, int *num2);

int main() {

	int num1, num2; //연산할 숫자
	int op; //연산자
			//int input_buffer[3];


			//  int i;

	while (1) {

		inputOperationExpression(&num1, &op, &num2);

		Exitexamination(op);

		calculate(num1, op, num2);



	}

}

