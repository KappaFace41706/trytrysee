#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	int n,s,t;
		unsigned seed;
	cout<<"�п�J�̤j��: ";
	cin>>n;
	seed = (unsigned)time(NULL);
    	srand(seed);
	for(int i=1;i<=6;i++)
	{
	
		t=n;
		
		for(int j=1;j<=10;j++)
		{
		
			s= (rand() % n) +1;
			 cout<<s<<" ";
			if(s<t)
			t=s;
			
		}
		cout<<"   �����̤p�Ȭ�: "<<t;
		cout<<endl<<endl;
	}
	
	system("pause");
	return 0;
 } 
