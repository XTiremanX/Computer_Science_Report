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
	printf("***������ ���***\n");

	while (back == 1)
	{
		printf("\n");
		printf("���� �Է��Ͻÿ�... ");
		while (scanf("%d", &j) != 1) {
			while ((c = getchar()) != '\n' && c != EOF);
			printf("�߸��� �Է��Դϴ�.\n���� �Է��Ͻÿ�... ");
		}
		printf("\n");

		for (i = 1; i < 10; i++) {
			printf("%d x %d = %d\n", j, i, j * i);
		}
		printf("\n");
		printf("�ٽ� ����Ϸ��� [1], �޴��� ���ư����� [0]�� �Է��Ͻÿ�... ");
		while (scanf("%d", &select) != 1) {
			while ((c = getchar()) != '\n' && c != EOF);
			printf("�߸��� �Է��Դϴ�.\n�ٽ� ����Ϸ��� [1], �޴��� ���ư����� �ƹ� ���ڳ� �Է��Ͻÿ�... ");
		}

		if (select == 1)
			back = 1;
		else {
			back = 0;
			printf("\n");
			printf("�޴��� ���ư��ϴ�.");
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
	printf("*** ��� ��� ***\n");

	while (back == 1)
	{
		printf("\n");
		printf("ǥ���� ������ �Է��Ͻÿ�(�ִ� 100��)... ");
		while (scanf("%d", &number) != 1) {
			while ((c = getchar()) != '\n' && c != EOF);
			printf("�߸��� �Է��Դϴ�.\nǥ���� ������ �Է��Ͻÿ�(�ִ�100��)... ");
		}
		for (count = 0; count < number; count++) {
			printf("%d��° ���� �Է��Ͻÿ�... ", count + 1);
			while (scanf("%lf", &figure[count]) != 1) {
				while ((c = getchar()) != '\n' && c != EOF);
				printf("�߸��� �Է��Դϴ�.\n%d��° ���� �Է��Ͻÿ�... ", count);
			}

			sum += figure[count];
		}

		average = sum / number;

		printf("\n�Է��� ǥ������ ����� %lf�Դϴ�.\n\n", average);

		printf("�ٽ� ����Ϸ��� [1], �޴��� ���ư����� [0]�� �Է��Ͻÿ�... ");
		while (scanf("%d", &select) != 1) {
			while ((c = getchar()) != '\n' && c != EOF);
			printf("�߸��� �Է��Դϴ�.\n�ٽ� ����Ϸ��� [1], �޴��� ���ư����� �ƹ� ���ڳ� �Է��Ͻÿ�... ");
		}

		if (select == 1)
			back = 1;
		else {
			back = 0;
			printf("\n");
			printf("�޴��� ���ư��ϴ�.");
		}
	}
	printf("\n");
}

void solve_linear_equation()
{
	double a, b, root;
	int c;

	printf("�������� ����� �Է��Ͻÿ�... ");
	while (scanf("%lf", &a) != 1) {
		while ((c = getchar()) != '\n' && c != EOF);
		printf("�߸��� �Է��Դϴ�.\n�������� ����� �Է��Ͻÿ�... ");
	}

	printf("������� �Է��Ͻÿ�... ");
	while (scanf("%lf", &b) != 1) {
		while ((c = getchar()) != '\n' && c != EOF);
		printf("�߸��� �Է��Դϴ�.\n������� �Է��Ͻÿ�... ");
	}

	if (a == 0) {
		if (b == 0)
			printf("\n������ ���� �ذ� �ֽ��ϴ�.\n");
		else
			printf("\n�ذ� �����ϴ�.\n");
	}
	else {
		root = -b / a;
		printf("\n�ش� %.2lf�Դϴ�.", root);
	}
	printf("\n");
}
void solve_quadratic_equation()
{
	double a, b, c;
	double discriminant, root1, root2;
	int p;

	printf("�������� ����� �Է��Ͻÿ�... ");
	while (scanf("%lf", &a) != 1) {
		while ((p = getchar()) != '\n' && p != EOF);
		printf("�߸��� �Է��Դϴ�.\n�������� ����� �Է��Ͻÿ�... ");
	}
	printf("�������� ����� �Է��Ͻÿ�... ");
	while (scanf("%lf", &b) != 1) {
		while ((p = getchar()) != '\n' && p != EOF);
		printf("�߸��� �Է��Դϴ�.\n�������� ����� �Է��Ͻÿ�... ");
	}
	printf("������� �Է��Ͻÿ�... ");
	while (scanf("%lf", &c) != 1) {
		while ((p = getchar()) != '\n' && p != EOF);
		printf("�߸��� �Է��Դϴ�.\n������� �Է��Ͻÿ�... ");
	}

	discriminant = b * b - 4 * a * c;

	if (discriminant > 0) {
		root1 = (-b + sqrt(discriminant)) / (2 * a);
		root2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("\n�� ���� �Ǳ��� �ֽ��ϴ�. ��1 = %.2lf, ��2 = %.2lf\n", root1, root2);
	}
	else if (discriminant == 0) {
		root1 = -b / (2 * a);
		printf("\n�߱��� �ֽ��ϴ�. ��1 = ��2 = %.2lf\n", root1);
	}
	else
		printf("\n�Ǳ��� �����ϴ�.\n");

}

void equation_calculation()
{
	int degree;
	int p;
	double a, b, c;
	int select, retake = 1;

	printf("\n");
	printf("*** ������ ��� ***\n");
	while (retake == 1)
	{
		printf("\n");
		printf("�������� ������ �Է��Ͻÿ�... ");
		while (scanf("%d", &degree) != 1) {
			while ((p = getchar()) != '\n' && p != EOF);
			printf("�߸��� �Է��Դϴ�.\n�������� ������ �Է��Ͻÿ�... ");
		}
		if (degree < 1 || degree > 2) {
			printf("���������� �Ǵ� ���������ĸ� �����մϴ�.\n");
		}
		else
			if (degree == 1)
				solve_linear_equation();
			else if (degree == 2)
				solve_quadratic_equation();

		printf("\n");

		printf("�ٽ� ����Ϸ��� [1], �޴��� ���ư����� [0]�� �Է��Ͻÿ�... ");
		while (scanf("%d", &select) != 1) {
			while ((c = getchar()) != '\n' && c != EOF);
			printf("�߸��� �Է��Դϴ�.\n�ٽ� ����Ϸ��� [1], �޴��� ���ư����� �ƹ� ���ڳ� �Է��Ͻÿ�... ");
		}

		if (select == 1) {
			retake = 1;
		}
		else {
			retake = 0;
			printf("\n");
			printf("�޴��� ���ư��ϴ�.\n");
		}
	}
}

int main(void)
{
	int choice;
	int c;

	printf("******** ���� ��� ���α׷� ********\n(made by 20230858 �̽���)\n\n");
	do {
		printf("=====================================\n");
		printf("[1] ������ ���\n");
		printf("[2] ��� ���\n");
		printf("[3] ������ ���\n");
		printf("[0] ����\n");
		printf("=====================================\n\n");
		printf("��ȣ�� �Է��Ͻÿ�... ");
		while (scanf("%d", &choice) != 1) {
			while ((c = getchar()) != '\n' && c != EOF);
			printf("�߸��� �Է��Դϴ�.\n��ȣ�� �Է��Ͻÿ�... ");
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
			printf("\n���α׷��� �����մϴ�.\n");
			break;
		default:
			printf("�߸��� �Է��Դϴ�.\nó������ ���ư��ϴ�.\n");
			break;
		}

		printf("\n");
	} while (choice != 0);

	return 0;
}
    
    
