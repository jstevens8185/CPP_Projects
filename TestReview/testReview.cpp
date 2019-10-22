/*   Write a constructor for the following 
*
*   struct Node{  
*   int data;  
*   Node* next;  
*   }  
*
*/
class List{
    private:
        Node* head;
        Node* tail;
    public:
        bool Find(Node*,int);
        void DeleteAll(Node*);
};

struct Node{
    int data;
    Node* next;

    //Constructor
    Node(int d){
        data = d;
        next = nullptr;
    }
};


/*  Given a list, and a key to search for, 
*   return true if the key is in the list, 
*   false otherwise.
*   Example function header:
*   bool Find(Node* Nptr, int key);
*/

bool List::Find(Node* head, int key){
    if(head->data == key){
        return true;
    }
    while(head->next != nullptr || head != nullptr){
        Find(head->next, key);
    }

    return false;
}


/*
*   Given a list delete all the nodes on the list.
*
*   void DeleteAll(Node* Nptr);
*
*/

void List::DeleteAll(Node* head){
  
    Node* current = head;
    Node* temp;

    while(current->next != nullptr){
        temp = current;
        current = current->next;
        delete temp;
    }
    return;
}


