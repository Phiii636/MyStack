#include "myStack.h"

namespace my
{
	//构造函数
	template<class T>
	Stack<T>::Stack()
	{
		arr = vector<T>(0);
	}

	//元素个数
	template<class T>
	size_t Stack<T>::size() const
	{
		return arr.size();
	}

	//是否为空
	template<class T>
	bool Stack<T>::is_empty() const
	{
		return arr.empty();
	}
	
	//入栈
	template<class T>
	void Stack<T>::push(T input)
	{
		arr.push_back(input);
	}

	//弹栈
	template<class T>
	void Stack<T>::pop()
	{
		arr.erase(arr.end());
	}

	//返回顶部引用
	template<class T>
	T& Stack<T>::top()
	{
		return arr.at(arr.end());
	}
}