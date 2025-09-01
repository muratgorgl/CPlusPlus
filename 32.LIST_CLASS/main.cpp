#include <iostream>
#include <list>

using namespace std;

void printList(list<int> l){
    list<int>::iterator itr;
    for(itr = l.begin() ; itr != l.end() ; itr++){
        cout << *itr << "   ";
    }
    cout << endl;
}

void sil(list<int> *pl){
    list<int>::iterator it;
    it = pl->begin();
    it++;
    it++;
    pl->erase(it); 
}

int main(){
    list<int> lst;
    lst.push_back(5);
    lst.push_back(8);
    lst.push_front(3);
    printList(lst); // 3 5 8

    // lst.pop_back();
    // printList(lst);

    list<int>::iterator it;
    it = lst.begin();
    it++;
    it++;
    lst.insert(it, 9);
    printList(lst); //3 5 9 8

    it = lst.begin();
    it++;
    lst.insert(it, 2, 7);
    printList(lst); // 3 7 7 5 9 8 

    /* 
    it = lst.begin();
    it++;
    it++;
    lst.erase(it); 
    */

    sil(&lst);
    printList(lst); // 3 7 5 9 8

    return 0;
}