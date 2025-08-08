#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;  
};

int main() {
    Node* head = new Node{0, nullptr};  
    Node* n1 = new Node{10, nullptr};
    Node* n2 = new Node{20,nullptr};
    Node* n3 = new Node{30,nullptr};
    Node* tail = new Node{0 ,nullptr};
    
    
    head->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = tail;
	


    cout<<head->data<< "->"<< n1->data <<"->"<<n2->data<<"->"<<n3->data<<"->"<<tail->data<<endl;

    // Cleanup
    delete n1;
    delete n2;
    delete n3;
    delete tail;
    delete head;
    

    return 0;
}
