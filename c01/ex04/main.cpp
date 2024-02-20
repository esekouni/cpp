/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:58:42 by esekouni          #+#    #+#             */
/*   Updated: 2023/10/15 17:49:16 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

std::string	replece_s1_s2(std::string s1, std::string s2, std::string line)
{
	if (s1 == s2)
		return (line);
    int index = line.find(s1);
	while (index != (int)std::string::npos)
	{
		line = line.substr(0, index) + s2 + line.substr(index + s1.length());
    	index = line.find(s1);
	}
	return (line);
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		int i = 0;
		std::string str(argv[1]);
		std::string s1(argv[2]);
		std::string s2(argv[3]);
		std::string line;
		std::string file_name;
		std::ifstream inputFile(str);

		if (s1.length() == 0)
			return (0);
		i = str.find('.');
		file_name = str.substr(0, i) + ".replace";
		if (inputFile.is_open())
		{
			std::ofstream outpFile(file_name);
			while (std::getline(inputFile, line, '\0'))
			{
				std::getline(inputFile, line, '\0');
				line = replece_s1_s2(s1, s2, line);
				outpFile << line;
			}
			inputFile.close();
			outpFile.close();
		}
		else
		{
			std::cerr << "Failed to open the file." << std::endl;
		}
	}
    return 0;
}