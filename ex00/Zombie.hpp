#ifndef ZOMBIE_HPP
# define ZOMBIE__HPP

#include <iostream>
#include <string>
#include <cstring>


class Zombie {

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void			setname(std::string name);
		void			announce(void);
		std::string		getname(void);


	private:
		std::string m_name;

};

	Zombie*			newZombie(std::string name);
	void			randomChump(std::string name);

#endif
