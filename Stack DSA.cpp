#include <iostream>
#include <vector>
#include <string>
using namespace std;


//stack uses LIFO (last in first out)
class Stack
{
private:
    vector<string> classes; //vector=dynamic array that adjust to the number of elements in the array

public:
    //push as in input an element into the stack
    void push (string value)
    {
        classes.push_back(value);
    }
    //pop the top or latest element off the stack
    void pop()
    {
        if(classes.empty())
        {
            cout<<"Stack is empty. Cannot pop. \n";
        }
        else
        {
            classes.pop_back();
        }
    }
    //return the top element of the stack
    string top()
    {
        if(classes.empty())
        {
        cerr << "Stack is empty.\n";
        return "error";//returns the invalid value
        }
        return classes.back();
    }
    //stack checker if empty
    bool isEmpty()
    {
        return classes.empty();
    }
    //returns the amount/size of the size
    int size()
    {
        return classes.size();
    }
};

//function testing
int main()
{
    Stack stack;
    stack.push("warrior");
    stack.push("mage");
    stack.push("druid");
    stack.push("priest");
    stack.push("hunter");
    stack.push("paladin");
    stack.push("warlock");
    stack.push("shaman");
    stack.push("rogue");

    cout << "Top element: " << stack.top() << '\n';
    stack.pop();
    cout << "Top element after pop: " << stack.top() << '\n';
    cout << "Stack size: " << stack.size() << '\n';
    cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << '\n';

    return 0;
}
