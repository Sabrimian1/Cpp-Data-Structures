#include <iostream>
#include <vector>


template<typename T>
class Node{
    public:
        T data;
        Node<T>* next;
        Node<T>* prev;


};

int main(){

    Node<int>* head = new Node<int>();
    Node<int>* second = new Node<int>();
    Node<int>* third = new Node<int>();

    head->data = 1;
    head->next = second;

    second->data = 10;
    second->next = third;


    third->data = 100;
    third->next = nullptr;


    std::vector<Node<int>*> myVec;


    myVec.push_back(head);
    myVec.push_back(second);
    myVec.push_back(third);

    for(int i = 0; i < myVec.size(); i++){
        std::cout << myVec[i]->data << std::endl;
    }











    


}