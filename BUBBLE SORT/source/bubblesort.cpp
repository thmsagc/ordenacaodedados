#include "bubblesort.h"

int main(int argc, char **argv){
	if(!argc == 2){
		puts("Execute informando o nome da instância.\nEx: bubblesort v10.txt");
	}

	string inst = argv[1];
	ifstream arq(inst, ios::in);
	int num_elementos;
	arq >> num_elementos;
	vector<int> result(num_elementos);
	for(int i = 0; i < result.size(); i++)
		arq >> vetor[i];
	bubble(result);
	return 0;	
}

void bubble(vector<int> &vetor){
	for(int i = 0; i < vetor.size(); i++){
		for(int j = i+1; j < vetor.size(); j++){
			if(vetor[i] < vetor[j])
				swap(vetor[i], vetor[j]);
		}
	}
}
