#include <iostream>
#include "unregisterduser.h"
#include "Nominee.h"
#include "organizer.h"
#include "payment.h"
#include "registerd.h"
#include "result.h"
#include "sponsor.h"
#include "system.h"
#include "SystemAdmin.h"
#include "Event.h"

using std::cout;
using std::cin;
using std::endl;


int main()
{
    cout<<"Welcome to the Voting System"<<endl;
    //Registereduser Class Object
    registerd* registerd;

    //Unregistereduser Class Object
    unregisterduser* UnregisteredUser;

    //Payment Class Object
    payment* payment;  

    //Event class Object
    event* e1 = new event();

  //Result class Object
  Result* r1= new Result();

  //Sponsor class Object
  Sponsor* s1 = new Sponsor();

  //Organizer class Object
  Organizer* o1 = new Organizer();

  

//-----------------Method Calling-----------------

registerd->login();
registerd->logout();

UnregisteredUser->regisration();
UnregisteredUser->cancelRegistration();

payment->Carddetails();
payment->displaydetails();

e1->updateEventdetails();
e1->displayEventdetails();
e1->checkEventdetails();

r1->get_VoidCount();

s1->Advertise();

o1->Submit_Report();  
  

return 0;
}