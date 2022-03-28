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


	double* pd1, * pd2, d1, d2;
	d1 = 2.0;
	d2 = 4.0;
	pd1 = &d1;
	pd2 = &d2;


	// ���Կ����� �������� *pd1. *pd2, d1, d2 �� �������� 6�� ����� �� �ִ�
	// 4���� ��츦 �Ẹ���� ( �� ������ ���꿡 �ѹ����� ��� ���� )

	printf("%lf\n", d1 + d2);
	printf("%lf\n", *pd1 + *pd2);
	printf("%lf\n", d1 + *pd2);
	printf("%lf\n", *pd1 + d2);

	
	

	// ����� ������
	// ���� : const �ڷ��� *
	// �����͸� �ٲ� �� ���ٴ°� �ƴ϶� �����Ͱ� ����Ű�� �ش� �ּ��� ���� �ٲ� �� ��������.
	// ��, �������������� L-value �� ����� �� ����.
	int n1 = 0, n2 = 0;
	const int* pa = &n1;
	pa = &n2;
	//*pa = 20; // �Ұ���.
	n1 = *pa; // ����
	// const (�����) �� ������ : ������ �����鼭 Ư�� ���� �������ϰ� ��Ÿ���� ���

	const int n3 = 0; // n3 �� const ������
	int* pn3 = &n3;
	*pn3 = 3; // ���������� ���� n3 �� �������� �����ϸ� 
			  // n3 �ĺ��ڸ� ��ġ�� �����Ƿ� �ش� �ּ��� ���� ������ ���� �ִ�.
	printf("%d\n", n3);

	// �ٸ� �ڷ��� �����Ͱ��� ����
	// L-value ������ �������� �ڷ����� �� ũ�ٸ� �Ҵ礲���� ���� ������ �����ϴ� ������ ��Ȳ��
	// �߻��� �� �����Ƿ� �����ؾ���. ������ ������ �ƴ�.


	int* _n = 3;
	double _d = 3.5;
	int* _p = &_n;
	double* _pd = &_d; 


	/*printf("p : %p\n", _p);
	printf("pd : %p\n", _pd);
	p = pd;
	printf("p : %p\n", _p);
	printf("pd : %p\n", _pd);
	*p = 3;
	printf("size of *p %d\n", sizeof(*_p));
	printf("%d\n", *_p);
	pd = p;
	*pd = 3.5;
	printf("size of *pd %d\n", sizeof(*_pd));
	printf("%d\n", *_pd); */

	printf("p : %p\n", _p);
	printf("pd : %p\n", _pd);
	p = pd;
	printf("p : %p\n", _p);
	printf("pd : %p\n", _pd);
	*p = 3;
	printf("size of *p %d\n", sizeof(*_p));
	printf("%d\n", *_p);
	pd = p;
	*pd = 3.5;
	printf("size of *pd %d\n", sizeof(*_pd));
	
	int* pc = NULL;
	if (pc != NULL)
		printf("%p", pc);

	
	// �����͸� ����ϴ� ����
	// swap ����
	int a = 1, b = 2;
	// �Լ�ȣ��
	printf("a = %d, b = %d\n", a, b): // ������ a = 2, b = 1;




	return 0;
}

void swap(int a, int b) {
	int t = a;
	a = b;
	b = t;
	 
	
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

