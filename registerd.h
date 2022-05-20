#include"Event.h"
#include"Nominee.h"
#include "unregisterduser.h"
#include <cstring>"
#include<iostream>

class registerd: public unregisterduser
{
protected:
int  V_IDR;
char Name[20];
char Password[30];
//Class Relationship
public:
	     registerd();
	     registerd(const char uname[25], const char cpwd[8]);
		void login();
		void passwordvalidation();
		void logout();

		 void Cast_Vote();
		 void View_Result();
		 ~registerd();
};

//implementation
registerd::registerd()
{
strcpy(username, " ");
strcpy(password, " ");
}
registerd::registerd(const char uname[25], const char cpwd[8])
{
strcpy(username, uname);
strcpy(password, cpwd);
}
void registerd::login()
{
}
void registerd::passwordvalidation()
{
}
void registerd::logout()
{
}
registerd::~registerd()
{
}














