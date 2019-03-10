#include <iostream>

enum Ausruestung {
	health_potion,
	torches,
	arrows,
	max_items, //zahl 3
};

int countTotalItems(int *array)
{
	int totalItems{ 0 };
	for (int i = 0; i < max_items; i++)
	{
		totalItems += array[i];
	}
	return totalItems;
}

int main()
{
	int array[max_items]{ 2,5,10 };
	std::cout << "Der Spieler hat insgesamt " << countTotalItems(array) << " Gegenstaende.";
	return 0;
}


/*1) Pretend you’re writing a game where the player can hold 3
types of items: health potions, torches, and arrows.
Create an enum to identify the different types of items,

and a fixed array to store the number of each item the player
is carrying (use built-in fixed arrays, not std::array).
The player should start with 2 health potions, 5 torches,
and 10 arrows. Write a function called countTotalItems() that
returns how many items the player has in total. Have your main()
function print the output of countTotalItems().
*/
