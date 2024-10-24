#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int d) : data(d),next(nullptr) {}
};

class LinkedList{
    private:
    Node* head;
    
    public:
    LinkedList(){
        this->head = nullptr;
    }
    
    void insertData(int data){
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
    
    void display(){
        Node* temp = head;
        while(temp != nullptr){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "End" << endl;
    }
    
};


int main(){
    LinkedList ll;
    ll.insertData(10);
    ll.insertData(20);
    ll.display();
    return 0;
}