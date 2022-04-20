#pragma once

template <typename T>
class Node
{
	T _item;
	Node* _prev;
	Node* _next;
};

template <typename T>
class LinkedList
{
	Node* _first, * _last, *_tmp;


	// ��ũ�� ����Ʈ ���ø� �����غ���
	// C �� �ߴ��� ����
	// ����Լ���
	// void AddFirst(T item) 
	// void AddLast(T item)
	// void AddAfter(Node& node, T item) 
	// void AddBefore(Node& node, T item)
	// Node<T>& First
	// Node<T>& Last
	// Node<T>& Find(T item)
	// Node<T>& FindLast (T item)
	// bool Remove (T item)
	// bool RemoveLast (T item)
	// void Delete()


public :
	
	void AddFirst(T item);
	void AddLast(T item);
	void AddAfter(Node&, node, T item);
	void AddBefore(Node&, node, T item);
	Node<T>& First();
	Node<T>& Last();
	Node<T>& Find(T item);
	Node<T>& FindLast(T item);
	bool Remove(T item);
	bool RemoveLast(T item);
	void Delete();

	
};
/// <summary>
/// ����Ʈ�� ���� �տ� �ű� ��� �����ϴ� �Լ�
/// </summary>
template<typename T>
inline void LinkedList<T>::AddFirst(T item)
{
	_tmp = new Node<T>(); // �űԳ�� ����
	_tmp->_item = item; // �űԳ�� �� ����

	// first �� ������ ?
	if (_first != nullptr)
	{
		_tmp->_next = _first; // �űԳ���� ���� ��尡 first �� ����Ű�� �Ѵ�.
		_first->_prev = _tmp; // first �� ���� ��尡 �ű� ��带 ����Ű�� �Ѵ�.
	}

	// last �� ������� ?
	// : �̹� �űԳ�尡 ���� ó������ ������ ���.
	// ��, first�� last �����Ͱ� �ű� ��带 �����Ѿ� �Ѵ�.

	if (_last == nullptr)
		//_first = _tmp; // ������ �������� last�� �űԳ�带 ����Ű�� �ҰŴϱ� ����
		_last = _tmp;
	_first = _tmp;
}


/// <summary>
/// ����Ʈ�� ���� �տ� �ű� ��� �����ϴ� �Լ�
/// </summary>
template<typename T>
inline void LinkedList<T>::AddLast(T item)
{
	_tmp = new Node<T>(); // �űԳ�� ����
	_tmp->_item = item; // �űԳ�� �� ����

	// last �� ������ ?
	if (_first != nullptr)
	{
		_tmp->_prev = _Last; // �űԳ���� ���� ��尡 last �� ����Ű�� �Ѵ�.
		_Last->_next = _tmp; // last �� ���� ��尡 �ű� ��带 ����Ű�� �Ѵ�.
	}

	// fiast �� ������� ?
	// : �̹� �űԳ�尡 ���� ó������ ������ ���.
	// ��, first�� last �����Ͱ� �ű� ��带 �����Ѿ� �Ѵ�.

	if (_first == nullptr)
		//_last = _tmp; // ������ �������� first�� �űԳ�带 ����Ű�� �ҰŴϱ� ����
		_first = _tmp;
	_last = _tmp;
}
