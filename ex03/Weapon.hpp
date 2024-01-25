#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class	Weapon {
	private:
		std::string	m_type;

	public:
		Weapon(std::string m_type);
		~Weapon();

		void	setType(std::string m_type);

		const std::string&	getType(void) const;

}

#endif
