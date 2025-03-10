/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 12:53:15 by anakin            #+#    #+#             */
/*   Updated: 2025/03/10 10:52:15 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

/*
this funtion return new filename that have ".replace"
*/
std::string makeNewFileName(std::string infileName)
{
	int	i;

	i = infileName.find_last_of(".");
	if (i == -1)
	{
		i = infileName.length();
	}
	return (infileName.substr(0, i) + ".replace");
}

/*
this function return string that change s1 in str to s2
*/
std::string replaceString(std::string str, std::string s1, std::string s2)
{
	std::string::size_type index;
	std::string newLine;
	while ((index = str.find(s1)) != std::string::npos)
	{
		newLine += str.substr(0, index) + s2;
		str = str.substr(index + s1.length());
	}
	newLine += str;
	return (newLine);
}

int	main(int argc, char **argv)
{
	char **args;

	args = ++argv;
	if (argc != 4)
	{
		std::cerr << "Error: Please input filename, string1 ,string2" << std::endl;
		return (1);
	}
    std::string s1 = args[1];
    if(s1.empty())
    {
        std::cerr <<"Erro: s1 must't be empty";
        return (1);
    }
	std::string inFilename = args[0];
	std::string outFilename = makeNewFileName(inFilename);
	std::ifstream infile(inFilename.c_str());
	if (!infile)
	{
		std::cerr << "Error: Could not open in file!" << std::endl;
		return (1);
	}
	std::ofstream outfile(outFilename.c_str());
	if (!outfile)
	{
		std::cerr << "Error: Could not open out file !" << std::endl;
		return (1);
	}
	std::string line;
	bool firstLine = true;
	while (std::getline(infile, line))
	{
		if (!firstLine)
			outfile << std::endl;
		outfile << replaceString(line, args[1], args[2]);
		firstLine = false;
	}
    if (!firstLine && infile.eof() && infile.get() != EOF)
        outfile << std::endl;
    infile.close();
    outfile.close();
    return (0);
}

/*
引数のエラー処理　○
スペース名ファイル　○
空文字名ファイル　○
空ファイル　○
s1の空文字　○
*/

/*
ファイルの最後が改行文字だった時コピーされない
getlineのデリミタをヌル文字にすれば全部読み込めるがバッファがオーバーフローするかも
→解決
２、３個目の引数でエスケープシーケンス（\n）などが指定された時解釈されない、ただの文字列として入ってくる。
ただし課題本文にはstring型で引き受ける、ではなくtwo strings, s1 and s2.と書いてあるので
引数として渡されたものはそのまま std::string、文字列として解釈して良いと思う。
*/