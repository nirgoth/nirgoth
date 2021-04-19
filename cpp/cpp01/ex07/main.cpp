/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 15:29:12 by rbeach            #+#    #+#             */
/*   Updated: 2021/02/16 18:05:56 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
#include <cstring>

void ft_replace(std::string text, std::string str1, std::string str2, std::string file_name)
{
	size_t			i = 0;
	std::ofstream	ofs(file_name + ".replace");

	while ( (i = text.find(str1, i)) != std::string::npos)
	{
		text.replace(i, str1.length(), str2);
		i += str2.length();
	}
	ofs << text;
	if (ofs.fail())
		std::cerr << "Error: " << std::strerror(errno) << std::endl;
}

int		main(int argc, char **argv)
{
	std::ifstream		ifs;
	std::stringstream	ss;

	if (argc != 4)
	{
		std::cerr << "Wrong number of arguments" << std::endl;
		return (1);
	}
	ifs.open(argv[1]);
	if (ifs.fail())
	{
		std::cerr << "Error: " << std::strerror(errno) << std::endl;
		return (1);
	}
	if (!*argv[2] || !*argv[3])
	{
		std::cerr << "One or two strings are empty" << std::endl;
		return (1);
	}
	ss << ifs.rdbuf();
	ft_replace(ss.str(), argv[2], argv[3], argv[1]);
	return(0);
}
