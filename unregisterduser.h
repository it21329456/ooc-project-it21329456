#include<iostream>
#include <cstring>
#include "unregisterduser.h"

class unregisterduser
{
protected:

int userID;
char userName[30];
char userAddress[30];
char userEmail[30];
int userTel;
char username[10];
char password[10];

public:
	     
	     unregisterduser();
		 unregisterduser(int uID,const char uname[],const char uaddress[],const char umail[],int utel[],const char pword[]);
		 void regisration();
		 void cancelRegistration();
		 void displaydetails();
		 char getName();
		 int  getid();
		 void View_Results();
		 ~unregisterduser();
};



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
  

