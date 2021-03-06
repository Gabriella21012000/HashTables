//
// Created by Gabi Bondi on 08/04/2022.
//

#ifndef Q2_HASHINT_H
#define Q2_HASHINT_H

#include <iostream>
#include "HashTbls.h"
using namespace std;

class hashint : public HashTbls<int,int>{

public:
    hashint(int size): HashTbls(size){};

    int h1(int key){
        for(int i =0; i < tableSize; i++){
            if(item[i].key == key ) return i;
        }
        return -1;
    }

    int h2(int key){ return floor(key*tableSize);}
};

#endif //Q2_HASHINT_H
