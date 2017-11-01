#ifndef STOCK00_H_
#define STOCK00_H_

#include<string>

using namespace std;
class Stcok
{
public:
	Stcok();
	Stcok(const string & co,long n=0,double pr=0.0);
	~Stcok();
	//void acquire(const string & co,long n,double pr);
	void buy(long num,double price);
	void sell(long num,double price);
	void update(double price);
	void show()const;
	const Stcok & topval(const Stcok&s)const;
private:
	string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot(){total_val=shares*share_val;}
};


#endif