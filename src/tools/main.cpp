#include <iostream>
#include <boost/program_options.hpp>

#include "grapheine_config.h"

using namespace std;

namespace po = boost::program_options;

int main (int argc, char** argv)
{
	try
	{
		cout << "Grapheine version " << GRAPHEINE_VERSION << endl;

		po::options_description desc("Allowed options");

		desc.add_options()
			("help", "produce help message")
		;

		po::variables_map vm;
		po::store(po::parse_command_line(argc, argv, desc), vm);
		po::notify(vm);

		if (vm.count("help")) {
			cout << desc << "\n";
			return 1;
		}
	}
	catch(exception& e) {
		cerr << "error: " << e.what() << "\n";
		return 1;
	}
	catch(...) {
		cerr << "Exception of unknown type!\n";
	}

	return 0;
}
