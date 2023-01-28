#include<iostream>
using namespace std;

struct node
{
	int data;
	node* next;
};

class queue
{
	node* front;
	node* prev;
	node* rear;
	node* temp;
public:
	queue() :front(NULL), rear(NULL), prev(NULL), temp(NULL) {}
	void enqueue();
	int  dequeue();
	void display();

};

void queue::enqueue()
{
	rear = new node;
	rear->next = NULL;
	cout << "Enter The Data: ";
	cin >> rear->data;

	if (front == NULL)
		front = prev = rear;
	else
	{
		prev->next = rear;
		prev = rear;
	}

}

int queue::dequeue()
{
	int data;
	if (front == NULL)
		return -1;
	
	data = front->data;
	front = front->next;
	delete temp;
	return data;
}
void queue::display()
{
	if (front == NULL)
		cout << "Queue is Empty ....\n";
	else
	{
		temp = front;
		while (temp)
		{
			cout << temp->data << endl;
			temp = temp->next;
		}
	}


}

int main()
{
	queue obj;
	int   ch;
	while (true)
	{
		cout << "------(MAIN MENU)------\n";
		cout << "1) Enqueue\n";
		cout << "2) Dequeue\n";
		cout << "3) Display\n";
		cout << "4) Exit\n";
		cout << "Enter Your Choice ";
		cin >> ch;

		switch (ch)
		{
		case 1:
			obj.enqueue();
			break;
		case 2:
			int op;
			op = obj.dequeue();
			if (op == -1)
				cout << "Queue UnderFlow !!! \n";
			else
				cout << "Dequeue Element " << op << endl;
			break;
		case 3:
			obj.display();
			break;
		case 4:
			exit(-1);
		}

	}

	system("pause");
}














