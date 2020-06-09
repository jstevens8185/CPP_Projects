#include <string>
#include <iostream>

using namespace std;

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
        int Pop(Node*);
        void Delete(string);
};

struct Node{
    int data;
    string str;
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


/*
*   Given a list: delete the first node and return its value
*
*/

int List::Pop(Node* Nptr){
    Node* temp  = head;
    int data = head->data;
    head = head->next;
    delete temp;
    return data;
}

/*
*   
*   Given a list delete, write a function to delete a node from the list.
*   Your node looks like:
*       Struct Node{
*          string data;
*          Node* next;
*       }
*
*       example func header:    void delete(Node* nptr, string key);
*/

void List::Delete(string key){
    Node* current = head;
    Node* prev = current;

    while(current->next!=nullptr){
        if(current->str == key){
            prev->next = current->next;
            delete current;    
            return;
        }
        prev = current;
        current = current->next;
    }
    return;
}




/*

Use code similar to the previous question to re-arrange the nodes into proper order 
(adjust the pointers). Do not try to "loop" or "traverse" the list when fixing.

*/

void question11(){
    string word = "theworldisinyourpocket";
    int size = word.length();

    for(int i = 0; i<size; i++){
        push(word[i]);
    }

   for(int i=0; i<size; i++){
       char a = pop();
       cout << a;
   }
}