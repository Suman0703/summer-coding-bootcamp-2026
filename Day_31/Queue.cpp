#include <iostream>
using namespace std;

class Queue{
    int *arr;
    int size;
    int front = -1 , rear = -1;

    public:
    Queue(int s){
        size = s;
        arr = new int [size];
    }
                            // insertion (enque)

    void enqueue(){           // insert at rear in queue
        int val;
        cout<<"Enter value of Q : ";
        cin>>val;
        if(front == -1 || rear == -1){
            front=rear=0;
            arr[rear]=val;
        }
        else if((rear+1)%size== front){
            cout<<"Queue is full !!\n";
            return;
        }
        else{
            rear=rear+1%size;
              arr[rear] = val;
        }
        cout<<"data inserted !!\n";
    }

                            // deletion(dequeue)
    
    void dequeue(){
        if(front == -1){
            cout<<"Queue is empty !!\n";
            return;
        }
        else{
            cout<<arr[front]<<endl<<" deleted !!\n";
            front=(front+1)%size;
        }
        if(front>rear){
            front = rear = - 1;
        }
    }
                            // is Full

    bool isFull(){
        if((rear+1)%size==front){
            return true;
        return false;
        }
    }
                        // is Empty
    bool isEmpty(){
        if(front == -1){
            return true;
        return false;    
        }
        cout<<"Queue is empty ";
    }

    void display()
{

    if (front == -1)
    {
        printf("Queue is Empty.");
        return;
    }

    while (front<=rear)
    {
        cout<<arr[front]<<" ";
        front++;
    }
}
};


int main( )
{
    Queue q1(5);
	int ch;
	char choice = 'y';
	do
	{
		printf ("\n 1. ENQUEUE ") ;
		printf ("\n 2. DEQUEUE")  ;
		printf ("\n 3. DISPLAY") ;
		printf ("\n 4. isempty ")	 ;
		printf ("\n 5. isfull")  ;
		printf ("\n 6. EXIT      ")  ;
		printf ("\n\n Enter Your Choice = ") ;
		scanf ("%d",&ch);
		switch(ch)
		{
			case 1:
				q1.enqueue ( );
				break;
			case 2:
				q1.dequeue ( );
				break;
			case 3:
				q1.display();
				break;
			case 4:
				q1.isEmpty ( );
				break;
			case 5:
				q1.isFull ( );
				break;
			case 6:
				choice='n';
				break;
			default:
				printf("INVALID CHOICE");
		}
	} while(choice=='y');
}