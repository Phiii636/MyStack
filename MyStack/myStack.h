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
		size_t size() const;
		bool is_empty() const;
		void push(const T& input);
		void pop();
		T& top();
	};
}