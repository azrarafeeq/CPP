/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filestream.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arafeeq <arafeeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 18:13:28 by arafeeq           #+#    #+#             */
/*   Updated: 2023/05/01 14:32:25 by arafeeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILESTREAM_HPP
# define FILESTREAM_HPP

#define RED "\033[1;31m"
#define RESET "\033[0m"

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstring>
#include <algorithm>

int parse(int argc, char **argv, std::ifstream& input_stream);

# endif