#include "Zombie.hpp"

int main(void)
{
	Zombie	*heap;

	heap = newZombie("Heapie");
	heap->announce();
	randomChump("Stackie");

	delete heap;
	return 0;
}
