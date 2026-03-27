#include <iostream>
using namespace std;

#include <string>
#include <list>

int main() {
    list<string> animals = {"Frog","Bird","Bear","Fish"};
    for (string animal:animals) {
        cout << animal << "\n";
    }//loop through the list


    cout<< animals.empty()<<"\n";//checking if the list is empty
    cout<< animals.size()<<"\n";//list size

    cout<< animals.front()<<"\n";//outputs element at the beginning of the list
    cout<< animals.back()<<"\n";//outputs element at the end of the list
   
    animals.front() = "Spider";//changes the element at the beginning of the list
    animals.back() = "Jellyfish";// changes the element at the end of the list

    animals.push_front("Cow");//inserts a new element at the beginning of the list
    animals.push_back("Scorpion");// inserts a new element at the end of the list

    animals.pop_front();//deletes the element at the beginning of the list
    animals.pop_back();//deletes the element at the end of the list



}