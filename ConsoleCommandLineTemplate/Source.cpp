#include "Useful Methods.h"
#include <iomanip>

using namespace std;

/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
/*::  Function Prototypes                                     ::*/
/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
/*::  Functions                                               ::*/
/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/

int main(int argc, char* argv[])
{
	// Console execution settings
	constexpr short int minimumNumberOfArguments = 1; // Not including executable name.
	constexpr short int maximumNumberOfArguments = 2; // Not including executable name.

	if (argc < minimumNumberOfArguments+1 || argc > maximumNumberOfArguments+1) { // argc should be 2 for correct execution argv[0] is the executable name, argv[1+] are the parameters

		cout << "Error: " << (argc < minimumNumberOfArguments+1 ? "Too few arguments." : "Too many arguments.") << "\n\n"

			// Program description
			<< "please add details allan\n\n"

			// Parameter List (argv[0] is the executable name)
			<< argv[0] << " source [destination]\n\n" // How to properly execute the program.

			// Parameter List description
			<< "  source\t" << std::setw(16) << "Specifies the source file.\n" // Parameter 1
			<< "  destination\t" << std::setw(16) << "Specifies the source file.\n" // Parameter 2

			<< "\nArguments in '[, ]' are not required.\n";
		return -1;
	}

	// Check file integrity here.
	try {
		checkFile(argv[1]);
		checkFile(argv[2]);
	}
	catch (string errMsg) {
		cout << "Error: " << errMsg << "\n";
	}

	// Do whatever is needed after this.
}

/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/
/*::  Function name:                                          ::*/
/*::  Description:                                            ::*/
/*::  Usage:                                                  ::*/
/*::  Helpful Information:                                    ::*/
/*::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::*/