#ifndef node_h
#define  node_h

class NODE{
	 int orderNumber,quantity;
	NODE *nextPtr;
public:
	NODE(int,int);
	~NODE();
  int get_price();
	void set_next(NODE *);
	NODE* get_next();
};
typedef NODE* NodePtr;

NODE::NODE(int o,int q){
	orderNumber = o;
  quantity = q;
	nextPtr=NULL;

}
int NODE::get_price(){
  int price;
  switch(orderNumber){
    case 1 : price = 100 * quantity; break;
    case 2 : price = 20 * quantity; break;
    case 3 : price = 50 * quantity; break;
  }
	return price;

}

NODE* NODE::get_next(){
	return nextPtr;

}

void NODE::set_next(NODE *t){
	 nextPtr=t;

}

NODE::~NODE(){
  string n;
    switch(orderNumber){
    case 1 : n="Ramen"; break;
    case 2 : n="Somtum"; break;
    case 3 : n="Fried Chicken"; break;
  }
  cout<<"**************"<<endl;
}


#endif