#include <stdio.h>



// ��ȯ�� �Լ��̸� (�Ű�����1�ڷ��� �Ű�����1�̸�, �Ű�����2�ڷ��� �Ű�����2�̸� )
// {
//		���곻��
//		��ȯ�� (return ��ȯ��) 
// }

// �������� : ��� ������ ������ �� �ִ� ����

int globalConut;


// ������ ������ ����Ǵ� ������ ( ��������, �������� ) �� ����� ���ÿ� 0 ���� �ʱ�ȭ�ȴ�.


int main(void) {
	
	for (int i = 0; i < 5; i++)
	{
		doSomething();
	}

	int testNum1 = 3;
	int testNum2 = 5;
	// �Լ��� ȣ�� ����
	// �Լ��̸�(����1, ����2,  ...)
	sum(testNum1, testNum2);

	sum(2, 3);
	sum(4, 3); // �ѹ� ���� �� �Լ��� ������ ȣ�� ����.(�Լ�ȣ��� ���ǵ� �Լ��� �����ؼ� �����) 
	return 0;
}

int doSomething() {
	

	//int globalConut = 0; // ���������� �ش� �߰�ȣ �ۿ��� ���ǵ� ��� ���� �̸��� �������� �켱������.
	
	// static : ���� Ű���� , static ���� ����Ǹ� �������� �޸��Ҵ��� �Ұ����ϴ�. ���α׷��� ���������� �������� �ʵ��� ������ ������ ����ȴ�.
	static int localCount = 0; // ���� �������� : �����Ϳ����� ����Ǿ� ���α׷��� ���������� ���������� ������, �ش� �߰�ȣ �ȿ����� ���� �����ϴ�.

	localCount++;
	globalConut++;
	printf("doSomething has been called : %d timgs\n", globalConut);
	printf("doSomething has been called : %d timgs(static local)\n", localCount);

	if (localCount < 10) {
		doSomething(); // ����Լ� : �Լ� ������ ������ �Լ� ȣ��
	}
	return 0;


}

// �Ű������� �������� ( �Ű����� �������� )

int sum(int a, int b) {

	int tmpValue = a + b;
	printf("%d\n", tmpValue); // �Լ� �������� �Լ� ȣ�� ����
	return tmpValue;
}

int sub(int a, int b) {

	// register ����
	// �ش� ������ ���� ������ ���ؼ� �޸𸮿� �Ҵ����� ���� register �� ���� �Ҵ��� �õ��ϴ� Ű����
	// ���࿡ register Ű���带 ����ϴ����� �������� �ʴٰ� �����Ϸ��� �Ǵ��ϸ� register�� �Ҵ����� �ʴ´�.

	int tmpValue = a - b;
	printf("%d\n", tmpValue); // �Լ� �������� �Լ� ȣ�� ����
	return tmpValue;
}