#include<iostream>
#include<string>
#include<thread>
#include<cstdlib>
#include<ctime>
#include<chrono>

using namespace std;

const int iWidth = 70;
const int iFlipsForLine = 5;
const int sleepTime = 100;



int main(void)
{
	int i = 0, x =0;
	srand(time(NULL));
	bool bSwitches[iWidth] = {0};

	const string ch = "1234567890qwertyuiopasdfghjkl"
                      "zxcvbnm,./';[]!@#$%^&*()-=_+";
	const int iLength = ch.size();
	system("Color 0A");
		
	while(true)
	{
		for(i = 0; i < iWidth; 	i+=2)
		{
			if(bSwitches[i])
				cout << ch[rand() % iLength] << " ";
			else
				cout << " ";
		}
		for(i = 0; i < iFlipsForLine; 	i++)
		{
			x = rand() % iWidth;
			bSwitches[iWidth] = !bSwitches[x]; 
		}
		cout << endl;

		this_thread::sleep_for(chrono::milliseconds(sleepTime));
	}
	return 0;
}
