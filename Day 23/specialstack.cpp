#include <iostream>
#include <stdlib.h>
 
using namespace std;
class Stack {
private:
    static const int max = 100;
    int arr[max];
    int top;
 
public:
    Stack() { top = -1; }
    bool isEmpty(){
    if (top == -1)
        return true;
    return false;
    }

    bool isFull(){
    if (top == max - 1)
        return true;
    return false;
    }

    int pop(){
    if (isEmpty()) {
        cout << "Stack Underflow";
        abort();
    }
    int x = arr[top];
    top--;
    return x;
   }
 
    void push(int x){
    if (isFull()) {
        cout << "Stack Overflow";
        abort();
    }
    top++;
    arr[top] = x;
    }
};
 

class SpecialStack : public Stack {
    Stack min;
 public:
    void push(int x)
{
    if (isEmpty() == true) {
        Stack::push(x);
        min.push(x);
    }
    else {
        Stack::push(x);
        int y = min.pop();
        min.push(y);
        if (x < y)
            min.push(x);
        else
            min.push(y);
    }
}
    
    int getMin()
    {
    int x = min.pop();
    min.push(x);
    return x;
    }
    int pop()
{
    int x = Stack::pop();
    min.pop();
    return x;
}
 
};
 
int main()
{
    SpecialStack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.getMin() << endl;
    s.push(0);
    cout << s.getMin();
    return 0;
}