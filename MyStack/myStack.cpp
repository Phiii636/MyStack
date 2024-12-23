#include "myStack.h"

namespace my
{
	//���캯��
	template<class T>
	Stack<T>::Stack()
	{
		arr = vector<T>(0);
	}

	//Ԫ�ظ���
	template<class T>
	size_t Stack<T>::size() const
	{
		return arr.size();
	}

	//�Ƿ�Ϊ��
	template<class T>
	bool Stack<T>::is_empty() const
	{
		return arr.empty();
	}
	
	//��ջ
	template<class T>
	void Stack<T>::push(T input)
	{
		arr.push_back(input);
	}

	//��ջ
	template<class T>
	void Stack<T>::pop()
	{
		arr.erase(arr.end());
	}

	//���ض�������
	template<class T>
	T& Stack<T>::top()
	{
		return arr.at(arr.end());
	}
}