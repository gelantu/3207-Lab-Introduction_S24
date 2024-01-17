#ifndef RANDOM_H
#define RANDOM_H
#include <stdlib.h>

char randchar(){
    return 'a' + rand() % 26;
};

#endif