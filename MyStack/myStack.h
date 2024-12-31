#pragma once
#include <iostream>
#include <vector>
using namespace std;

namespace my
{
	template<class T>
	class Stack
	{
	private:
		vector<T> arr;
	public:
		Stack();
		Stack(const Stack& sta);
		size_t size() const;
		bool is_empty() const;
		void push(const T& input);
		void pop();
		T& top();
	};


	//构造函数
	template<class T>
	Stack<T>::Stack()
	{
		arr = vector<T>();
	}

	template<class T>
	Stack<T>::Stack(const Stack& sta)
	{
		arr = sta.arr;
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
	void Stack<T>::push(const T& input)
	{
		arr.push_back(input);
	}

	//弹栈
	template<class T>
	void Stack<T>::pop()
	{
		arr.erase(arr.end() - 1);
	}

	//返回顶部引用
	template<class T>
	T& Stack<T>::top()
	{
		return *(arr.end() - 1);
	}
}