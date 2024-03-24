#include <iostream>
#include <ctime>
using namespace std;

int* LottoHuzas(int db)
{
	int * p = new int[db];
		if(!p)
		{
			cerr <<"hiba: keves a memoria" <<  endl;
				return NULL;
		}
		for (int i = 0; i < db; i++)
		{
			switch (db)
			{
				case 5: p[i] = rand() % 90 + 1; break;
				case 6: p[i] = rand() % 45 + 1; break;
				case 7: p[i] = rand() % 35 + 1; break;
				default: cerr << "hibas db" << endl;
					return NULL; break;
			}
			for (int j = 0; j < i; j++)
			{
				if (p[i] == p[j])
				{
					i--;
					break;
				}
			}
		}
		return p;
}

void Kiir(int *t, int db)
{
	for (int i = 0; i < db; i++) cout << t[i] << " ";
	cout << endl;
		
}
int main()
{
	srand((unsigned)time(NULL));
	int n = 5;
    int *dobas = LottoHuzas(n);
	if (dobas != NULL)
	{
		cout << "a kihuzott szamok : ";
		Kiir(dobas, n);
	}
	
  delete[] dobas;
  return 0;
}
