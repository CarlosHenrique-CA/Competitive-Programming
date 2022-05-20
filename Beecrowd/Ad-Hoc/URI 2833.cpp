#include <iostream>
 
using namespace std;
 
int main() 
{
    int vetor[17];
    int boss;
    int player;
    for(int i=1; i<17; i++)
    {
        cin>>vetor[i];
        if(vetor[i]==1)
        {
            boss=i;
        }
        if(vetor[i]==9)
        {
            player=i;
        }
    }
    int media=16/2;
    int contador=0;
    if(boss>media && player>media || boss<=media && player<=media)
    {
        if(boss>media && player>media)
        {
            media=12;
            if(boss>media && player>media || boss<=media && player<=media)
            {
				if(boss>media && player>media)
				{
					media=14;
					if(boss>media && player>media || boss<=media && player<=media)
					{
						cout<<"oitavas"<<endl;
					}
					else
					{
						cout<<"quartas"<<endl;
					}
				}
				else
				{
					media=10;
					if(boss>media && player>media || boss<=media && player<=media)
					{
						cout<<"oitavas"<<endl;
					}
					else
					{
						cout<<"quartas"<<endl;
					}
				}
			}
			else
			{
				cout<<"semifinal"<<endl;
			}
        }
        else
        {
            media=4;
            if(boss>media && player>media|| boss<=media && player<=media)
            {
                if(boss>media && boss<=8 && player>media && player<=8)
                {
					media=6;
					if(boss>media && player>media || boss<=media && player<=media)
					{
						cout<<"oitavas"<<endl;
					}
					else
					{
						cout<<"quartas"<<endl;
					}
				}
				else
				{
					media=2;
					if(boss>media && player>media || boss<=media && player<=media)
					{
						cout<<"oitavas"<<endl;
					}
					else
					{
						cout<<"quartas"<<endl;
					}
				}
            }
            else
			{
				cout<<"semifinal"<<endl;
			}
        }
    }
    else
    {
        cout<<"final"<<endl;
    }
    
}
