#include <iostream>
#include <vector>

using std::cout;
using std::endl;

class Stack{
public:

std::vector<int> stack;
int size_of_stack = stack.size();

Stack (int element){
  stack.push_back(element);
}

//return type name(getting type)
void push(int element){
  stack.push_back(element);
  }

int size(){
  return stack.size();
}
int peek(){
  return stack[stack.size()-1];
}
};

int main() {
  Stack my_stack(15213);
  
  my_stack.push(4);
  my_stack.push(3);
  my_stack.push(2);

  cout<< "the size of stack before peek is:"<<my_stack.size()<<endl;
  cout<<"the top element of stack is:"<<my_stack.peek()<<endl;
  cout<< "the size of stack after peek is:"<<my_stack.size()<<endl;

 // cout<< "the size of stack after pop is:"<<my_stack.size()<<endl;
  //cout<<"popping an element outta stack"<<my_stack.pop();
  //cout<< "the size of stack after pop is:"<<my_stack.size()<<endl;
  //pop,push,peek,size.
  
} 