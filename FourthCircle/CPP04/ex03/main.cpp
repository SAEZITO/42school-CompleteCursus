/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:10:30 by alsaez            #+#    #+#             */
/*   Updated: 2023/10/31 17:00:59 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	{
		IMateriaSource* src = new MateriaSource();

		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");
		AMateria* tmp;

		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	{
		MateriaSource *spellBook = new MateriaSource();
		spellBook->learnMateria(new Ice());
		spellBook->learnMateria(new Cure());

		std::cout << "\n*** copying spellbook ***" << std::endl << std::endl;
		IMateriaSource *spellBookCopy = new MateriaSource(*spellBook);

		std::cout << "\n*** learn new spells ***" << std::endl << std::endl;
		spellBook->learnMateria(new Cure());
		spellBook->learnMateria(new Ice());
		spellBook->learnMateria(new Cure());
		spellBook->learnMateria(new Ice());

		std::cout << "\n*** learn new spells ***" << std::endl << std::endl;
		spellBookCopy->learnMateria(new Cure());
		spellBookCopy->learnMateria(new Cure());
		spellBookCopy->learnMateria(new Cure());
		delete spellBook;

		std::cout << "\n*** creating a new character ***" << std::endl << std::endl;
		AMateria *tmp;
		Character *testDummy = new Character("Test-Dummy");

		tmp = spellBookCopy->createMateria("cure");
		testDummy->equip(tmp);
		tmp = spellBookCopy->createMateria("ice");
		testDummy->equip(tmp);

		std::cout << "\n*** copy the a new character ***" << std::endl << std::endl;
		ICharacter *testDummyCopy = new Character(*testDummy);

		testDummyCopy->use(1, *testDummy);
		testDummyCopy->use(0, *testDummy);

		delete testDummyCopy;
		delete testDummy;

		std::cout << "\n*** creating a new character ***" << std::endl << std::endl;
		ICharacter *Gandalf = new Character("Gandalf");

		tmp = spellBookCopy->createMateria("ice");
		Gandalf->equip(tmp);
		tmp = spellBookCopy->createMateria("cure");
		Gandalf->equip(tmp);
		tmp = spellBookCopy->createMateria("ice");
		Gandalf->equip(tmp);
		tmp = spellBookCopy->createMateria("cure");
		Gandalf->equip(tmp);
		tmp = spellBookCopy->createMateria("ice");
		Gandalf->equip(tmp);
		tmp = spellBookCopy->createMateria("cure");
		Gandalf->equip(tmp);
		Gandalf->unequip(0);
		tmp = spellBookCopy->createMateria("ice");
		Gandalf->equip(tmp);
		tmp = spellBookCopy->createMateria("ice");
		Gandalf->equip(tmp);

		std::cout << "\n*** creating another new character ***" << std::endl << std::endl;
		ICharacter *Grima = new Character("Grima \"langue de serpent \"");
		Gandalf->use(0, *Grima);
		Gandalf->use(1, *Grima);
		Grima->use(0, *Gandalf);
		Grima->use(1, *Gandalf);

		std::cout << "\n*** destroying character Grima ***" << std::endl << std::endl;
		delete Grima;

		std::cout << "\n*** destroying character Gandalf ***" << std::endl << std::endl;
		delete Gandalf;

		std::cout << "\n*** destroying spellbook ***" << std::endl << std::endl;
		delete spellBookCopy;
	}
	return 0;
}
