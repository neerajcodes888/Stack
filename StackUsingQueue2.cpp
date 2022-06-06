#include <bits/stdc++.h> 
using namespace std;
class Stack 
{  
    queue<int> q1, q2;
    public: 
    void push(int x) 
    {
        q2.push(x); 
        while (!q1.empty()) 
        { 
            q2.push(q1.front()); 
            q1.pop(); 
        }
        queue<int> q = q1; 
        q1 = q2; 
        q2 = q; 
    } 
    void pop()
    { 
        if (q1.empty())  return ; 
        q1.pop(); 
    } 
    int top() 
    { 
        if (q1.empty())  return -1; 
        return q1.front(); 
    } 
 }; 
int main() 
{ 
    Stack s; 
    s.push(33); 
    cout<<"Elements Puhed:"<<endl;
    s.push(234); 
    cout<<"Elements Puhed:"<<endl;
    s.push(123); 
    cout<<"Elements Puhed:"<<endl;
    s.push(223);
    cout<<"Elements Puhed:"<<endl;
    s.push(323);
    cout<<"Elements Puhed:"<<endl;
    s.push(423);
    cout<<"Elements Puhed:"<<endl;
    s.push(23);
    cout<<"Elements Puhed:"<<endl;
    cout<<"Current Top elememnt:"<<s.top()<<endl; 
    s.pop(); 
    cout<<"Elements Poped:"<<endl;
    cout <<"Current Top elememnt:"<<s.top()<<endl; 
    s.pop(); 
    cout<<"Elements Poped:"<<endl;
    cout <<"Current Top elememnt:"<<s.top()<<endl; 
    return 0; 
} 
