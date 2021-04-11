//
// Created by jason on 11/4/2021.
//

#ifndef UNTITLED1_ADAPTION_LITTLE_CLASS2_H
#define UNTITLED1_ADAPTION_LITTLE_CLASS2_H

#include "Little_Class2.h"
#include "IPaymentProccess.h"
class PaymentProcessorPaypal: public IPaymentProcess {
protected:
    Paypal* PP;
public:
    PaymentProcessorPaypal(Paypal* PP);
    virtual bool pay();
    virtual ~PaymentProcessorPaypal();
};


#endif //UNTITLED1_ADAPTION_LITTLE_CLASS2_H
