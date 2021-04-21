/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whortenc <whortenc@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 16:37:59 by whortenc          #+#    #+#             */
/*   Updated: 2021/04/21 16:58:37 by whortenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>
#include <sstream>
#include <fstream>

void ft_replacer(std::string text, std::string s1, std::string s2, std::string file_name)
{
	std::ofstream	outputfile(file_name + ".output");
	
	for(size_t i = 0; (i = text.find(s1, i)) != std::string::npos; i += s2.length())
		text.replace(i, s1.length(), s2);
	outputfile << text;
	if (outputfile.fail())
		std::cerr << "\033[31m" << "Error type: " << "\033[0m" << std::strerror(errno) << std::endl;
	//if(!outputfile.is_open())
	//	std::cerr << "\033[31m" << "There is no rights to open output file" << "\033[0m" << std::endl;
}

int		main(int argc, char **argv)
{
	std::ifstream		openfile;
	std::stringstream	ss;

	if (argc != 4)
	{
		std::cerr << "\033[31m" << "Invalid number of arguments - should be strictly 4" << "\033[0m" << std::endl;
		return (0);
	}

	if (!*argv[2] || !*argv[3])
	{
		std::cerr << "\033[31m" << "Empty strings are forbidden" << "\033[0m" << std::endl;
		return (0);
	}
	
	openfile.open(argv[1]);
	if (openfile.fail())
	{
		std::cerr << "\033[31m" << "Open file error type: " << "\033[0m" << std::strerror(errno) << std::endl;
		return (0);
	}

	ss << openfile.rdbuf();
	ft_replacer(ss.str(), argv[2], argv[3], argv[1]);
	return(1);
}
