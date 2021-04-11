//
// Created by Javier on 10/4/2021.
//

#ifndef UNTITLED1_ADAPTION_LITTLE_CLASS1_H
#define UNTITLED1_ADAPTION_LITTLE_CLASS1_H
#include "IPaymentProccess.h"
#include "Little_Class1.h"

class PaymentProcessorBancoNacional: public IPaymentProcess {
protected:
    BancoNacional* BN;
public:
    PaymentProcessorBancoNacional(BancoNacional *bn);

    virtual void pay();
    virtual ~PaymentProcessorBancoNacional();
};


#endif //UNTITLED1_ADAPTION_LITTLE_CLASS1_H
