#include <iostream>
using namespace std;

//H(k)=k%10
const int SIZE=10;

//-1 =empty slot
int table[SIZE];

//sentinel -1
void setup(){
    for(int i=0; i<SIZE; i++)
    table[i]=1;
}

//hash function
int hashFunc(int key){
    return key % SIZE;
}

//compute index and store key
void insert(int key){
    int index=hashFunc(key);
    table[index]=key;
}

//print each bucket and its contents
void display(){
    for(int i=0; i<SIZE; i++){
        cout<<"["<<i<<"]";
        if (table[i] == -1) cout<< "empty";
        else cout<<table[i];
        cout<<"\n";
}
}
int main(){
    setup();
    
    //H(k)=k%10
    insert(31);
    insert(46);
    insert(82);
    insert(79);
    insert(28);

    display();
    return 0;
}