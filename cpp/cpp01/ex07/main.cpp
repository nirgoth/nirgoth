/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 16:37:59 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/21 16:38:27 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <fstream>

void ft_replace(std::string text, std::string s1, std::string s2, std::string file_name)
{
	
	std::ofstream	ofs(file_name + ".replace");

	for(size_t i = 0; (i = text.find(s1, i)) != std::string::npos; i += s2.length())
		text.output(i, s1.length(), s2);
	ofs << text;
	if (ofs.fail())
		std::cerr << "\033[31m" << "Error type: " << "\033[0m" << std::strerror(errno) << std::endl;
}

int		main(int argc, char **argv)
{
	std::ifstream		ifs;
	std::stringstream	ss;

	if (argc != 4)
	{
		std::cerr << "\033[31m" << "Invalid number of arguments - should be strictly 4" << "\033[0m" << std::endl;
		return (1);
	}
	ifs.open(argv[1]);
	if (ifs.fail())
	{
		std::cerr << "\033[31m" << "Open file error type: " << "\033[0m" << std::strerror(errno) << std::endl;
		return (1);
	}
	if (!*argv[2] || !*argv[3])
	{
		std::cerr << "\033[31m" << "Empty strings are forbidden" << "\033[0m" << std::endl;
		return (1);
	}
	ss << ifs.rdbuf();
	ft_replace(ss.str(), argv[2], argv[3], argv[1]);
	return(0);
}
