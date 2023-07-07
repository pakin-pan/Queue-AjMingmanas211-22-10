  #include <iostream>
using namespace std;
#include "queue.h"

int main(int argc, char *argv[]) {
  Queue q;

  int i,j=1, price;
  for (i = 1; i < argc; i+=2) {
    if (argv[i][0] == 'x'){
      price = q.dequeue();
      if (price>0){
        cout<<"Customer no:"<<j<<endl;
        j++;
        cout<<"You have to pay "<<price<<endl;
        int money=0, change=0;
        do{
          cout<<"Money: ";
          cin>>money; 
        }while(money<price);
        cout<<"Thank you"<<endl;
        if(money>price){
          change = money-price;
          cout<<"Change:"<<change<<endl;
        }
      }
      else 
        cout<<"There is no queue"<<endl;
      i--;
    }  
     else {
      if (atoi(argv[i])<1 || atoi(argv[i])>3){
        cout<<"**************"<<endl<<"Invalid Order"<<endl<<"**************"<<endl;
        continue;
      }
      q.enqueue(atoi(argv[i]), atoi(argv[i+1])); 
      cout<<"My order is "<<argv[i]<<endl;
    }
  }
}
