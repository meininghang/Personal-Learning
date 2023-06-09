//Linked list: Inserting a node at beginning
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;
void Insert(int x);
void Print();
int main(){

    head = NULL;//empty list
    cout << "How many numbers?" << endl;
    int n,i,x;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number " << endl;
        cin >> x;
        Insert(x);
        Print();
    }
    
    return 0;
}

void Insert(int x){
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;

    head = temp;
}

void Print(){
    struct Node* temp = head;
    while (temp)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}