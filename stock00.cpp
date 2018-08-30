#include<iostream>
#include "stock00.h"

//void Stcok::acquire(const string &co,long n,double pr)
//{
//	company=co;
//	if (n<0)
//	{
//		cout<<"Number of shares can't be negative; "<<company<<" shares set to 0.\n";
//		shares=0;
//
//	}else
//	{
//		shares=n;
//		share_val=pr;
//		set_tot();
//	}
//}


//尝试进行改动


Stcok::Stcok()
{
	cout<<"Default constructor called\n";
	company="no name";
	shares=0;
	share_val=0.0;
	total_val=0.0;
}



Stcok::Stcok(const string &co,long n,double pr)
{
	cout<<"Constructor using "<<co<<" called\n";
	company=co;
	if (n<0)
	{
		cout<<"Number of shares can't be negative; "<<company<<" shares set to 0.\n";
		shares=0;

	}else
	{
		shares=n;
		share_val=pr;
		set_tot();
	}
}

Stcok::~Stcok()
{
	cout<<"Bue,"<<company<<"!\n";
}

void Stcok::buy(long num,double price)
{
	if (num<0)
	{
		cout<<"Number of shares can't be negative; "<<" Transaction is aborted.\n";
	}else
	{
		shares+=num;
		share_val=price;
		set_tot();
	}
}


void Stcok::sell(long num,double price)
{
	if (num<0)
	{
		cout<<"Number of shares can't be negative; "<<" Transaction is aborted.\n";
	}else
	{
		shares-=num;
		share_val=price;
		set_tot();
	}
}


void Stcok::update(double price)
{
	share_val=price;
	set_tot();
}


void Stcok::show()const
{
	cout<<"Company:"<<company<<" Shares: "<<shares<<'\n'
		<<" Share Price:$"<<share_val
		<<" Total Worth:$"<<total_val<<'\n';
}

const Stcok & Stcok::topval(const Stcok & s)const
{
	if(s.total_val>total_val)
	{
		return s;
	}else
	{
		return *this;
	}
}