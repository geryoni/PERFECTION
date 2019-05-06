#include <iostream>
#include <random>

using namespace std;
//#define zz '\n'

const char zz = '\n';
struct tag_node {
	int a;
	tag_node* next;
};

tag_node* InitList();
tag_node* createNode();
void Add2Begin(tag_node**);
void Add2Begin(tag_node*);
void Add2End(tag_node*);
void AddByValue(tag_node*);

void RemoveNode(tag_node*);
void RemoveList(tag_node**);

void ReverseList(tag_node**);

int Display(tag_node*);



int main()
{
	const char zz = '\n';
	cout << "hellow" << zz;
	int b = 3, c = 8;
	int d = b * c;

	cout << "d = " << d << zz;

	tag_node* head = InitList();
	tag_node** head_ptr = &head;
	for (size_t i = 0; i < 9; i++)
		{
			Add2Begin(head_ptr);

		}
	
	Display(head);

	ReverseList(&head);
	Display(head);

	RemoveList(&head);
	Display(head);



	return 0;

}

tag_node* InitList()
{
	tag_node* head = new tag_node;
	head->a = 5555;
	head->next = nullptr;
	return head;
}

int Display(tag_node* head)
{
	cout << zz;
	cout << "func\"Display\" started" << zz;
	if (head == nullptr)
		{
			cout << "- no list -" << zz;
			return -1;
		}
	else
		{
			while (head->next != nullptr)
				{
					cout << head->a << ' ';
					head = head->next;
				}
			//cout << zz << "???" << zz;
			cout <<  zz;
			return 1;
		}



}

//###############
tag_node* createNode()
{
	random_device rdMachine;
	mt19937 mtRand(rdMachine());
	uniform_int_distribution<int> distr(1, 10);
	tag_node* curr = new tag_node;

	curr->a = distr(mtRand);
	curr->next = nullptr;

	return curr;

}


void Add2Begin(tag_node** head)
{
	tag_node* curr = createNode();
	tag_node* copyHead= new tag_node;

	copyHead = (*head);

	(*head) = curr;
	curr->next = copyHead;
}

void ReverseList(tag_node** head)
{
	cout << zz;
	cout << "func\"ReverseList\" started" << zz;
	tag_node* beg = nullptr;
	//tag_node* temp = nullptr;
	beg = *head;
	cout << "          &beg= " << &beg << zz;
	cout << "        beg->a= " << beg->a <<zz;
	cout << "     &(beg->a)= " << &beg->a <<zz;
	cout << "  &(beg->next)= " << &beg->next << zz ;
	cout << "       (*head)= " << (*head) << zz;
	cout << "      &(*head)= " << &(*head) << zz;
	cout << "   &(*head)->a= " << &(*head)->a <<zz;
	cout << "&(*head)->next= " << &(*head)->next << zz ;

	int arr[1] = {234542};
	cout << "arr[1]= " << arr[0] << zz;
	cout << "@arr[0]= " << &arr[0] << zz;
	cout << "@arr= " << &arr << zz;
	return;
	//curr->next = (*head)->next;
	if ((*head) == nullptr)
		{
			cout << "- no list -" << zz;
		}

	while ((*head)->next != nullptr)
		{
			beg->next = *head;
			*head = (*head)->next;
			(*head)->next = beg->next;
		}

	(*head) = beg;
	(*head)->next = nullptr;

}


void RemoveList(tag_node** head)
{
	cout << zz;
	cout << "func\"RemoveList\" started" << zz;
	while ((*head)!=nullptr)
		{
			tag_node* prev = nullptr;
			prev = *head;
			*head = (*head)->next;

			delete prev;
		}

	(*head)=nullptr;
}
