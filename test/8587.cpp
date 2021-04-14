#include <iostream>
#include <stack>
#define MAX 80

using namespace std;

void clearStack(stack<char> st){
    while(!st.empty())  st.pop();
}

void StackTraverse(stack<char> st){
    char ch;
    if(!st.empty()) 
    {
        ch = st.top();
        st.pop();
        StackTraverse(st);
        cout << ch << "";
    } 
}

int main(int argc, char const *argv[])
{
    stack<char> st;
    int num;
    cin >> num;
    char ch;
    for (int i = 0; i < num; i++)
    {
        while(cin.peek() !=EOF)
        {
            cin >> ch;
            if (ch == '@')
                clearStack(st);
            else if(ch == '#')  st.pop();
            else    st.push(ch);
        }
        StackTraverse(st);
        cout << endl;
    }
    
    return 0;
}
