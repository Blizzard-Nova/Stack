#include <iostream>
using namespace std;
#define SIZE 7
class Stack
{
	int top;
public:
	Stack()
	{                                   https://www.programiz.com/cpp-programming/pointers-arrays
		top = -1;
	}
	int arr[SIZE];
	bool isempty();
	bool push(int x);
	int pop();
	int peek();
	int size();
	void display();
	int search();
	
};
bool Stack::isempty()
{
	return(top < 0);
}
bool Stack::push(int x)
{
	if (top >= SIZE-1)
	{
		cout << "Stack overflow \n";
		return false;
	}
	else
	{
		arr[++top] = x;
		//cout << x << "  is pushed inside the stack \n";
		return true;
	}
}
int Stack::pop()
{
	int x;
	if (top < 0)
	{
		cout << "Stack is empty \n";
		return 0;
	}
	else
	{
		x = arr[top--];
		return x;
	}
		 
	//cout <<x<< " is poped from the stack \n";
	
}
int Stack :: peek()
{
	int x;
	if (top < 0)
	{
		cout << "Stack is empty \n";
		return 0;
	}
	else
		x = arr[top];
	return x;
}
int Stack::size()
{
	cout << "Size of stack is \n";
	cout << endl;
	return top + 1;
}
int Stack::search()
{
	int x;
	Stack s1;
	cout << "Enter the number you want to search in stack \n";
	cin >> x;
	while (x != top)
	{
		if (x == SIZE - 1)
		{
			cout << "Number found \n";
		}
		else
			s1.pop();
		return x;
	}
}

void Stack::display()
{
	Stack s;
	
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	//s.PrintStack();
	while (!s.isempty())
	{
		cout << s.peek() << endl;
		s.pop();
	}

	/*cout << endl;
	cout << endl;

	s.peek();

	cout << endl;
	cout << endl;

	s.push(10);

	cout << endl;
	cout << endl;

	s.push(20);

	cout << endl;
	cout << endl;

	s.push(30);

	cout << endl;
	cout << endl;

	s.push(40);

	cout << endl;
	cout << endl;

	s.push(50);

	cout << endl;
	cout << endl;

	s.pop();
	
	cout << endl;
	cout << endl;

	cout<<s.size();


	cout << endl;
	cout << endl;

	cout << s.search();

	cout << endl;
	cout << endl;*/
}
int main()
{
	Stack stack;
	stack.display();
	return 0;
}
/*#include <iostream>
using namespace std;
#define Size 5
class Queue
{
	int items[Size];
	int front, rear;
public:
	Queue()
	{
		front = -1;
		rear = -1;
	}
	bool isFull();
	bool isEmpty();
	void enqueue(int element);
	int dequeue();
	void size();
	void print();
	void display();
};
bool Queue::isFull()
{
	if (front == 0 && rear == Size-1)
		return true;
	if (front == rear + 1)
		return true;
	else
		return false;
}
bool Queue::isEmpty()
{
	if (front == -1)
		return true;
	else
		return false;
}
void Queue::enqueue(int x)
{
	if (isFull())
		cout << "Queue is full \n";
	//if (front == -1)
	else
		front = 0;
	rear=(rear+1)% Size;
	items[rear] = x;
	cout << endl;
	cout << "Item inserted  "<<x<<"\n";
	cout << endl;

}
int Queue::dequeue()
{
	int x;
	if (isEmpty())
	{
		cout << "Queue is empty \n";
		return -1;
	}
	else
		x = items[front];
	if (front == rear)
	{
		front = -1;
		rear = -1;
	}
	else
		front=(front + 1) % Size;
		//front++;
	cout << "Deleted -> " << x << "\n";
	cout << endl;
	return x;
}
void Queue::size()
{
	int len = *(&items + 1) - items;
	cout << "Length of queue is " << len << endl;
}
void Queue::display()
{
	int i;
	if(isFull())
	{
		cout << "Queue is full \n";
	}
	if (isEmpty())
	{
		cout << "Queue is empty :( \n";
	}
	else
	{
		cout << "Front index -> " << front << endl;
		cout << "Items-> ";
		for ( i = front; i != rear;i=(i+1)%Size)
		

			cout << items[i]<<" " ;
			
		
		cout << items[i] << " ";
		cout << endl;
		cout << "Rear->index " << rear << endl;
	}
}
void Queue::print()
{
	Queue q;
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	
	q.display();
	cout << endl;
	int x = q.dequeue();
	if (x != -1)
		cout << "Deleted elment is " << x << endl;
	cout << "Updated  queue \n";
	q.display();
	q.enqueue(60);
	q.display();
	
}
int main()
{
	int x, y;
	x = 2;
	y = 4;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << 4 % 2;
	cout << endl;
	cout << endl;
	cout << endl;

	Queue queue;
	queue.print();
	return 0;
}*/