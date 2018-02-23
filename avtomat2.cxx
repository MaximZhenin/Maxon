#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	int  a,count = 0,temp = 0,z = 0;;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a;
		if(a == 5)
			temp += 5;
		else{
			z = a - 5;
			a = a - 5 - temp;
			if(z > temp)
				temp = 0;
			else 
				temp = temp - z;
			if(a > 0)
				count += a/5;
			
		}	
	}
	if(count < 0)
		cout << 0;
	else
		cout << count;
	return 0;
}

