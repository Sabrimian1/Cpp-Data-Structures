#include <iostream>
#include "vec.hh"

int main(){
    sab::Vector<int> v;

    v.push_back(7);

    v.push_back(10);

    v.get_total();

    v.print();
    
}