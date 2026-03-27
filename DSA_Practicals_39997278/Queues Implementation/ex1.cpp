#include <iostream>
using namespace std;
#include <queue>
#include <string>

int main() {
    queue<string> countries;

    countries.push("Azerbaijan");    
    countries.push("Brazil");
    countries.push("Congo");
    countries.push("Dominican Republic");
    countries.push("Egypt");

    cout<<countries.empty()<<"\n";
    cout<<countries.size()<<"\n";
    cout<<countries.front()<<"\n";
    cout<<countries.back()<<"\n";
    
    countries.push("Andorra");
    countries.pop();

    
    cout<<countries.front()<<"\n";
    cout<<countries.back()<<"\n";
}