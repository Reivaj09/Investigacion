#ifndef UNTITLED1_ADAPTION_LITTLE_CLASS3_H
#define UNTITLED1_ADAPTION_LITTLE_CLASS3_H
#include "IPaymentProccess.h"
#include "Little_Class3.h"

class PaymentProcessorBancoProMerica : public IPaymentProcess {
protected:
    BancoProMerica* BP;
public:
    PaymentProcessorBancoProMerica(BancoProMerica* bp);
    virtual bool pay();
    virtual ~PaymentProcessorBancoProMerica();
};


#endif //UNTITLED1_ADAPTION_LITTLE_CLASS3_H
