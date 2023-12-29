#include "Zombie.hpp"

Zombie::Zombie()
{
	this->m_name = "X";
}

Zombie::Zombie(std::string name)
{
	this->setname(name);
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << m_name << " died... Again..." << std::endl;

}

//GETTERS

std::string	Zombie::getname(void)
{
	return(m_name);
}

//SETTERS

void	Zombie::setname(std::string name)
{
	this->m_name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->m_name << ": BraiiiiiiinnnzzzZ...\n";
}
