#include <iostream>

using namespace std;

class DFSdata{
public:
	bool visitado;
	int low;
	int num;
	int anterior;
	bool marcado;
	int label;
	
	DFSdata(){
		visitado = false;
		anterior = -1;
		marcado = false;
		low = -1;
		num = -1;
		label = -1;
	}
};

class MinimumData{
public:
	int d;
	int anterior;
	char cor;
	
	MinimumData(){
		d = 1000000000;
		anterior = -1;
		cor = 'B';
	}
};

class Coloracao{
public:
	int cor;
	
	Coloracao(){
		cor = 0;
	}
};


