#include <iostream>
#include <vector>
template <typename T>
int  BusquedaBinaria ( T X,std::vector<T>& V, int ini, int fin){
        if( ini > fin){
                std::cout<<"No se encuentra en el array"<<std::endl;
                return -1;
        }
        int medio = (ini + fin ) / 2;
        if (V[medio] == X){
                 return medio;
        }
         else {
                         if(V[medio] > X){
                 return BusquedaBinaria(X, V, ini, medio - 1);
                         }
                        else{
                return BusquedaBinaria(X, V, medio + 1, fin);
                        }
        }
}
template <typename T>
int BusquedaBinariaINV(T X ,std::vector<T>& V,int ini, int fin){
	if(ini > fin){
		std::cout <<"No se encuentra en el array"<<std::endl;
		return -1;
	 }
	int medio = (ini + fin)/2;
	if(V[medio] == X){
		return medio;
	}
	else{
		if(V[medio] > X){
			return BusquedaBinariaINV(X,V,medio+1,fin);
		}
		else{
			return BusquedaBinariaINV(X,V,ini,medio-1);
		}
	}
}
template <typename T>
int Partition(std::vector <T>&V,int ini,int fin){
	T x = V[fin];
	int i = ini;
	int j;
	for(  j =  ini; j< fin;j ++){
		if(V[j]<= x){
			std::swap(V[i],V[j]);
			i = i +1;
		}
	}
	std::swap (V[i],V[j]);
	return i;
	
}
template <typename T>
void QuickSort(std::vector <T>& V,int ini,int fin){
	if(ini < fin ){
		int pivot = Partition(V,ini,fin);
		QuickSort(V,ini,pivot-1);
		QuickSort(V,pivot+1,fin);
	}
}
