#include<iostream>
#include<queue>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

queue<int> Queue;
int num = 0;
int queueSize = 0;

void Initialize();
void Push();
void Pop();
void Display();

void main()
{

	int Choice = 0;

	cout << "************** MAIN MENU ****************" << endl;
	cout << "Please Enter one of the following Choices" << endl;
	cout << "************** MAIN MENU ****************" << endl;

	do
	{
		cout << "Choose: \n1.Initialize\n" << "2.Push\n" << "3.Pop\n" << "4.Display\n" << "5.Exit\n" << endl;
		cout << "Please enter your choice: ";
		cin >> Choice;

		switch (Choice)
		{
		case 1:
			Initialize();
			break;
		case 2:
			Push();
			break;
		case 3:
			Pop();
			break;
		case 4:
			Display();
			break;
		case 5:
			break;
		default:
			break;
		}

	} while (Choice != 5); //when the choice is == 5, the program ends (return)
}

void Initialize()
{
	cout << "\nWhat is the queue size? ";
	cin >> queueSize;
	cout << "\nYour queue is initialized with " << queueSize << " elements\n" << endl;
}

void Push()
{
	if (Queue.size() == queueSize)
	{
		cout << "Queue is full, you cannot push.\n";
		return;
	}
	cout << "Enter the number: ";
	cin >> num;
	Queue.push(num);
	Display();
}

void Pop()
{
	if (Queue.empty())
	{
		cout << "Queue is empty. There is nothing to pop." << endl;
		return;
	}
	Queue.pop();
	Display();
}

void Display()
{
	if (Queue.empty())
	{
		cout << "Queue is empty. There is nothing to show." << endl;
		return;
	}

	queue<int> temp = Queue;

	for (int i = 0; i < Queue.size(); i++)
	{
		cout << "Element " << i << " is " << temp.front() << endl;
		temp.pop();
	}
}