#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
	int N = 5;
	std::string zombieName = "Oscar";

	Zombie *horde = zombieHorde(N, zombieName);

	for (int i = 0; i < N; ++i)
		horde[i].announce();

	delete[] horde;
	return 0;
}
