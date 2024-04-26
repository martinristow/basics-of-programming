#include <iostream>
using namespace std;
int main()
{
	int broj;
	cout<<"Vnesi broj od 1 do 7: \n";
	cin>>broj;
	
	switch(broj)
	{
		case 1:cout<<"Ponedelnik \n";break;
		case 2:cout<<"Vtornik \n";break;
		case 3:cout<<"Sreda \n";break;
		case 4:cout<<"Cetvrtok \n";break;
		case 5:cout<<"Petok \n";break;
		case 6:cout<<"Sabota \n";break;
		case 7:cout<<"Nedela \n";break;
		default:cout<<"Vnesovte pogresen broj, treba od 1-7! \n";break;
	}
	return 0;
}
