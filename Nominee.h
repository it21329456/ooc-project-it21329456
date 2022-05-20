
//#include"Event.h"
class Nominee
{
protected:
int  Nominee_ID;
char Nominee_Name[20];
char Symbol[30];

public:
	     Nominee();
	     Nominee(int n_id,char n_name,char symbol[30]);
		 void Submit_Nomination();
		 void Cancel_Nomination();
		 ~Nominee();
};

#include <cstring>
#include "unregisterduser.h"
unregisterduser::unregisterduser(){
userID = 0;
strcpy(userName, " ");
strcpy(userAddress, " ");
strcpy(userEmail, " ");
userTel = 0;
strcpy(userName, "");
strcpy(password, "");
}

void unregisterduser::regisration()
{
}

void unregisterduser::cancelRegistration()
{
}