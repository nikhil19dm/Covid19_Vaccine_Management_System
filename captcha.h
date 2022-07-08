#include <iostream>
using namespace std;

void captcha()
{
	int capt=0,captcha=0;
	srand(time(0));
	capt=rand();
	cout<<"\n\n\t\t Captcha: "<<capt;
	cout<<"\n\n\t\t Enter Captcha: ";
	cin>>captcha;
	while(captcha!=capt)
	{
		cout<<"\n\t\t You have Entered Invalid Captcha Code! Please Enter it again...\n";
		capt=rand();
		cout<<"\n\n\t\tCaptcha: "<<capt;
		cout<<"\n\n\t\tEnter Captcha: ";
		cin>>captcha;
	}
}