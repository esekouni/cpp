/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:39:25 by esekouni          #+#    #+#             */
/*   Updated: 2023/12/21 20:45:28 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int nbrCmp_V = 0;

std::string	get_line(char **av)
{
	std::string line;
	int i = 1;
	while (av[i])
	{
		std::string str(av[i]);
		if (!av[i + 1])
			line = line + str;
		else
			line = line + str + " ";
		i++;	
	}
	return (line);
}

int check_line(std::string line)
{
	unsigned long i = 0;

	while (i < line.length())
	{
		if (line[i] != ' ' && !isdigit(line[i]))
			return (0);
		i++;
	}
	return (1);
}

std::vector<int>	store_vector(std::string line)
{
	std::vector<int> v;
	
	double c;
	char *endp;
	unsigned long i = 0;
	std::string tmp;

	while (i < line.length())
	{
		while (line[i] == ' ')
			i++;
		while (i < line.length() && isdigit(line[i]))
		{
			tmp.push_back(line[i]);
			i++;
		}
		c = std::strtod(tmp.c_str(), &endp);
		if (c > 2147483647)
		{
			std::cout << "Error" << std::endl;
			exit(1);
		}
		v.push_back(c);
		tmp.clear();
	}
	return (v);
}

void	vectorOfPairsToSipmleVector(std::vector<int>& vec, std::vector<std::pair<std::vector<int> , std::vector<int > > >& vectorOfPairs)
{
	std::vector<std::pair<std::vector<int> , std::vector<int > > >::iterator ite = vectorOfPairs.begin();
	std::vector<int>::iterator it;
	vec.clear();
	while(ite != vectorOfPairs.end())
	{
		it = ite->first.begin();
		while (it != ite->first.end())
		{
			vec.push_back(*it);
			it++;
		}
		it = ite->second.begin();
		while (it != ite->second.end())
		{
			vec.push_back(*it);
			it++;
		}
		ite++;
	}
}

void	vectorOfVectorToSipmleVector(std::vector<int>& vec, std::vector<std::vector<int> > reverce)
{
	std::vector<std::vector<int> >::iterator ite = reverce.begin();
	std::vector<int>::iterator it;
	vec.clear();
	while(ite != reverce.end())
	{
		it = ite->begin();
		while (it != ite->end())
		{
			vec.push_back(*it);
			it++;
		}
		ite++;
	}
}

bool	cmp_num(std::vector<int> vec1, std::vector<int> vec2)
{
	nbrCmp_V++;
	if (vec1.back() <= vec2.back())
		return 1;
	return (0);
}

int Jacobsthal(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return Jacobsthal(n - 1) + 2 * Jacobsthal(n - 2);
}


std::vector<int>	jacob_vector(int N)
{
	std::vector<int> jacob;

	int i = 2;
	double tmp;

	while (i < N)
	{
		tmp = Jacobsthal(i);
		i++;
		if (tmp > 2147483647)
			break;
		jacob.push_back(tmp);
	}

	return (jacob);
}

void	vector_to_vectorofpair_not_sorted(std::vector<int> &ve, std::vector<std::pair<std::vector<int> , std::vector<int> > > &vectorOfPairs, int *i, std::vector<int> &rest)
{
	std::vector<int>::iterator it =ve.begin();
	
	it = ve.begin();
	while (it != ve.end())
	{
		std::pair<std::vector<int> , std::vector<int > > pair;
		int j = 0;
		while (j < *i && it != ve.end())
		{
			pair.first.push_back(*it);
			it++;
			j++;
		}
		j = 0;
		while (j < *i && it != ve.end())
		{
			pair.second.push_back(*it);
			it++;
			j++;
		}
		if (pair.first.size() == pair.second.size())
		{
			if (pair.first.back() < pair.second.back())
				vectorOfPairs.push_back(std::make_pair(pair.first, pair.second));
			else
				vectorOfPairs.push_back(std::make_pair(pair.second, pair.first));
			nbrCmp_V++;
		}
		else
			rest = pair.first;
	}
}

void	vector_to_vectorofpair_sorted(std::vector<int> &ve, std::vector<std::pair<std::vector<int> , std::vector<int> > > &vectorOfPairs, int *i, std::vector<int> &rest)
{
	std::vector<int>::iterator it =ve.begin();
	
	it = ve.begin();
	while (it != ve.end())
	{
		std::pair<std::vector<int> , std::vector<int > > pair;
		int j = 0;
		while (j < *i && it != ve.end())
		{
			pair.first.push_back(*it);
			it++;
			j++;
		}
		j = 0;
		while (j < *i && it != ve.end())
		{
			pair.second.push_back(*it);
			it++;
			j++;
		}
		if (pair.first.size() == pair.second.size())
				vectorOfPairs.push_back(std::make_pair(pair.first, pair.second));
		else
			rest = pair.first;
	}
}

void	sort_vector(std::vector<int> &ve, int *i)
{
	std::vector<std::pair<std::vector<int> , std::vector<int > > > vectorOfPairs;
	std::vector<int> rest;

	vector_to_vectorofpair_not_sorted(ve, vectorOfPairs, i, rest);
	vectorOfPairsToSipmleVector(ve, vectorOfPairs);
	if (vectorOfPairs.size() > 1)
	{
		*i = (*i) * 2;
		sort_vector(ve, i);
	}
	vectorOfPairs.clear();
	vector_to_vectorofpair_sorted(ve, vectorOfPairs, i, rest);
	std::vector<std::vector<int> > mai_chain;
	std::vector<std::vector<int> > pend;
	std::vector<std::pair<std::vector<int> , std::vector<int > > >::iterator it_er = vectorOfPairs.begin();
	while (it_er != vectorOfPairs.end())
	{
		pend.push_back(it_er->first);
		mai_chain.push_back(it_er->second);
		it_er++;
	}
	if (rest.size() > 0)
	pend.push_back(rest);
	mai_chain.insert(mai_chain.begin(), pend[0]);
	std::vector<int> jacobNumber = jacob_vector(20);
	int sv = 0;
	size_t sum = 0;
	for(size_t ks = 1; ks < pend.size(); ks++)
	{
		size_t j = jacobNumber[sv + 1] ;
		size_t l =  jacobNumber[sv] + 1;
		if (j > pend.size())
			j = pend.size();
		if (l > j)
			break;
		while (j >= l)
		{
			mai_chain.insert(std::lower_bound(mai_chain.begin(), mai_chain.begin() + (j + sum),pend[j - 1], cmp_num), pend[j - 1]);
			sum++;
			j--;
		}
		sv++;
	}
	*i = (*i) / 2;
	vectorOfVectorToSipmleVector(ve, mai_chain);
}

int	sort_vector(char **av)
{
	std::string line;
	clock_t start_vector = clock();
	line = get_line(av);
	if (check_line(line) == 0)
		return (0);
	std::vector<int> v;
	v = store_vector(line);
	std::cout << "Before : " ;
	std::vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
	int i = 1;
	sort_vector(v, &i);
	std::cout << "After : " ;
	it = v.begin();
	while (it != v.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
	clock_t end_vector = clock();
	double time= static_cast<double>(end_vector - start_vector) / CLOCKS_PER_SEC; 
	std::cout << "Time to process a range of " << v.size() << " elements with std::vector : " << time << " us" << std::endl;
	return (1);
}