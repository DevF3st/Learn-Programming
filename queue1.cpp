#include <bits/stdc++.h>
using namespace std;

class Queue
{
public:
	int front, rear, capacity;
	int *queue;
	Queue(int c)
	{
		front = rear = -1;
		capacity = c;
		queue = new int;
	}
	bool isfull()
	{
		return capacity == rear;
	}
	bool isempty()
	{
		return front == -1;
	}
	void queueEnqueue(int data)
	{

		if (isfull())
		{
			cout << "Queue is full\n";
			return;
		}
		else if (front == -1)
		{
			front++;
			rear++;
			queue[rear] = data;
			rear++;
		}
		else
		{
			queue[rear] = data;
			rear++;
		}
		return;
	}
	void queueDequeue()
	{
		if (isempty())
		{
			cout << "Queue is empty\n";
			return;
		}
		else
		{
			cout << "Element deleted:" << queue[front] << endl;
			front++;
			if(front == rear){
				front=rear=-1;
			}
		}
		return;
	}
	void queueDisplay()
	{
		int i;
		if (isempty())
		{
			cout << "Queue is empty\n";
			return;
		}
		cout << "\nDisplaying the elements\n";
		for (i = front; i < rear; i++)
		{
			cout << queue[i] << "<--";
		}
		cout << endl;
		return;
	}
};

int main()
{
	int n, ch = 0, ele;
	cout << "Enter the size of the queue" << endl;
	cin >> n;
	Queue q(n);
	cout << "Menu\n1 for insertion\n2 for deletion\n3 for display\n4 to check if the queue is empty\n5 to check if the queue is full\n6 for exit\n ";

	while (1)
	{
		cout << "Enter your choice\n";
		cin >> ch;

		if (ch == 1)
		{
			cout << "Enter the element you want to insert\n";
			cin >> ele;
			q.queueEnqueue(ele);
		}
		else if (ch == 2)
		{
			q.queueDequeue();
		}
		else if (ch == 3)
		{
			q.queueDisplay();
		}
		else if (ch == 4)
		{
			if (q.isempty())
				cout << "Queue is empty\n";
			else
				cout << "Queue is not empty\n";
		}
		else if (ch == 5)
		{
			if (q.isfull())
				cout << "Queue is full\n";
			else
				cout << "Queue is not full\n";
		}
		else
			break;
	}
	
	return 0;
}
