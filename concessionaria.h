#include <iostream>
#include <string>


class concessionaria{
	private: 
	string nome; 
	int cnpj; 
	int num_estoque; 
	
	public: 
	string getNome(); 
	string setNome(string m);
	int getCnpj(); 
	int setCnpj(int c);
	int getNum_estoque(); 
	int setNum_estoque(int n);
