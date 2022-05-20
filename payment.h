class payment
{
private:
int  payment_ID;
int  Card_number;
char PaymentType[30];

public:
	    payment();
	     payment(int p_id,int c_number,char  P_Type[30]);
		 void Carddetails();
		 void EditCardDetails();
		 char UpdateCardDetails();
		 void displaydetails();
		 ~payment();
};
