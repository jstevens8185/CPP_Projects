// linked list implementation
#include <iostream>
using namespace std;

/******************************
 * Struct:  Node
 * Use:     Used to hold data and point to next node
 * input:   int, node*
 * Default: Data = 0, next = null
 ******************************/

struct Node
{
    int data;
    Node* next;
    Node(){
        data = 0;
        next = nullptr;
    }
    Node(int d, Node* n){
        data = d;
        next = n;
    }
};

/**********************************
 * Linked list
 * Creates list and links them
 * with node pointers
 * ********************************/

class List{
    private:
    Node* head;
    public:
    List(){
        head = nullptr;
    }
    

}