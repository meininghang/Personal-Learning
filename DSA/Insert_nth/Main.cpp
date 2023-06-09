#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
struct Node* head;
void Insert(int data, int n);
void Print();
int main(){
    head = NULL;//empty liast
    Insert(2,1);//List : 2
    Insert(3,2);
    Insert(4,1);
    Insert(5,2);
    Print();
    return 0;
}

void Insert(int data, int n){
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->next =NULL;
    if (n==1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }
    Node* temp2 = head;
    for (int i = 0; i < n-2; i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
    
    
}
void Print(){
    Node* temp = head;
    while (temp)
    {
        cout << temp->data <<" " ;
        temp = temp->next;
    }
    cout << endl;
}