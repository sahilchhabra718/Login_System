#include<iostream>
#include<string>
#include<fstream>


using namespace std;

bool IsLoggedIn(){
	string username,password,un,pw;
	cout<<"Enter your username: ";
	cin>>username;
	cout<<"Enter your password: ";
	cin>>password;
	
	ifstream read;
	//read.open(username.c_str());			//this searches file(not a txt file) with username as its name
	read.open((username + ".txt").c_str());			//it searches for just text files
	read>>un;
	read>>pw;
	if((un == username) && (pw == password)){
		return true;
	}
	else{
		return false;
	}
}

void reg(){
	string un,pw;
		cout<<"Enter your username: ";
		cin>>un;
		cout<<"Enter your password: ";
		cin>>pw;
		ofstream write;
		//write.open(un.c_str());				//this adds a new file(not a txt file) with username as its name
		write.open((un + ".txt").c_str());			//this creates files with .txt extension
		write<<un<<" "<<pw;
		cout<<"Registration Complete!"<<endl;
}

int main(){
	while(1>0){
		int i;
		cout<<"1.Register"<<endl<<"2.Login";
		cout<<endl<<"Your Choice: ";
		cin>>i;
		if(i!=2){
			reg();
		}
		else{
			break;
		}
	}
	bool hmm;
	hmm = IsLoggedIn();
	if(hmm == false){
		cout<<"No such account exist";
	}
	else{
		cout<<"Successfully logged in";
	}
	return 0;
}















