#include<iostream>
using namespace std;

int main(){
	
	int quant;
	int choice;
	
	//Quantity
	int Qrooms=0,Qpastas=0,Qburgers=0,Qnoodles=0,Qshakes=0,Qchikens=0;
	
	//Food item soldl
	int Srooms=0,Spastas=0,Sburgers=0,Snoodles=0,Sshakes=0,Schikens=0;
	
	//Total proce of items
	int Total_rooms=0,Total_pastas=0,Total_burgers=0,Total_noodles=0,Total_shakes=0,Total_chikens=0;
	cout<<"---------Owner Section -------"<<endl;
	cout<<"\n======>> Quantity of items we have"<<endl;
	cout<<"\nRooms available: ";
	cin>>Qrooms;
	cout<<"Quantity of burger: ";
	cin>>Qburgers;
	cout<<"Quantity of pastas: ";
	cin>>Qpastas;
	cout<<"Quantity of noodles: ";
	cin>>Qnoodles;
	cout<<"Quantity of shake: ";
	cin>>Qshakes;
	cout<<"Quantity of chiken-roll: ";
	cin>>Qchikens;
	
	cout<<endl<<"------------- Menu Section ------------------------";
	cout<<endl<<"Please select from the menu options: ";
	cout<<endl<<"1) Rooms";
	cout<<endl<<"2) Pastas";
	cout<<endl<<"3) Burger";
	cout<<endl<<"4) Noodles";
	cout<<endl<<"5) Shake";
	cout<<endl<<"6) Chiken-roll";
	cout<<endl<<"7) Information regarding sales and collection ";
	cout<<endl<<"8)Exit"<<endl;
	
	cout<<"\n--------------------------------------------------"<<endl;
	cout<<"Please Enter your choice: ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"\nEnter the number of rooms you want: ";
			cin>>quant;
			
			if(Qrooms-Srooms>=quant)
			{
				Srooms=Srooms+quant;
				Total_rooms=Total_rooms+quant*1200;
				cout<<"\t"<<quant<<"room/rooms have been alloted to you! "<<endl;
			}
			else
			{
				cout<<"\n\tOnly "<<Qrooms-Srooms<<" Rooms remaining in hotel";
				break;
			}
		case 2:
				cout<<endl<<"Enter pastas Quantity : ";
				cin>>quant;
				if(Qpastas-Spastas>=quant){
					Spastas=Spastas+quant;
					Total_pastas=Total_pastas+quant*250;
					cout<<"\t"<<quant<<" pasta is the order\n";
				}
				else
				{
					cout<<endl<<"Only "<<Qpastas-Spastas<<" pasta Remaining in hotel ";
					break;				}
		case 3:
				cout<<endl<<"Enter Burger Quantity : ";
				cin>>quant;
				if(Qburgers-Sburgers>=quant){
					Sburgers=Sburgers+quant;
					Total_burgers=Total_burgers+quant*120;
					cout<<"\t"<<quant<<" burger is the order";
				}
				else
				{
					cout<<endl<<"Only "<<Qburgers-Sburgers<<" Burger Remaining in hotel ";
					break;		
							}
			case 4:
				
				cout<<endl<<endl<<"Enter Noodles Quantity : ";
				cin>>quant;
				if(Qnoodles-Snoodles>=quant){
					Snoodles=Snoodles+quant;
					Total_noodles=Total_noodles+quant*140;
					cout<<"\t"<<quant<<" noodles is the order"<<endl;
				}
				else
				{
					cout<<endl<<"Only "<<Qnoodles-Snoodles<<" noodels Remaining in hotel ";
					break;		
							}
			case 5:
				
				cout<<endl<<"Enter Shakes Quantity : ";
				cin>>quant;
				if(Qshakes-Sshakes>=quant){
					Sshakes=Sshakes+quant;
					Total_shakes=Total_shakes+quant*120;
					cout<<"\t"<<quant<<" shake is the order";
				}
				else
				{
					cout<<endl<<"Only "<<Qshakes-Sshakes<<" shake Remaining in hotel ";
					break;		
							}
			case 6:
				cout<<endl<<endl<<"Enter Chiken Quantity : ";
				cin>>quant;
				if(Qchikens-Schikens>=quant){
					Schikens=Schikens+quant;
					Total_chikens=Total_chikens+quant*150;
					cout<<"\t"<<quant<<" chiken is the order"<<endl;
				}
				else
				{
					cout<<endl<<"Only"<<Qchikens-Schikens<<"chikenn-roll Remaining in hotel ";
					break;		
							}
			case 7:
				cout<<"------------------------------------------";
				cout<<endl<<"\t\t------Details of the sales and collection------";
				cout<<endl<<"------------Rooms---------";
				cout<<endl<<"Number if rooms we have : "<<Qrooms;
				cout<<endl<<"Number of rooms we gave rent "<<Srooms;
				cout<<endl<<"Remaining rooms : "<<Qrooms-Srooms;
				cout<<endl<<"Total rooms collection for the day : "<<Total_rooms;
				
				cout<<endl<<endl<<endl<<"-------------Pastas---------------\n";
				cout<<"Number of pastas we had : "<<Qpastas;
				cout<<endl<<"Number of pastas we sold "<<Spastas;
				cout<<endl<<"Remaining pastas : "<<Qpastas-Spastas;
				cout<<endl<<"Total pastas collection for the day : "<<Total_pastas;
				
				cout<<endl<<endl<<endl<<"----------Burger----------\n";
				cout<<"Number of burger we had : "<<Qburgers;
				cout<<endl<<"Number of burger we sold "<<Sburgers;
				cout<<endl<<"Remaining burger : "<<Qburgers-Sburgers;
				cout<<endl<<"Total burger collection for the day : "<<Total_burgers;
				
				cout<<endl<<endl<<endl<<"-------Noodles-----------\n";
				cout<<"Number of Noodles we had : "<<Qnoodles;
				cout<<endl<<"Number of noodles we sold "<<Snoodles;
				cout<<endl<<"Remaining noodles : "<<Qnoodles-Snoodles;
				cout<<endl<<"Total noodles collection for the day : "<<Total_noodles;
				
				
				cout<<endl<<endl<<endl<<"----------Shakes------------------\n";
				cout<<"Number of shakes we had : "<<Qshakes;
				cout<<endl<<"Number of shakes we sold "<<Sshakes;
				cout<<endl<<"Remaining shakes : "<<Qshakes-Sshakes;
				cout<<endl<<"Total shakes collection for the day : "<<Total_shakes;
				
				
				cout<<endl<<endl<<endl<<"-----------Chikens---------\n";
				cout<<"Number of chiken we had : "<<Qchikens;
				cout<<endl<<"Number of chiken we sold "<<Schikens;
				cout<<endl<<"Remaining chiken : "<<Qchikens-Schikens;
				cout<<endl<<"Total chikens collection for the day : "<<Total_chikens;
				
				cout<<endl<<endl<<endl;
				cout<<"===>>  Total collection for the day: "<<Total_rooms+Total_burgers+Total_noodles+Total_pastas+Total_chikens+Total_shakes;
				cout<<endl;
				
				break;
			case 8:
				exit(0);
			default:
				cout<<"\n Please select the number mentioned above!";
	}
	//goto m;
}
