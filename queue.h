#include "node.h"

class Queue {
  NodePtr headPtr, tailPtr;
  int size;

public:
  void enqueue(int,int);
  int dequeue();
  Queue();
  ~Queue(); // dequeue all
};

Queue::Queue(){
  size=0;
  headPtr=NULL;
  tailPtr=NULL;
}

Queue::~Queue(){
 int i;
 int n=size;

  //while(size>0)
  for(i=0;i<n;i++)
    dequeue();
  
}
void Queue::enqueue(int o,int q) {
  NodePtr new_node = new NODE(o,q); // 1.Create
  if(new_node){
    if(size==0){
      headPtr = new_node;
    }
    else{
       // 2 Connect
      tailPtr->set_next(new_node);
    }
    // 3 change tai
    tailPtr = new_node;
      
  }
  else cout<<"Not enough memmory"<<endl;

// 4. increase size
  size++;
}

int Queue::dequeue() {
  int value=0;
  NodePtr t;
 if(headPtr){
  // 1. Save the node to be deleted
    t = headPtr;
    // 1.5 take the value out to value
   value = t->get_price();
    // 2. move (head)
    headPtr = headPtr->get_next();
    if(size==1) tailPtr=NULL;
    // 3. delete
    delete t;
   size--;
  }
  return value;
}