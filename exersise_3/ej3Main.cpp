#include <iostream>
#include <string>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;
} typedef node;

struct List{
    node* head;
    node* tail; 
    int size;
} typedef list;


int create_node();
void push_front();
void push_back(); 

// int create_node(){
//     node* current = new node; // creo que new es inicializado con 0 automaticamente. 
//     try{
//         current = new node; 
//     }catch (const bad_alloc&){
//         throw runtime_error("No memory available");
//         return 1;
//     }
//     return current;

// }TODO MAL HACER OTRA VEX UNIQUE POINTERS
