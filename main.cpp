#include <iostream>

int main() 
{
	int mas [5];

	mas[0] = 19;
	mas[1] = 3;
	mas[2] = 294;
	mas[3] = 1;
	mas[4] = 0;

	for(int i=0;i<5;i++)
	{
		int imin = i;
		for(int j=0;j<5;j++)
		{
			if(mas[j] < mas[imin])
				imin = j;
			int a = mas[i];
			mas[i] = mas[imin];
			mas[i] = a;
		}

	}


	for(int i=0; i<5; i++)
	{
		std::cout<<mas[i]<<std::endl;
	}
}
