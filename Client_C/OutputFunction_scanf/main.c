#include <stdio.h>

int main(void)
{
	char c;
	char tmpBuffer;
	//scanf_s("%c\n", &cm & tmpBuffer)
	
	scanf("%c\n", &c);
	getchar();
	printf("%c\n", c);

	// scanf
	// scanf(���Ĺ��ڿ�, ������ ����)
	// �Է��� ���ö� ���� ����ϴٰ� ������ ������ ������ ������ �ش� �Է°��� ������.
	int n;
	printf("Enter integer value");
	scanf_s("%d", &n);
	printf("n : %d", n);

	// & : ���� ������
	// ���� �տ� �پ �ش� ������ �ּҰ��� �����ϴ� ������

	float f;
	scanf_s("%f", &f);

	char str[20];
	scanf_s("%s", str, 10*sizeof(char));
	// sizeof Ű����
	// ������� : sizeof(�ڷ���) 
	// �ڷ����� �ش��ϴ� ������ ũ�⸦ ��ȯ��

	printf("str : %s", str);

	return 0;
}