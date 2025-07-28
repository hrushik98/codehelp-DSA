#include <iostream>
#include <stack>
using namespace std;


int main(){

    stack<char> s;

    string input_value;
    cout << "enter the value of the string" << endl;
    cin >> input_value;

    for (int i = 0;i <input_value.length(); i++){
        char ch = input_value[i];
        s.push(ch);
    }

    cout << "All the values are pushed"<<endl;

    cout << "\nbegin printing of value in reverse order: " << endl;
    string answer = "";

    while(!s.empty()){
        char ch = s.top();
        answer.push_back(ch);
        s.pop();


    }

    cout << answer <<endl;


}