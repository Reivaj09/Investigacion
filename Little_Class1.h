//
// Created by Javier on 10/4/2021.
//
#ifndef UNTITLED1_LITTLE_CLASS1_H
#define UNTITLED1_LITTLE_CLASS1_H
#include <iostream>
#include <sstream>
using std::stringstream;

class BancoNacional {
public:
    BancoNacional();
    bool charge();
    virtual ~BancoNacional();
};

#endif //UNTITLED1_LITTLE_CLASS1_H