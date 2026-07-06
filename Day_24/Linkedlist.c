#include <stdio.h>
#include <malloc.h> // #include <alloc.h>
#include <stdlib.h>

struct Node
{
	int num;
	struct Node *next;
};

struct Node *start;

void insert();
void display();
void del();
void edit();
void count();
void sort();
void reverse();
void exit();
void atbeg();
void atbeg1();
void atend();
void atend1();
void before();
void before1();
void after();
void after1();
void atpos();
void atpos1();

int main()
{
	int ch1;
	char choice1 = 'y';
	start = NULL;
	system("cls"); // clrscr();
	do
	{
		printf("\n LINKED LIST PROJECT \n");
		printf("\n 1. INSERT     ");
		printf("\n 2. DISPLAY     ");
		printf("\n 3. DELETE      ");
		printf("\n 4. EDIT        ");
		printf("\n 5. COUNT NODES ");
		printf("\n 6. SORTING      ");
		printf("\n 7. REVERSE     ");
		printf("\n 8. EXIT        ");
		printf("\n\n Enter Your Choice = ");
		scanf("%d", &ch1);
		switch (ch1)
		{
		case 1:
			insert();
			break;
		case 2:
			display();
			break;
		case 3:
			// del();
			break;
		case 4:
			edit();
			break;
		case 5:
			// count();
			break;
		case 6:
			// sort();
			break;
		case 7:
			// reverse();
			break;
		case 8:
			choice1 = 'n';
			break;
		default:
			printf("invalid choice");
		}
	} while (choice1 == 'y');
	return 0;
}

void insert()
{
	int ch2;
	char choice2;
	do
	{
		printf("\n 1. ATBEG ");
		printf("\n 2. ATEND");
		printf("\n 3. BEFORE");
		printf("\n 4. AFTER ");
		printf("\n 5. ATPOSI");
		printf("\n 6. EXIT      ");
		printf("\n\n Enter Your Choice = ");
		scanf("%d", &ch2);
		switch (ch2)
		{
		case 1:
			atbeg();
			break;
		case 2:
			//				atend ( );
			break;
		case 3:
			//				before ( );
			break;
		case 4:
			//				after ( );
			break;
		case 5:
			//				atpos ( );
			break;
		case 6:
			choice2 = 'n';
			break;
		default:
			printf("INVALID CHOICE");
		}
	} while (choice2 == 'y');
}

void del()
{
	int ch2;
	char choice2;
	do
	{
		printf("\n 1. ATBEG ");
		printf("\n 2. ATEND");
		printf("\n 3. BEFORE");
		printf("\n 4. AFTER ");
		printf("\n 5. ATPOSI");
		printf("\n 6. EXIT      ");
		printf("\n\n Enter Your Choice = ");
		scanf("%d", &ch2);
		switch (ch2)
		{
		case 1:
			atbeg();
			break;
		case 2:
			atend();
			break;
		case 3:
			//				before ( );
			break;
		case 4:
			//				after ( );
			break;
		case 5:
			//				atpos ( );
			break;
		case 6:
			choice2 = 'n';
			break;
		default:
			printf("INVALID CHOICE");
		}
	} while (choice2 == 'y');
}

void atbeg()
{
	struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
	printf("Enter data of node: ");
	scanf("%d", &ptr->num);
	ptr->next = NULL;

	if (start == NULL)
		start = ptr;
	else
	{
		ptr->next = start;
		start = ptr;
	}
}

void display()
{
	struct Node *temp = start;
	if (start == NULL)
	{
		printf("Empty Linked List.");
		return;
	}
	while (temp != NULL)
	{
		printf("%d -> ", temp->num);
		temp = temp->next;
	}
	printf("NULL");
}

void atend()
{
	struct Node *temp = start;

	struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

	printf("Enter data of node: ");
	scanf("%d", &ptr->num);
	ptr->next = NULL;

	if (start == NULL)
	{
		start = ptr;
		return;
	}

	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = ptr;
	}
}

void count()
{
	int count = 0;
	struct Node *temp = start;
	if (start == NULL)
	{
		printf("Empty Linked List.");
		return;
	}
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	printf("Count: %d", count);
}

void edit()
{
    int oldValue, newValue;
    int found = 0;

    struct Node *temp = start;

    if (start == NULL)
    {
        printf("Linked List is Empty.\n");
        return;
    }

    printf("Enter value to edit: ");
    scanf("%d", &oldValue);

    printf("Enter new value: ");
    scanf("%d", &newValue);

    while (temp != NULL)
    {
        if (temp->num == oldValue)
        {
            temp->num = newValue;
            found = 1;
            break;
        }

        temp = temp->next;
    }

    if (found)
        printf("Node updated successfully.\n");
    else
        printf("Node not found.\n");
}