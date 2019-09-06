#include <iostream>
#include <string>


class automovel{
	private: 
	string marca; 
	float preco; 
	string chassi; 
	int fab_data;
	int fab_dia;
	int fab_mes;

	public: 
	string getMarca(); 
	string setMarca(string m); 
	float getPreco(); 
	float setPreco(float p);
	string getChassi(); 
	string setChassi(string s);
	int getFab_data(); 
	int setFab_data(int fd);
	int getFab_dia(); 
	int setFab_dia(int fdi);
	int getFab_mes(); 
	int setFab_mes(int fmes);
}


