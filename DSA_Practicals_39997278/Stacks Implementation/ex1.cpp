#include <iostream>
using namespace std;
#include <stack>
#include <string>

int main() {
    stack<string> currency;

    currency.push("Dollars");
    currency.push("Dinar");
    currency.push("Pounds");
    currency.push("Euros");

    cout<<currency.empty()<<"\n";
    cout<<currency.size()<<"\n";
    cout<<currency.top()<<"\n";

    currency.pop();
    currency.push("Cedi");
}