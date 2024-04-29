/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:13:16 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/16 18:08:19 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"


int main(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << std::endl << "Le premier element de la pile est : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "La taille de la pile est de : " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "La taille de la pile est maintenant de : " << mstack.size() << std::endl;
	std::cout << "Les elements de la pile sont :" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	s.push(5);
	s.push(17);
	std::cout << std::endl << "Le premier element de la pile est : " << s.top() << std::endl;
	s.pop();
	std::cout << "La taille de la pile est de : " << s.size() << std::endl;
	s.push(3);
	s.push(5);
	s.push(737);
	s.push(0);
	std::cout << "La taille de la pile est maintenant de : " << s.size() << std::endl;
	std::cout << "Les elements de la pile sont :" << std::endl;
	int size = s.size();
	for (int i = 0; i < size; i++)
	{
		std::cout << s.top() << std::endl;
		s.pop();
	}
	std::list<int> l;
	l.push_front(5);
	l.push_front(17);
	std::cout << std::endl << "Le premier element de la liste est : " << l.front() << std::endl;
	l.pop_front();
	std::cout << "La taille de la liste est de : " << l.size() << std::endl;
	l.push_back(3);
	l.push_back(5);
	l.push_back(737);
	l.push_back(0);
	std::list<int>::iterator itl = l.begin();
	std::list<int>::iterator itle = l.end();
	++itl;
	--itl;
	std::cout << "La taille de la liste est maintenant de : " << l.size() << std::endl;
	std::cout << "Les elements presents dans la liste sont :" << std::endl;
	while (itl != itle)
	{
		std::cout << *itl << std::endl;
		++itl;
	}
	return 0;
}
