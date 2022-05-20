class Result
{
private:
int  Nominee_ID;
char Symbol[30];

public:
	    Result();
	    Result(int N_ID,char symbol);
		 void get_VoidCount();
		 void display(int Nominee_ID,char Sysmbol);
		 
		 ~Result();
};
