#include <iostream>
#include <string>
#include <fstream>

int	err_msg(const std::string &err_msg) {
	std::cout << err_msg << std::endl;
	return (1);
}

void	replace_str(const char *file, const std::string &str1, const std::string &substr) {
	std::ifstream			infile;
	std::ofstream			outfile;
	std::string				data;
	std::string				buffer;
	std::string				temp_out = std::string(file) + ".replace";
	std::string::size_type	curr_index = 0;

	/* Open io files and checks */
	infile.open(file, std::ios::in);
	if (!infile) {
		err_msg("Input file cannot be opened");
		return ;
	}
	outfile.open(&temp_out[0], std::ios::out | std::ios::trunc);
	if (!outfile) {
		err_msg("Output file not created");
		return ;
	}

	/* Get everything out into buffer */
	while (std::getline(infile, buffer)) {
		data += buffer;
		data += "\n";
	}
	if (data.size() > 0) data.resize(data.size() - 1);

	/* Loop through buffer and find every instance of str1, and replace with substr */
	while ((curr_index = data.find(str1, curr_index)) != std::string::npos) {
		data.erase(curr_index, str1.length());
		data.insert(curr_index, substr);
		curr_index += substr.length();
	}

	/* Buffer is now updated, time to shove it into outfile */
	outfile << data;

	/* Clean up */
	infile.close();
	outfile.close();
}

int	main(int argc, char **argv) {
	/* Basic checks */
	if (argc != 4)
		return (err_msg("Invalid input: Please input ./sed <filename> <str1> <substr>"));
	if (argv[2][0] == '\0')
		return (err_msg("String to be replaced cannot be empty"));

	/* Start replacement */
	replace_str(argv[1], std::string(argv[2]), std::string(argv[3]));

	// system("leaks sed");
}