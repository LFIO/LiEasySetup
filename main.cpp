#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
	cout<<"LOADING... PLEASE WAIT..."<<endl;
	Sleep(3500);
	system("cls");
	system("title LiEasySetup");
	cout<<"Welcome to use LES,"<<endl;
	cout<<"We are going to start now!"<<endl;
	system("pause");
	rededl:
	system("cls");
	cout<<"First,Is your browser download location is the"<<endl;
	cout<<"Windows DEFAULT download location?"<<endl;
	cout<<"Enter 1(yes) or 0(no)"<<endl;
	int dedl;
	cin>>dedl;
	if(dedl==0)
	{
		cout<<"Ok,I can't help you to RUN INSTALLER then."<<endl;
		cout<<"Let's continue."<<endl;
		system("pause");
	}
	else if(dedl==1)
	{
		cout<<"Let's continue!"<<endl;
		system("pause");
	}
	else
	{
		cout<<"Oops,You enter a wrong thing~"<<endl;
		system("pause");
		goto rededl;
	}
	system("cls");
	cout<<"Enter the appID to download that software.(e.g. 001)"<<endl;
	cout<<"Enter 0 to continue."<<endl<<endl;
	cout<<"1 Netease Music   2 Bandizip   3 Chrome"<<endl;
	cout<<"4 Discord   5 Evernote   6 Mozilla Firefox"<<endl;
	cout<<"7 Format Factory(Broken)   8 Huorong Safety   9 QQ Music"<<endl;
	cout<<"10 Spotify   11 Steam   12 TIM(Simple QQ)"<<endl;
	cout<<"13 QQ(Normal)   14 Telegram   15 Typora"<<endl;
	cout<<"16 WeChat   17 YouDao Note   18 iTunes"<<endl;
	cout<<"Enter the number: "<<endl;
	bool chosen[18];
	long long n,i;
	for(;n!=0;)
	{
		cin>>n;
		chosen[n]=true;
		if(n==0)
		{
			break;
		}
	}
	cout<<"Please wait,We are downloading the software's installer you have chosen."<<endl;
	if(chosen[1]==true)
	{
		system("start https://get.js.org/cloudmusic");
	}
	if(chosen[2]==true)
	{
		system("start https://get.js.org/bandizip");
	}
	if(chosen[3]==true)
	{
		system("start https://get.js.org/chrome");
	}
	if(chosen[4]==true)
	{
		system("start https://get.js.org/discord");
	}
	if(chosen[5]==true)
	{
		system("start https://get.js.org/evernote");
	}
	if(chosen[6]==true)
	{
		system("start https://get.js.org/firefox");
	}
	if(chosen[7]==true)
	{
		system("start https://get.js.org/formatfactory");
	}
	if(chosen[8]==true)
	{
		system("start https://get.js.org/huorong");
	}
	if(chosen[9]==true)
	{
		system("start https://get.js.org/qqmusic");
	}
	if(chosen[10]==true)
	{
		system("start https://get.js.org/spotify");
	}
	if(chosen[11]==true)
	{
		system("start https://get.js.org/steam");
	}
	if(chosen[12]==true)
	{
		system("start https://get.js.org/tim");
	}
	if(chosen[13]==true)
	{
		system("start https://dldir1.qq.com/qqfile/qq/PCQQ9.1.3/25323/QQ9.1.3.25323.exe");
	}
	if(chosen[14]==true)
	{
		system("start https://get.js.org/telegram");
	}
	if(chosen[15]==true)
	{
		system("start https://get.js.org/typora");
	}
	if(chosen[16]==true)
	{
		system("start https://get.js.org/wechat");
	}
	if(chosen[17]==true)
	{
		system("start https://get.js.org/youdaonote");
	}
	if(chosen[18]==true)
	{
		system("start https://get.js.org/iTunes");
	}
	system("pause");
	cout<<"Sorry,The automatic install feature is not open yet."<<endl;
	cout<<"Thanks for using LES!"<<endl;
	if(n==4174977269)
	{
		cout<<"Atari is best game company in the past xD"<<endl;
	}
	return 0;
}
