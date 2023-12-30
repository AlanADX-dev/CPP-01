#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::Zombie(std::string name) : m_name(name)
{

}

Zombie::~Zombie()
{

}

void Zombie::announce() const
{
	std::cout << this->m_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
