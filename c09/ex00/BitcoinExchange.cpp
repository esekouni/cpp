/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:02:28 by esekouni          #+#    #+#             */
/*   Updated: 2023/12/23 14:09:08 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

double	check_year(std::string year)
{
	double	x;
	char	*endp = NULL;

	x = std::strtod(year.c_str(), &endp);
	unsigned long j = 0;
	if (year.length() > 4)
		return (0);
	while (j < year.length())
	{
		if (!isdigit(year[j]))
			return (0);
		j++;
	}
	if (x < 2009 || x > 2023)
		return (0);
	return (x);
}

double		check_day(std::string day)
{
	double	x;
	char	*endp = NULL;

	x = std::strtod(day.c_str(), &endp);
	if (x < 0 || x > 31)
		return (0);
	unsigned long j = 0;
	while (j < day.length())
	{
		if (day[j] != ' ' && !isdigit(day[j]))
			return (0);
		j++;
	}
	return (x);
}

double		check_month(std::string month)
{
	double	x;
	char	*endp = NULL;

	x = std::strtod(month.c_str(), &endp);
	std::string l(endp);
	unsigned long j = 0;
	if (month.length() > 2)
		return (0);
	while (j < month.length())
	{
		if (!isdigit(month[j]))
			return (0);
		j++;
	}
	if (x < 1 || x > 12)
		return (0);
	if (l.length() > 0)
		return (0);
	return (x);
}

double	check_value(std::string value, int V)
{
	double	x;
	char	*endp = NULL;
	unsigned long j = 0;

	x = std::strtod(value.c_str(), &endp);
	std::string l(endp);
	while (j < value.length())
	{
		if ((value[j] != ' ' && !isdigit(value[j])) && value[j] != '.' && value[j] != '+' && value[j] != '-')
		{
			std::cout << "Error: bad input => " << value << std::endl;
			return (-1);
		}
		j++;
	}
	if (x < 0)
	{
		std::cout << "Error: not a positive number." << std::endl;
		return (-1);
	}
	if (x > V)
	{
		std::cout << "Error: too large a number." << std::endl;
		return (-1);
	}
	return (x);
}

int check_date(double year , double day, double month)
{
	if ((int)year % 4 != 0 && month == 2 && day > 28)
		return (0);
	if ((month == 4 || month == 6 || month == 11 || month == 9) && day > 30)
		return (0); 
	return (1);
}

int	check_line(std::string line, Data *data, char c, int V)
{
	unsigned long i;
	double	v;
	std::string value;
	// std::time_t currentTime = std::time(NULL);

	i = line.find(c);
	if (i >= line.length())
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return (0);
	}
	value = line.substr(i + 1 , line.length());
	v = check_value(value, V);
	if (v == -1)
		return (0);
	
	std::string line2;
	std::string date;
	std::string day;
	std::string year;
	std::string month;
	double d;
	double y;
	double m;

	line2 = line.substr(0, i);
	date = line2;
	i = line2.find("-");
	year = line2.substr(0, i);
	line2 = line2.substr(year.length() + 1, line2.length());
	i = line2.find("-");
	month = line2.substr(0, i);
	day = line2.substr(month.length() + 1, line2.length());
	
	y = check_year(year);
	m = check_month(month);
	d = check_day(day);
	
	if (y == 0 || d == 0 || d == 0)
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return (0);
	}
	else if (y == 2009 && m == 1 && d < 2)
	{
		std::cout << "Error: invalid day => " << date << std::endl;
		return (0);
	}
	else if (y > 2023 || (y == 2023 && m > 12) || (y == 2023 && m == 12 && d > 23)) /*    check date */
	{
		std::cout << "Error: invalid day => " << date << std::endl;
		return (0);
	}
	else if (check_date(y, d, m) == 0)
	{
		std::cout << "Error: invalid day => " << date << std::endl;
		return (0);
	}
	data->year = y;
	data->day = d;
	data->month = m;
	data->value = v;

	return (1);
}

std::map<int, double>	read_data_csv()
{
	std::map<int, double> data ;
	std::ifstream inputfile("data.csv");
	std::string line;
	std::string line2;
	int x;
	Data d;

	if (inputfile.is_open())
	{
		std::getline(inputfile, line, '\n');
		if (line != "date,exchange_rate")
		{
			std::cout << "Error " << std::endl;
			exit(1);
		}
		while (std::getline(inputfile, line, '\n'))
		{
			if (check_line(line, &d, ',', 2147483647) == 1)
			{
				x = (d.year * 10000) + (d.month * 100) + d.day;
				data[x] = d.value; 
			}
			else
				exit(1);
		}
	}
	return (data);
}

void	print(Data *data, std::map<int, double> d)
{

	int date;
	double x;
	double tmp;
	
	date = (data->year * 10000) + (data->month * 100) + (data->day);

	std::map<int, double>::iterator it = d.begin();
	while (it != d.end())
	{
		x = it->first;
		tmp = it->second; 
		if (x == date)
		{
			std::cout << data->year  << "-" <<"0" <<data->month << "-" << "0" << data->day << " => " << data->value << " = " <<  (data->value * it->second) << std::endl;
			return ;
		}
		else if (x > date)
		{
			std::cout << data->year << "-" << "0" <<data->month << "-" << "0" <<data->day << " => " << data->value << " = " << (data->value * tmp) << std::endl;
			return ;
		}
		it++;
	}
	if (it == d.end())
		std::cout << "Error: date not found" << std::endl;
}


void	read_input(std::string input)
{
	std::ifstream inputfile(input);
	std::string line;
	Data data;
	std::map<int, double> d;
	d = read_data_csv();

	if (inputfile.is_open())
	{
		std::getline(inputfile, line, '\n');
		if (line != "date | value")
		{
			std::cout << "Error" << std::endl;
			exit(1);
		}
		while (std::getline(inputfile, line, '\n'))
		{
			if (check_line(line, &data, '|', 1000) == 1)
				print(&data, d);
		}
	}
}

