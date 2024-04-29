#include<iostream>
#include<string.h>
using namespace std;

int Cargo;

int lCargo(char origin[30], char destination[30]){
	
if((strcmp(origin,"CHENNAI")==0)||(strcmp(origin,"HYDERABAD")==0)&&(strcmp(destination,"CHENNAI")==0)||(strcmp(destination,"HYDERABAD")==0))
	return Cargo=5234;
else if((strcmp(origin,"CHENNAI")==0)||(strcmp(origin,"KOLKATA")==0)&&(strcmp(destination,"CHENNAI")==0)||(strcmp(destination,"KOLKATA")==0))
	return Cargo=7500;
else if((strcmp(origin,"CHENNAI")==0)||(strcmp(origin,"DELHI")==0)&&(strcmp(destination,"KARACHI")==0)||(strcmp(destination,"DELHI")==0))
	return Cargo=9000;
else if((strcmp(origin,"CHENNAI")==0)||(strcmp(origin,"MUMBAI")==0)&&(strcmp(destination,"KARACHI")==0)||(strcmp(destination,"MUMBAI")==0))
	return Cargo=6500;
else if((strcmp(origin,"HYDERABAD")==0)||(strcmp(origin,"VIJAYAWADA")==0)&&(strcmp(destination,"HYDERABAD")==0)||(strcmp(destination,"VIJAYAWADA")==0))
	Cargo=2500;
else if((strcmp(origin,"HYDERABAD")==0)||(strcmp(origin,"DELHI")==0)&&(strcmp(destination,"HYDERABAD")==0)||(strcmp(destination,"DELHI")==0))
	return Cargo=6000;
else if((strcmp(origin,"MUMBAI")==0)||(strcmp(origin,"DELHI")==0)&&(strcmp(destination,"MUMBAI")==0)||(strcmp(destination,"DELHI")==0))
	return Cargo=8000;
else if((strcmp(origin,"MUMBAI")==0)||(strcmp(origin,"KOLKATA")==0)&&(strcmp(destination,"MUMBAI")==0)||(strcmp(destination,"KOLKATA")==0))
	return Cargo=8000;
else if((strcmp(origin,"MUMBAI")==0)||(strcmp(origin,"HYDERABAD")==0)&&(strcmp(destination,"MUMBAI")==0)||(strcmp(destination,"HYDERABAD")==0))
	return Cargo=5000;
}

int iCargo(char origin[30], char destination[30]){
	
if((strcmp(origin,"LONDON")==0)||(strcmp(origin,"BERLIN")==0)&&(strcmp(destination,"LONDON")==0)||(strcmp(destination,"BERLIN")==0))
	        return Cargo=20000;
else if((strcmp(origin,"LONDON")==0)||(strcmp(origin,"DUBAI")==0)&&(strcmp(destination,"LONDON")==0)||(strcmp(destination,"DUBAI")==0))
	        return Cargo=25000;
else if((strcmp(origin,"LONDON")==0)||(strcmp(origin,"RIYADH")==0)&&(strcmp(destination,"LONDON")==0)||(strcmp(destination,"RIYADH")==0))
	        return Cargo=18000;
else if((strcmp(origin,"LONDON")==0)||(strcmp(origin,"BEIJING")==0)&&(strcmp(destination,"LONDON")==0)||(strcmp(destination,"BEIJING")==0))
	        return Cargo=25000;
else if((strcmp(origin,"LONDON")==0)||(strcmp(origin,"PARIS")==0)&&(strcmp(destination,"LONDON")==0)||(strcmp(destination,"PARIS")==0))
	        return Cargo=10000;
else if((strcmp(origin,"LONDON")==0)||(strcmp(origin,"CANBERRA")==0)&&(strcmp(destination,"LONDON")==0)||(strcmp(destination,"CANBERRA")==0))
	        return Cargo=15000;
else if((strcmp(origin,"LONDON")==0)||(strcmp(origin,"TOKYO")==0)&&(strcmp(destination,"LONDON")==0)||(strcmp(destination,"TOKYO")==0))
	        return Cargo=48095;
else if((strcmp(origin,"LONDON")==0)||(strcmp(origin,"WASHINGTON")==0)&&(strcmp(destination,"LONDON")==0)||(strcmp(destination,"WASHINGTON")==0))
	        return Cargo=65001;
else if((strcmp(origin,"LONDON")==0)||(strcmp(origin,"DELHI")==0)&&(strcmp(destination,"LONDON")==0)||(strcmp(destination,"DELHI")==0))
	        return Cargo=51231;
else if((strcmp(origin,"LONDON")==0)||(strcmp(origin,"ISLAMABAD")==0)&&(strcmp(destination,"LONDON")==0)||(strcmp(destination,"ISLAMABAD")==0))
	        return Cargo=45000;
else if((strcmp(origin,"BERLIN")==0)||(strcmp(origin,"DUBAI")==0)&&(strcmp(destination,"BERLIN")==0)||(strcmp(destination,"DUBAI")==0))
	        return Cargo=60000;
else if((strcmp(origin,"BERLIN")==0)||(strcmp(origin,"RIYADH")==0)&&(strcmp(destination,"BERLIN")==0)||(strcmp(destination,"RIYADH")==0))
	        return Cargo=45300;
else if((strcmp(origin,"BERLIN")==0)||(strcmp(origin,"BEIJING")==0)&&(strcmp(destination,"BERLIN")==0)||(strcmp(destination,"BEIJING")==0))
	        return Cargo=62527;
else if((strcmp(origin,"BERLIN")==0)||(strcmp(origin,"PARIS")==0)&&(strcmp(destination,"BERLIN")==0)||(strcmp(destination,"PARIS")==0))
	        return Cargo=7890;
else if((strcmp(origin,"BERLIN")==0)||(strcmp(origin,"CANBERRA")==0)&&(strcmp(destination,"BERLIN")==0)||(strcmp(destination,"CANBERRA")==0))
	        return Cargo=157902;
else if((strcmp(origin,"BERLIN")==0)||(strcmp(origin,"TOKYO")==0)&&(strcmp(destination,"BERLIN")==0)||(strcmp(destination,"TOKYO")==0))
	        return Cargo=66270;
else if((strcmp(origin,"BERLIN")==0)||(strcmp(origin,"WASHINGTON")==0)&&(strcmp(destination,"BERLIN")==0)||(strcmp(destination,"WASHINGTON")==0))
	        return Cargo=131334;
else if((strcmp(origin,"BERLIN")==0)||(strcmp(origin,"DELHI")==0)&&(strcmp(destination,"BERLIN")==0)||(strcmp(destination,"DELHI")==0))
	        return Cargo=36307;
else if((strcmp(origin,"BERLIN")==0)||(strcmp(origin,"ISLAMABAD")==0)&&(strcmp(destination,"BERLIN")==0)||(strcmp(destination,"ISLAMABAD")==0))
	        return Cargo=32996;
else if((strcmp(origin,"DUBAI")==0)||(strcmp(origin,"RIYADH")==0)&&(strcmp(destination,"DUBAI")==0)||(strcmp(destination,"RIYADH")==0))
	        return Cargo=16354;
else if((strcmp(origin,"DUBAI")==0)||(strcmp(origin,"BEIJING")==0)&&(strcmp(destination,"DUBAI")==0)||(strcmp(destination,"BEIJING")==0))
	        return Cargo=40225;
else if((strcmp(origin,"DUBAI")==0)||(strcmp(origin,"PARIS")==0)&&(strcmp(destination,"DUBAI")==0)||(strcmp(destination,"PARIS")==0))
	        return Cargo=26104;
else if((strcmp(origin,"DUBAI")==0)||(strcmp(origin,"CANBERRA")==0)&&(strcmp(destination,"DUBAI")==0)||(strcmp(destination,"CANBERRA")==0))
	        return Cargo=187259;
else if((strcmp(origin,"DUBAI")==0)||(strcmp(origin,"TOKYO")==0)&&(strcmp(destination,"DUBAI")==0)||(strcmp(destination,"TOKYO")==0))
	        return Cargo=67242;
else if((strcmp(origin,"DUBAI")==0)||(strcmp(origin,"WASHINGTON")==0)&&(strcmp(destination,"DUBAI")==0)||(strcmp(destination,"WASHINGTON")==0))
	        return Cargo=78149;
else if((strcmp(origin,"DUBAI")==0)||(strcmp(origin,"DELHI")==0)&&(strcmp(destination,"DUBAI")==0)||(strcmp(destination,"DELHI")==0))
	        return Cargo=52700;
else if((strcmp(origin,"DUBAI")==0)||(strcmp(origin,"ISLAMABAD")==0)&&(strcmp(destination,"DUBAI")==0)||(strcmp(destination,"ISLAMABAD")==0))
	        return Cargo=14939;
else if((strcmp(origin,"RIYADH")==0)||(strcmp(origin,"BEIJING")==0)&&(strcmp(destination,"RIYADH")==0)||(strcmp(destination,"BEIJING")==0))
	        return Cargo=92061;
else if((strcmp(origin,"RIYADH")==0)||(strcmp(origin,"PARIS")==0)&&(strcmp(destination,"RIYADH")==0)||(strcmp(destination,"PARIS")==0))
	        return Cargo=51282;
else if((strcmp(origin,"RIYADH")==0)||(strcmp(origin,"CANBERRA")==0)&&(strcmp(destination,"RIYADH")==0)||(strcmp(destination,"CANBERRA")==0))
	        return Cargo=156525;
else if((strcmp(origin,"RIYADH")==0)||(strcmp(origin,"TOKYO")==0)&&(strcmp(destination,"RIYADH")==0)||(strcmp(destination,"TOKYO")==0))
	        return Cargo=110079;
else if((strcmp(origin,"RIYADH")==0)||(strcmp(origin,"WASHINGTON")==0)&&(strcmp(destination,"RIYADH")==0)||(strcmp(destination,"WASHINGTON")==0))
	        return Cargo=86516;
else if((strcmp(origin,"RIYADH")==0)||(strcmp(origin,"DELHI")==0)&&(strcmp(destination,"RIYADH")==0)||(strcmp(destination,"DELHI")==0))
	        return Cargo=723;
else if((strcmp(origin,"RIYADH")==0)||(strcmp(origin,"ISLAMABAD")==0)&&(strcmp(destination,"RIYADH")==0)||(strcmp(destination,"ISLAMABAD")==0))
	        return Cargo=40312;
else if((strcmp(origin,"BEIJING")==0)||(strcmp(origin,"PARIS")==0)&&(strcmp(destination,"BEIJING")==0)||(strcmp(destination,"PARIS")==0))
	        return Cargo=31748;
else if((strcmp(origin,"BEIJING")==0)||(strcmp(origin,"CANBERRA")==0)&&(strcmp(destination,"BEIJING")==0)||(strcmp(destination,"CANBERRA")==0))
	        return Cargo=86516;
else if((strcmp(origin,"BEIJING")==0)||(strcmp(origin,"TOKYO")==0)&&(strcmp(destination,"BEIJING")==0)||(strcmp(destination,"TOKYO")==0))
	        return Cargo=32342;
else if((strcmp(origin,"BEIJING")==0)||(strcmp(origin,"WASHINGTON")==0)&&(strcmp(destination,"BEIJING")==0)||(strcmp(destination,"WASHINGTON")==0))
	        return Cargo=82127;
else if((strcmp(origin,"BEIJING")==0)||(strcmp(origin,"DELHI")==0)&&(strcmp(destination,"BEIJING")==0)||(strcmp(destination,"DELHI")==0))
	        return Cargo=46897;
else if((strcmp(origin,"BEIJING")==0)||(strcmp(origin,"ISLAMABAD")==0)&&(strcmp(destination,"BEIJING")==0)||(strcmp(destination,"ISLAMABAD")==0))
	        return Cargo=73810;
else if((strcmp(origin,"PARIS")==0)||(strcmp(origin,"CANBERRA")==0)&&(strcmp(destination,"PARIS")==0)||(strcmp(destination,"CANBERRA")==0))
	        return Cargo=151674;
else if((strcmp(origin,"PARIS")==0)||(strcmp(origin,"TOKYO")==0)&&(strcmp(destination,"PARIS")==0)||(strcmp(destination,"TOKYO")==0))
	        return Cargo=39790;
else if((strcmp(origin,"PARIS")==0)||(strcmp(origin,"WASHINGTON")==0)&&(strcmp(destination,"PARIS")==0)||(strcmp(destination,"WASHINGTON")==0))
	        return Cargo=53712;
else if((strcmp(origin,"PARIS")==0)||(strcmp(origin,"DELHI")==0)&&(strcmp(destination,"PARIS")==0)||(strcmp(destination,"DELHI")==0))
	        return Cargo=35492;
else if((strcmp(origin,"PARIS")==0)||(strcmp(origin,"ISLAMABAD")==0)&&(strcmp(destination,"PARIS")==0)||(strcmp(destination,"ISLAMABAD")==0))
	        return Cargo=64964;
else if((strcmp(origin,"CANBERRA")==0)||(strcmp(origin,"TOKYO")==0)&&(strcmp(destination,"CANBERRA")==0)||(strcmp(destination,"TOKYO")==0))
	        return Cargo=91714;
else if((strcmp(origin,"CANBERRA")==0)||(strcmp(origin,"WASHINGTON")==0)&&(strcmp(destination,"CANBERRA")==0)||(strcmp(destination,"WASHINGTON")==0))
	        return Cargo=159865;
else if((strcmp(origin,"CANBERRA")==0)||(strcmp(origin,"DELHI")==0)&&(strcmp(destination,"CANBERRA")==0)||(strcmp(destination,"DELHI")==0))
	        return Cargo=113777;
else if((strcmp(origin,"CANBERRA")==0)||(strcmp(origin,"ISLAMABAD")==0)&&(strcmp(destination,"CANBERRA")==0)||(strcmp(destination,"ISLAMABAD")==0))
	        return Cargo=140229;
else if((strcmp(origin,"TOKYO")==0)||(strcmp(origin,"WASHINGTON")==0)&&(strcmp(destination,"TOKYO")==0)||(strcmp(destination,"WASHINGTON")==0))
	        return Cargo=74734;
else if((strcmp(origin,"TOKYO")==0)||(strcmp(origin,"DELHI")==0)&&(strcmp(destination,"TOKYO")==0)||(strcmp(destination,"DELHI")==0))
	        return Cargo=30199;
else if((strcmp(origin,"TOKYO")==0)||(strcmp(origin,"ISLAMABAD")==0)&&(strcmp(destination,"TOKYO")==0)||(strcmp(destination,"ISLAMABAD")==0))
	        return Cargo=124022;
else if((strcmp(origin,"WASHINGTON")==0)||(strcmp(origin,"DELHI")==0)&&(strcmp(destination,"WASHINGTON")==0)||(strcmp(destination,"DELHI")==0))
	        return Cargo=63761;
else if((strcmp(origin,"WASHINGTON")==0)||(strcmp(origin,"ISLAMABAD")==0)&&(strcmp(destination,"WASHINGTON")==0)||(strcmp(destination,"ISLAMABAD")==0))
	        return Cargo=103989;
else if((strcmp(origin,"DELHI")==0)||(strcmp(origin,"ISLAMABAD")==0)&&(strcmp(destination,"DELHI")==0)||(strcmp(destination,"ISLAMABAD")==0))
	        return Cargo=36096;
}

