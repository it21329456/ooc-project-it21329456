#include "payment.h"
#include <cstring>
 payment::payment() {
payment_ID = 0;
strcpy(PaymentType, "");
Card_number = 0;
}
 payment:: payment(int id, const char type[], int CNumber) {
payment_ID = id;
strcpy(PaymentType, type);
Card_number = CNumber;
}
void  payment::Carddetails()
{
}
void  payment::EditCardDetails()
{
}
void  payment::displaydetails()
{
}
