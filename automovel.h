std::ostream& operator<< (std::ostream &o, Empresa &empresa){
	for (std::vector<Funcionario*>::iterator i = empresa.lista_funcionarios.begin(); i != empresa.lista_funcionarios.end(); ++i)
	{
		o << (**i) << std::endl;
	}
	return o;
}

bool Empresa::operator==(const Empresa &empr) const{
	if (this->nome == empr.nome){
		return true;
	} else {
		return false;
	}
}
