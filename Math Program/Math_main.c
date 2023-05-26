#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

void multiplication_table()
{
	int j, i;
	int c;
	int select;
	int back = 1;

	printf("\n");
	printf("***구구단 출력***\n");

	while (back == 1)
	{
		printf("\n");
		printf("단을 입력하시오... ");
		while (scanf("%d", &j) != 1) {
			while ((c = getchar()) != '\n' && c != EOF);
			printf("잘못된 입력입니다.\n단을 입력하시오... ");
		}
		printf("\n");

		for (i = 1; i < 10; i++) {
			printf("%d x %d = %d\n", j, i, j * i);
		}
		printf("\n");
		printf("다시 계산하려면 [1], 메뉴로 돌아가려면 [0]을 입력하시오... ");
		while (scanf("%d", &select) != 1) {
			while ((c = getchar()) != '\n' && c != EOF);
			printf("잘못된 입력입니다.\n다시 계산하려면 [1], 메뉴로 돌아가려면 아무 숫자나 입력하시오... ");
		}

		if (select == 1)
			back = 1;
		else {
			back = 0;
			printf("\n");
			printf("메뉴로 돌아갑니다.");
		}
	}

	printf("\n");
}

void average()
{
	double figure[100];
	int number;
	int count, c;
	int back = 1, select;
	double average, sum = 0;

	printf("\n");
	printf("*** 평균 계산 ***\n");

	while (back == 1)
	{
		printf("\n");
		printf("표본의 개수를 입력하시오(최대 100개)... ");
		while (scanf("%d", &number) != 1) {
			while ((c = getchar()) != '\n' && c != EOF);
			printf("잘못된 입력입니다.\n표본의 개수를 입력하시오(최대100개)... ");
		}
		for (count = 0; count < number; count++) {
			printf("%d번째 수를 입력하시오... ", count + 1);
			while (scanf("%lf", &figure[count]) != 1) {
				while ((c = getchar()) != '\n' && c != EOF);
				printf("잘못된 입력입니다.\n%d번째 수를 입력하시오... ", count);
			}

			sum += figure[count];
		}

		average = sum / number;

		printf("\n입력한 표본들의 평균은 %lf입니다.\n\n", average);

		printf("다시 계산하려면 [1], 메뉴로 돌아가려면 [0]을 입력하시오... ");
		while (scanf("%d", &select) != 1) {
			while ((c = getchar()) != '\n' && c != EOF);
			printf("잘못된 입력입니다.\n다시 계산하려면 [1], 메뉴로 돌아가려면 아무 숫자나 입력하시오... ");
		}

		if (select == 1)
			back = 1;
		else {
			back = 0;
			printf("\n");
			printf("메뉴로 돌아갑니다.");
		}
	}
	printf("\n");
}

void solve_linear_equation()
{
	double a, b, root;
	int c;

	printf("일차항의 계수를 입력하시오... ");
	while (scanf("%lf", &a) != 1) {
		while ((c = getchar()) != '\n' && c != EOF);
		printf("잘못된 입력입니다.\n일차항의 계수를 입력하시오... ");
	}

	printf("상수항을 입력하시오... ");
	while (scanf("%lf", &b) != 1) {
		while ((c = getchar()) != '\n' && c != EOF);
		printf("잘못된 입력입니다.\n상수항을 입력하시오... ");
	}

	if (a == 0) {
		if (b == 0)
			printf("\n무수히 많은 해가 있습니다.\n");
		else
			printf("\n해가 없습니다.\n");
	}
	else {
		root = -b / a;
		printf("\n해는 %.2lf입니다.", root);
	}
	printf("\n");
}
void solve_quadratic_equation()
{
	double a, b, c;
	double discriminant, root1, root2;
	int p;

	printf("이차항의 계수를 입력하시오... ");
	while (scanf("%lf", &a) != 1) {
		while ((p = getchar()) != '\n' && p != EOF);
		printf("잘못된 입력입니다.\n이차항의 계수를 입력하시오... ");
	}
	printf("일차항의 계수를 입력하시오... ");
	while (scanf("%lf", &b) != 1) {
		while ((p = getchar()) != '\n' && p != EOF);
		printf("잘못된 입력입니다.\n일차항의 계수를 입력하시오... ");
	}
	printf("상수항을 입력하시오... ");
	while (scanf("%lf", &c) != 1) {
		while ((p = getchar()) != '\n' && p != EOF);
		printf("잘못된 입력입니다.\n상수항을 입력하시오... ");
	}

	discriminant = b * b - 4 * a * c;

	if (discriminant > 0) {
		root1 = (-b + sqrt(discriminant)) / (2 * a);
		root2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("\n두 개의 실근이 있습니다. 근1 = %.2lf, 근2 = %.2lf\n", root1, root2);
	}
	else if (discriminant == 0) {
		root1 = -b / (2 * a);
		printf("\n중근이 있습니다. 근1 = 근2 = %.2lf\n", root1);
	}
	else
		printf("\n실근이 없습니다.\n");

}

void equation_calculation()
{
	int degree;
	int p;
	double a, b, c;
	int select, retake = 1;

	printf("\n");
	printf("*** 방정식 계산 ***\n");
	while (retake == 1)
	{
		printf("\n");
		printf("방정식의 차수를 입력하시오... ");
		while (scanf("%d", &degree) != 1) {
			while ((p = getchar()) != '\n' && p != EOF);
			printf("잘못된 입력입니다.\n방정식의 차수를 입력하시오... ");
		}
		if (degree < 1 || degree > 2) {
			printf("일차방정식 또는 이차방정식만 지원합니다.\n");
		}
		else
			if (degree == 1)
				solve_linear_equation();
			else if (degree == 2)
				solve_quadratic_equation();

		printf("\n");

		printf("다시 계산하려면 [1], 메뉴로 돌아가려면 [0]을 입력하시오... ");
		while (scanf("%d", &select) != 1) {
			while ((c = getchar()) != '\n' && c != EOF);
			printf("잘못된 입력입니다.\n다시 계산하려면 [1], 메뉴로 돌아가려면 아무 숫자나 입력하시오... ");
		}

		if (select == 1) {
			retake = 1;
		}
		else {
			retake = 0;
			printf("\n");
			printf("메뉴로 돌아갑니다.\n");
		}
	}
}

int main(void)
{
	int choice;
	int c;

	printf("******** 수학 계산 프로그램 ********\n(made by 20230858 이승현)\n\n");
	do {
		printf("=====================================\n");
		printf("[1] 구구단 출력\n");
		printf("[2] 평균 계산\n");
		printf("[3] 방정식 계산\n");
		printf("[0] 종료\n");
		printf("=====================================\n\n");
		printf("번호를 입력하시오... ");
		while (scanf("%d", &choice) != 1) {
			while ((c = getchar()) != '\n' && c != EOF);
			printf("잘못된 입력입니다.\n번호를 입력하시오... ");
		}

		switch (choice) {
		case 1:
			multiplication_table();
			break;
		case 2:
			average();
			break;
		case 3:
			equation_calculation();
			break;
		case 0:
			printf("\n프로그램을 종료합니다.\n");
			break;
		default:
			printf("잘못된 입력입니다.\n처음으로 돌아갑니다.\n");
			break;
		}

		printf("\n");
	} while (choice != 0);

	return 0;
}
    
    
