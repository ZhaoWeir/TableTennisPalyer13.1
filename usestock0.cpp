#include<iostream>
#include"stock00.h"
int main()
{
	Stcok fluffy_the_cat;
	//fluffy_the_cat.acquire("NanoSmart",20,12.50);
	fluffy_the_cat.show();
	fluffy_the_cat.buy(15,18.125);
	fluffy_the_cat.show();
	fluffy_the_cat.sell(400,20);
	fluffy_the_cat.show();
	fluffy_the_cat.buy(300000,40.125);
	fluffy_the_cat.show();
	fluffy_the_cat.sell(300000,0.125);
	fluffy_the_cat.show();


	//Stcok stock1("NanoSmart",12,20.0);


	//stock1.show();

	system("pause");
	return 0;
}