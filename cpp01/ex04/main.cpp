/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 16:07:42 by gmechaly          #+#    #+#             */
/*   Updated: 2025/09/23 21:11:26 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

std::string	copy_and_replace(std::string line, std::string s1, std::string s2) {
	std::string::size_type	pos = 0;
	std::string::size_type	last_pos = 0;
	std::string				to_copy;
	std::string				updated_line;

	while((pos = line.find(s1, pos)) != std::string::npos){
		if (pos > last_pos){
			to_copy = line.substr(last_pos, pos - last_pos);
			updated_line += to_copy;
		}
		updated_line += s2;
		pos += s1.size();
		last_pos = pos;
	}
	if (last_pos < line.size()){
		to_copy = line.substr(last_pos);
		updated_line += to_copy;
	}
	return (updated_line);
}

void	read_file(std::string filename, std::string s1, std::string s2) {
	std::ifstream			file(filename.c_str());
	std::string				outfile_name = filename + ".replace";
	std::ofstream			outfile(outfile_name.c_str());
	std::string				line;
	std::string				updated_line;

	if (!file) {
		std::cout << "Error: file '" << filename << "' does not exist. Exiting program." << std::endl;
		return ;
	}
	if (!outfile) {
		std::cout << "Error: cannot open/create file '" << filename << "'. Exiting program." << std::endl;
		return ;
	}
	while(getline(file, line))
		updated_line += copy_and_replace(line, s1, s2) + "\n";
	outfile << updated_line;
	file.close();
	outfile.close();
}

int	main(void) {
	std::string	filename;
	std::string	s1;
	std::string	s2;

	std::cout << "Please enter the filename : ";
	if (!getline(std::cin, filename))
		return (1);
	std::cout << "Please enter the string you would like to replace : ";
	if (!getline(std::cin, s1))
		return (1);
	std::cout << "Please enter the string you would like to replace '" << s1 << "' by : ";
	if (!getline(std::cin, s2))
		return (1);
	read_file(filename, s1, s2);
}