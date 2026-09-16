#include<iostream>
using namespace std;
void visitor1();
void visitor2();
void employee1();
void employee2();
void employee3();
void employee4();
void section();

struct employee{
	string name;
	double idnumber;
	double salary;
};
void visitors();

struct Days{
	double count,ticket;
};

Days days[50];
employee e[50];
int empsize,visize;
double totalvis=0,totaltic=0,totaldays=0;

int main(){
cout<<"  ()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()"<<endl;
cout<<"							Developed BY										 "<<endl;

cout<<"				Izha Safdar 				(18811510-006)							 "<<endl;
cout<<"                                   Bs Physics           7th                             "<<endl;
cout<<"  ()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()()"<<endl<<endl;	
cout<<"      ************************************************************************************************************"<<endl;
cout<<"      ************************************************************************************************************"<<endl;
cout<<"      ****                                                                                                    ****"<<endl;
cout<<"      ****                                                                                                    ****"<<endl;
cout<<"      ****                                 *MUSEUM MANAGEMENT STORING SYSTEM*                                 ****"<<endl;
cout<<"      ****                                                                                                    ****"<<endl;
cout<<"      ****                                     *PAKISTAN MARITIME MUSEUM*                                     ****"<<endl;
cout<<"      ****                                                                                                    ****"<<endl;
cout<<"      ****                            *(History, Science, Civillization, Leaders,)*                           ****"<<endl;
cout<<"      ****                                                                                                    ****"<<endl;
cout<<"      ************************************************************************************************************"<<endl;
cout<<"      ************************************************************************************************************\n\n"<<endl;
	char choice;
	do{
		int a;
		cout<<"						<><><><><><><><><><><><><><>"<<endl;
		cout<<"						<>  Enter 1 for Addition  <>"<<endl;
		cout<<"						<>			  <>"<<endl;
		cout<<"						<>  Enter 2 for Search    <>"<<endl;
		cout<<"						<>			  <>"<<endl;
		cout<<"						<>  Enter 3 for Edit      <>"<<endl;
		cout<<"						<>			  <>"<<endl;
		cout<<"						<>  Enter 4 for Delete    <>"<<endl;
		cout<<"						<>			  <>"<<endl;
		cout<<"						<>  Enter 5 for show      <>"<<endl;
		cout<<"						<><><><><><><><><><><><><><>"<<endl;
		cout<<endl;
		cin>>a;
		cout<<endl;
		switch(a){
			case 1:
				int b;
				cout<<"Enter 1 for Employee "<<endl<<endl;
				cout<<"Enter 2 for Visitors "<<endl<<endl;
				cin>>b;
				cout<<endl;
				switch(b){
					case 1:
						employee1();
						break;
					case 2:
						visitor1();
						break;
				}
			break;
			case 2:
				int c;
				cout<<"Enter 1 for Employee "<<endl<<endl;
				cout<<"Enter 2 for Day Detail "<<endl<<endl;
				cin>>c;
				switch(c){
					case 1:
						employee2();
						break;
					case 2:
						visitor2();
						break;
				
						}
		break;
		case 3:
			employee3();
		break;
		case 4:
			employee4();
			break;
		case 5:
			int g;
			cout<<"Enter 1 for Sections"<<endl<<endl;
			cout<<"Enter 2 for Total Number of visitors and sale of tickets"<<endl<<endl;
			cin>>g;
			cout<<endl;
			switch(g){
				case 1:
					section();
					break;
				case 2:
					cout<<"Total Days               = "<<totaldays<<endl;
					cout<<"Total Visitors           = "<<totalvis<<endl;
					cout<<"Total Sale of Tickets    = "<<totaltic<<endl;
					break;
			}
			
			break;
	}
	
	cout<<"\n\nDo you want to continue ";
	cout<<" Enter y to continue"<<endl;
		cin>>choice;
		cout<<endl;
	}while(choice=='y' || choice=='Y');
cout<<endl<<endl;
cout<<"			=================================================="<<endl;
cout<<"			=                                                ="<<endl;
cout<<"			=             Thanks for visiting                ="<<endl;
cout<<"			=                                                ="<<endl;
cout<<"		    	=================================================="<<endl;
}




void employee1(){
	cout<<"__________________________"<<endl;
	cout<<"Enter no of Employees: ";
	cin>>empsize;
	e[empsize];
	int sum[empsize],total=0,c;
	for(int i=0;i<empsize;i++){
		cout<<"enter name: "<<endl<<endl;
		cin>>e[i].name;
		cout<<endl;
		cout<<"enter idnumber: "<<endl<<endl;
		cin>>e[i].idnumber;
		cout<<endl;
		cout<<"enter salary: "<<endl<<endl;
	cin>>e[i].salary;
	cout<<endl;
	sum[i]=e[i].salary*12;
	cout<<"Year salary: "<<sum[i]<<endl<<endl;
}

for(int i=0;i<empsize;i++){
	total= total+sum[i];
	}
	cout<<"total= "<<total<<endl;
		cout<<"__________________________"<<endl;
}
void employee2(){
	int idno;
	cout<<"__________________________"<<endl;
	cout<<"Enter idno of Employee: ";
	cin>>idno;
	cout<<endl;
	for(int i=0;i<empsize;i++){
		if(idno==e[i].idnumber){
			cout<<"Employee Detail"<<endl;
			cout<<"Name: "<<endl<<e[i].name<<endl;
			cout<<"Idno: "<<endl<<e[i].idnumber<<endl;
			cout<<"Salary: "<<endl<<e[i].salary<<endl;
		}
		cout<<"__________________________"<<endl;
	}
}
void employee3(){
	int id,d,j,b=0;
	cout<<"____________________________________________"<<endl;
	cout<<"Enter idno of Employee you want to edit:  ";
	cin>>id;
	cout<<endl;
	for(int i=0;i<empsize;i++){
		if(id==e[i].idnumber)
		j=i;
		b=1;
	}
	if(b==1){
	cout<<"What do u want to edit "<<endl<<endl;
	cout<<"Enter 1 for name"<<endl<<endl;
	cout<<"Enter 2 for idno"<<endl<<endl;
	cout<<"Enter 3 for salary"<<endl<<endl;
	cin>>d;
	cout<<endl;
	switch(d){
		case 1:
			cout<<"Older name: "<<endl<<e[j].name<<endl;
			cout<<"Enter new name: "<<endl;
			cin>>e[j].name;
			cout<<endl;
			break;
		case 2:
			cout<<"Older idno: "<<endl<<e[j].idnumber<<endl;
			cout<<"Enter new idno: "<<endl;
			cin>>e[j].idnumber;
			cout<<endl;
			break;
		case 3:
			cout<<"Older salary: "<<endl<<e[j].salary<<endl;
			cout<<"Enter new salary: "<<endl;
			cin>>e[j].salary;
			cout<<endl;
			break;
	}
	cout<<"\nDetails Updated"<<endl;
}
	cout<<"____________________________________________"<<endl;
}

void employee4(){
	int id,d;
	cout<<"____________________________________________"<<endl;
	cout<<"Enter idno of Employee you want to edit:  "<<endl;
	cin>>id;
	cout<<endl;
	for(int i=0;i<empsize;i++){
		if(id==e[i].idnumber)
		e[i].idnumber=e[i+1].idnumber;
		e[i].name=e[i+1].name;
		e[i].salary=e[i+1].salary;
	}
	cout<<"\nSuccessfully deleted\n"<<endl;
	empsize--;
	cout<<"____________________________________________"<<endl;
	
}

void visitor1(){
	cout<<"____________________________________________"<<endl;
	cout<<"Enter no of days: "<<endl;
	cin>>visize;
	cout<<endl;
	totaldays+=visize;
	int count;
	days[visize];
	for(int i=0;i<visize;i++){
		int n;
		cout<<"Enter no visitors in day "<<i+1<<": ";
		cin>>n;
		totalvis+=n;
		days[i].count=n;
		days[i].ticket=n*250;
		totaltic+=days[i].ticket;
		
	}
	for(int i=0;i<visize;i++){
		cout<<"\n\nNo of visitors in day "<<i+1<<": "<<days[i].count<<endl;
		cout<<"Total sale of tickets in day "<<i+1<<": "<<days[i].ticket<<endl;
	}
	cout<<"____________________________________________"<<endl;		
}
void visitor2(){
	int day;
	cout<<"____________________________________________"<<endl;
	cout<<"Enter no of day: ";
	cin>>day;
	--day;
	cout<<"No of visitors  : "<<endl<<days[day].count<<endl;
	cout<<"Sale of tickets : "<<endl<<days[day].ticket<<endl;
	cout<<"____________________________________________"<<endl;
}

void section(){
		int n1,n2;
		cout<<"____________________________________________"<<endl;
char ch;
for(int i=0;i<5;i++){
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl<<endl;
	cout<<"1=Statues"<<endl<<"2= Scientist"<<endl<<"3=Civilization"<<endl<<"4=Historian"<<endl<<endl;
	cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl<<endl;
cout<<"Enter 1 to 4 for Selection of Sections=";
	cin>>n1;
	if(n1==1){
		cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl<<endl;
		cout<<"1=Quaid-E-Azam"<<endl<<"2=Allama Iqbal"<<endl<<"3=Al khwarizmi"<<endl;
		cout<<"4=Liaqat Ali Khan"<<endl<<"5=Indus Valley culture"<<endl<<endl;
		cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl<<endl;
		cin>>n2;
		if(n2==1){
			cout<<"Quaid Cloths"<<endl<<"car"<<endl<<"Accesories"<<endl;
		}
		if(n2==2){
			cout<<"Allama Iqbal Cloths"<<endl<<"car"<<endl<<"Accesories"<<endl;
		}
		if(n2==3){
			cout<<"Khwarizmi Cloths"<<endl<<"Living"<<endl<<"Accesories"<<endl;
		}
		if(n2==4){
		cout<<"Liaqat ali Khan Cloths"<<endl<<"car"<<endl<<"Accesories"<<endl;
		}
		if(n2==5){
			cout<<"Indus civilization Cloths"<<endl<<"Weapons"<<endl<<"Accesories"<<endl;
		}
		cout<<"Do You want to continue Press 'c' and Stop Press'b'"<<endl;
		cin>>ch;
		cout<<endl;
		if(ch=='c'||ch=='C'){
		continue;}
		if(ch=='b'||ch=='B'){
			break;
		}
	}
		if(n1==2){
		cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl<<endl;
		cout<<"1=Jaber Bin Khayan"<<endl<<"2=Al Beruni"<<endl;
		cout<<"3=Al KHawarzmi"<<endl<<"4=Al Farabi\n5=Umar-Al-Hayam"<<endl<<endl;
		cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl<<endl;
		cin>>n2;
		if(n2==1){
		cout<<"Sample of Jabar bin khayan Cloths"<<endl<<"history and statues"<<endl<<"sample of his books"<<endl;
		}
		if(n2==2){
			cout<<"Sample of Beruni Cloths"<<endl<<"history and statues"<<endl<<"sample of his books"<<endl;
		}
		if(n2==3){
		cout<<"Sample of Khwarizmi Cloths"<<endl<<"history and statues"<<endl<<"sample of his books"<<endl;
		}
		if(n2==4){
			cout<<"Sample of frabi Cloths"<<endl<<"history and statues"<<endl<<"sample of his books"<<endl;
		}
		if(n2==5){
		cout<<"Sample of Umar al khayam Cloths"<<endl<<"history and statues"<<endl<<"sample of his books"<<endl;
		}
		cout<<"Do You want to continue Press 'c' and Stop Press'b'\n";
			cin>>ch;
		if(ch=='c'||ch=='C'){
		continue;}
		if(ch=='b'||ch=='B'){
			break;
		}
	}
		if(n1==3){
		cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl<<endl;
		cout<<"1=Indus Valli"<<endl<<"2=Ancient Egpyt"<<endl<<"3=Ancient China 2100 – 221 BC"<<endl<<"4= Inca Civilization 1200 – 1542 AD"<<endl<<"5=Ancient Greece 800 BC – 146 BC"<<endl<<endl;
		cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl<<endl;
		cin>>n2;
		cout<<endl;
		if(n2==1){
			cout<<"Cloths of that time"<<endl<<"architecture"<<endl<<"Different Equipments"<<endl;
		}
		if(n2==2){
			cout<<"Cloths of that time"<<endl<<"architecture"<<endl<<"Different Equipments"<<endl;
		}
		if(n2==3){
			cout<<"Cloths of that time"<<endl<<"architecture"<<endl<<"Different Equipments"<<endl;
		}
		if(n2==4){
			cout<<"Cloths of that time"<<endl<<"architecture"<<endl<<"Different Equipments"<<endl;
		}
		if(n2==5){
		cout<<"Cloths of that time"<<endl<<"architecture"<<endl<<"Different Equipments"<<endl;
		}
		cout<<"Do You want to continue Press 'c' and Stop Press'b'\n";
			cin>>ch;
		if(ch=='c'||ch=='C'){
		continue;}
		if(ch=='b'||ch=='B'){
			break;
		}
	}
		if(n1==4){
			cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl<<endl;
		cout<<"1=Arif Hassan:"<<endl<<"2=Yasmeen Lari"<<endl<<"3=Henry Adams"<<endl<<endl;
		cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl<<endl;
				cin>>n2;
			if(n2==1){
			cout<<"Participatory Development"<<endl<<"The Scale and Causes of Urban Change in Pakistan"<<endl;
			cout<<"Planning and Development Options for Karachi:"<<endl;
			}
		}
		if(n2==2){
				cout<<"Traditional Architecture of Thatta"<<endl;
				cout<<"The Dual City: Karachi During the Raj:"<<endl<<"The Jewel of Sindh: Samma Tombs on the Makli Hill:"<<endl;
		}
		if(n2==3){
				cout<<"Essays in Anglo-Saxon Law"<<endl;
				cout<<"History of the United States During the Administrations of Thomas Jefferson and James Madison (8 volumes)"<<endl;
				cout<<"The Life of George Cabot Lodge"<<endl;
		}
			cout<<"Do You want to continue Press 'c' and Stop Press'b'\n";
				cin>>ch;
		if(ch=='c'||ch=='C'){
		continue;}
		if(ch=='b'||ch=='B'){
			break;
		}
		if(n1==5){
		cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl<<endl;
	cout<<"1=Quaid-E-Azam"<<endl<<"2=Allama Iqbal"<<endl;
	cout<<"3=Sir Syed Ahmad Khan"<<endl<<"4=Liaqat Ali Khan"<<endl;
	cout<<"5=Ch Rehmat Ali Khan"<<endl<<endl;
		cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl<<endl;
		cin>>n2;
		if(n2==1){
		cout<<"Sample of Quaid Cloths"<<endl<<"history and statues"<<endl<<"sample of his letters and books"<<endl;
		}
		if(n2==2){
		cout<<"Sample of Allama Iqbal Cloths"<<endl<<"history and statues"<<endl<<"sample of his letters and books"<<endl;
		}
		if(n2==3){
			cout<<"Sample of sir syed Cloths"<<endl<<"history and statues"<<endl<<"sample of his letters and books"<<endl;
		}
		if(n2==4){
		cout<<"Sample of liaqat Cloths"<<endl<<"history and statues"<<endl<<"sample of his letters and books"<<endl;
		}
		if(n2==5){
			cout<<"Sample of Rehmat Cloths"<<endl<<"history and statues"<<endl<<"sample of his letters and books"<<endl;
		}
		cout<<"Do You want to continue Press 'c' and Stop Press'b'\n";
			cin>>ch;
		if(ch=='c'||ch=='C'){
		continue;}
		if(ch=='b'||ch=='B'){
			break;
		}
	}
}
cout<<"____________________________________________"<<endl;
}
