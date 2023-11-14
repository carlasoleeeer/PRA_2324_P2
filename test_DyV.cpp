#include<vector>
#include <iostream>
#include "DyV.h"

int main(){
	std::vector<int> a{1,12,3,5};            
	std::vector<double> b{2.2,3.2,4.4,5.5};      
	std::vector<char> c{'c', 'f', 'a'};
	std::vector<int> d{36,12,5,2};
	std::vector <double>e{10.2,5.4,4.4,2.3};
	std::vector<char> f{'f','c','a'};
	std:: vector<int> g{12,6, 4,0};

	std::cout <<  "BusquedaBinaria Int: "<<BusquedaBinaria (12,a,0,3)<<"\n";
	std::cout << "BusquedaBinaria Double: "<< BusquedaBinaria(4.4,b,0,3)<<"\n";
	std::cout << "BusquedaBinaria Char: "<< BusquedaBinaria('a',c,0,2)<<"\n";
	std::cout << "BusquedaBinariaINV int: "<<BusquedaBinariaINV(5,d,0,3)<<"\n";
	std::cout << "BusquedaBinariaINV Double: " << BusquedaBinariaINV(4.4,e,0,3)<<"\n";
	std::cout << "BusquedaBinariaINV Char: " <<BusquedaBinariaINV ('c',f,0,2)<<"\n";

	QuickSort(g, 0, 3);

	for(int i = 0; i < 4; i++){
		std::cout<<g[i]<<" ";
	}

		std::cout<<std::endl;
}
