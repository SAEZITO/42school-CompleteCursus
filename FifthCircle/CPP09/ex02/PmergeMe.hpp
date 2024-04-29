/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 08:59:35 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/23 09:00:39 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
#include <sys/time.h>

class PmergeMe
{

	private:

		PmergeMe(const PmergeMe & ref);
		PmergeMe & operator=(const PmergeMe & ref);

	public:

		PmergeMe();
		~PmergeMe();

		long long int	getCurrentTimeMicros();

		void			mergeSort(std::vector<int> & vec, std::list<int> & list);

		void			mergeSortVect(std::vector<int> & vec);
		void			mergeVect(std::vector<int>& vec, std::vector<int>& left, std::vector<int>& right);

		void			mergeLst(std::list<int>& vec, std::list<int>& left, std::list<int>& right);
		void 			mergeSortLst(std::list<int> & list);
};
