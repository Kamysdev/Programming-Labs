#include <iostream>
#include <string>


template <typename T>
class list // Реализация метода односвязного списка 
{
public:
	list();
	~list();

	void push_back(T data);
	int GetSize()
	{
		return size;
	}

	T& operator[](const int index);

private:


	template <typename T> // Шаблон класса ноуд
	class Node
	{
	public:
		Node* pNEXT;
		T data;

		Node(T data = T(), Node* pNEXT = nullptr)
		{
			this->data = data;
			this->pNEXT = pNEXT;
		}
	};
	int size;

	Node <T> *head;
};


template <typename T>
list<T>::list() // Дефолтный указатель
{
	size = 0;
	head = nullptr;
}

template <typename T>
list<T>::~list()
{
}

template<typename T>
void list<T>::push_back(T data)		// Ввод данных в список
{
	if (head == nullptr)
	{
		head = new Node<T>(data);
	}
	else
	{
		Node<T>* temp = this->head;
		while (temp -> pNEXT != nullptr)
		{
			temp = temp -> pNEXT;
		}
		temp -> pNEXT = new Node<T>(data);

	}

	size++;
}

template<typename T>
T& list<T>::operator[](const int index)		// Самая лёгкая часть, до которой я допёр за 30 минут.
{											// Переборка до вывода необходимого значения
	int count = 0;
	Node<T>* temp = this->head;

	while (temp != nullptr)
	{
		if (count == index)
		{
			return temp->data;
		}
		temp = temp->pNEXT;
		count++;
	}
}


int main()
{
	list<int> first;		// <тип данных>
	first.push_back(5);		// Помещение значений
	first.push_back(10);
	first.push_back(30);

	for (int i = 0; i < first.GetSize(); i++)		// Вывод данных
	{
		std::cout << first[i] << std::endl;
	}

	std::cout << first.GetSize();

	return 0;
}