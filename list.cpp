/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 17:25:01 by esekouni          #+#    #+#             */
/*   Updated: 2023/12/20 11:44:17 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int nbrCmp_list = 0;

std::string	get_line_list(char **av)
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

int check_line_list(std::string line)
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

std::list<int>	store_list(std::string line)
{
	std::list<int> v;
	
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

void	listOfPairsToSipmlelist(std::list<int>& vec, std::list<std::pair<std::list<int> , std::list<int > > >& listOfPairs)
{
	std::list<std::pair<std::list<int> , std::list<int > > >::iterator ite = listOfPairs.begin();
	std::list<int>::iterator it;
	vec.clear();
	while(ite != listOfPairs.end())
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

void	listOflistToSipmlelist(std::list<int>& vec, std::list<std::list<int> > reverce)
{
	std::list<std::list<int> >::iterator ite = reverce.begin();
	std::list<int>::iterator it;
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

bool	cmp_num(std::list<int> vec1, std::list<int> vec2)
{
	// std::cout << "here45\n";
	nbrCmp_list++;
	if (vec1.back() <= vec2.back())
		return 1;
	return (0);
}

std::vector<int>	jacob_list(int N)
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

void	list_to_listofpair_not_sorted(std::list<int> &ve, std::list<std::pair<std::list<int> , std::list<int> > > &listOfPairs, int *i, std::list<int> &rest)
{
	std::list<int>::iterator it =ve.begin();
	
	it = ve.begin();
	while (it != ve.end())
	{
		std::pair<std::list<int> , std::list<int > > pair;
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
				listOfPairs.push_back(std::make_pair(pair.first, pair.second));
			else
				listOfPairs.push_back(std::make_pair(pair.second, pair.first));
			nbrCmp_list++;
		}
		else
			rest = pair.first;
	}
}

void	list_to_listofpair_sorted(std::list<int> &ve, std::list<std::pair<std::list<int> , std::list<int> > > &listOfPairs, int *i, std::list<int> &rest)
{
	std::list<int>::iterator it =ve.begin();
	
	it = ve.begin();
	while (it != ve.end())
	{
		std::pair<std::list<int> , std::list<int > > pair;
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
				listOfPairs.push_back(std::make_pair(pair.first, pair.second));
		else
			rest = pair.first;
	}
}

std::list<std::list<int> >	new_main_chain(std::list<std::list<int> >mai_chain, int j, int sum)
{
	std::list<std::list<int> >::iterator ite = mai_chain.begin();
	std::list<std::list<int> > new_mai;

	size_t i = j + sum;
	// std::cout << i << " " << mai_chain.size() << std::endl;
	while (i > 0 && ite != mai_chain.end())
	{
		new_mai.push_back(*ite);
		ite++;
		i--;
	}
	return (new_mai);
}

void 	add_new_main_chain(std::list<std::list<int> >mai_chain, int j, int sum, std::list<std::list<int> > &new_main)
{
	std::list<std::list<int> > new_mai;
	// std::list<std::list<int> >::iterator ite_new = new_main.begin();
	std::list<std::list<int> >::iterator ite_mai_chain = mai_chain.begin();

	size_t i = j + sum;
	// std::cout << i << " " << mai_chain.size() << std::endl;
	while (i > 0 && ite_mai_chain != mai_chain.end())
	{
		i--;
		ite_mai_chain++;
	}
	while (ite_mai_chain != mai_chain.end())
	{
		new_main.push_back(*ite_mai_chain);
		ite_mai_chain++;
	}
}

std::list<int>	find_pend(std::list<std::list<int> >pend, int j)
{
	std::list<std::list<int> >::iterator ite = pend.begin();

	while (j > 0 && ite != pend.end())
	{
		ite++;
		j--;
	}
	return (*ite);
}

void	sort_list(std::list<int> &ve, int *i)
{
	std::list<std::pair<std::list<int> , std::list<int > > > listOfPairs;
	std::list<int> rest;

	list_to_listofpair_not_sorted(ve, listOfPairs, i, rest);
	listOfPairsToSipmlelist(ve, listOfPairs);
	if (listOfPairs.size() > 1)
	{
		*i = (*i) * 2;
		sort_list(ve, i);
	}
	listOfPairs.clear();
	list_to_listofpair_sorted(ve, listOfPairs, i, rest);
	std::list<std::list<int> > mai_chain;
	std::list<std::list<int> > pend;
	std::list<std::pair<std::list<int> , std::list<int > > >::iterator it_er = listOfPairs.begin();
	while (it_er != listOfPairs.end())
	{
		pend.push_back(it_er->first);
		mai_chain.push_back(it_er->second);
		it_er++;
	}
	if (rest.size() > 0)
	pend.push_back(rest);
	mai_chain.insert(mai_chain.begin(), pend.front());
	std::vector<int> jacobNumber = jacob_list(20);
	int sv = 0;
	size_t sum = 0;
	std::list<std::list<int> >::iterator ite_list;
	std::list<int> pend_push;
	for(size_t ks = 1; ks < pend.size(); ks++)
	{
		size_t j = jacobNumber[sv + 1] ;
		size_t l =  jacobNumber[sv] + 1;
		if (j > pend.size())
			j = pend.size();
		if (l > j)
			break;
		// int k;
		std::list<std::list<int> > new_main;
		while (j >= l)
		{
			new_main = 	new_main_chain(mai_chain, j , sum);
			pend_push = find_pend(pend, j - 1);
			mai_chain.insert(std::lower_bound(new_main.begin(),new_main.end() , pend_push, cmp_num), pend_push);
			add_new_main_chain(mai_chain, j, sum , new_main);
			sum++;
			j--;
			mai_chain.clear();
			std::list<std::list<int> >::iterator copy = new_main.begin();
			while (copy != new_main.end())
			{
				mai_chain.push_back(*copy);
				copy++;
			}
		}
		
		// exit(0);
		sv++;
	}
	*i = (*i) / 2;
	listOflistToSipmlelist(ve, mai_chain);
}

int	sort_list(char **av)
{
	std::string line;

	line = get_line_list(av);
	if (check_line_list(line) == 0)
		return (0);
	std::list<int> v;
	v = store_list(line);
	int i = 1;
	sort_list(v, &i);
	std::list<int>::iterator it = v.begin();
	while (it != v.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << "\ncmp == " << nbrCmp_list << std::endl;
	return (1);
}