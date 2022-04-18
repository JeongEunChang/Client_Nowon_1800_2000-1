#pragma once
class DynamicArray
{
private:
	int* _data;
	int _length;
	int _capacity;
	const int DEFAULT_SIZE;

public:
	int length();
	void Add(int item);
	int Find(int item); // ������ ã���� �ش� �������� �ε����� ��ȯ

	// bool �ڷ��� ( ���� ) : true �� false Ű����� ���� ǥ����
	// true : 0 �� �ƴ�. false : 0.
	// bool �������ٰ� ���� �����Ҷ� ���� 0�̸� bool ������ �ش� ���� false �� ����
	// 0�� �ƴϸ� true �� ����
	bool IsExist(int item); // ������ ã���� true ��ȯ �ƴϸ� false ��ȯ
	bool Remove(int item); // ������ ���� ������ true ��ȯ �ƴϸ� false ��ȯ
	bool RemoveAt(int item); // �ش� �ε��� ���� ������ true ��ȯ �ƴϸ� false ��ȯ
	void Delete();

	DynamicArray();
	~DynamicArray();
};

