// Rooms.cpp : définit le point d'entrée pour l'application console.
//

#include "stdafx.h"

#include <conio.h>

#include "LootCrate.h"

int main()
{
	int touche;
	std::vector<LootCrate*> lootList;


	for (int i = 0; i < 10; i++)
	{
		LootCrate *l = new LootCrate;
		lootList.push_back(l);
	}
	touche = 0;
	std::cout << static_cast<LootCrate*>(lootList[0])->contentDescription() << std::endl;
	//UP : 72, DOWN : 80, LEFT : 75, RIGHT : 77, enter : 13, return : 8
	do
	{
		if (_kbhit() != 0) /* Détecte une frappe de touche */
		{
			touche = _getch(); /* Lecture de la touche */
			if (touche == 0) /* Si une touche étendue (flêches ou autres) */
			{
				touche = _getch(); /* Lecture de la touche */
				printf("Code etendu : %d)\n", touche);
			}
			else /* Touche standard */
			{
				switch (touche)
				{
					case 72:
						std::cout << "UP" << std::endl;
						break;
					case 80:
						std::cout << "DOWN" << std::endl;
						break;
					case 75:
						std::cout << "LEFT" << std::endl;
						break;
					case 77:
						std::cout << "RIGHT" << std::endl;
						break;
					case 13:
						std::cout << "ENTER" << std::endl;
						break;
					case 8:
						std::cout << "RETURN" << std::endl;
						break;
				}
			}
		}
	} while (touche != 0x1B); /* Sortie si touche ESCAPE */

    return 0;
}