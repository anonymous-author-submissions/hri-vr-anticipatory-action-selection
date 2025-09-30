// This is a personal academic project. Dear PVS-Studio, please check it.

// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com


#include "experiment.h"

int main(int argc, char* argv[])
{

	try
	{
		constexpr double deltaT = 65;
		constexpr DnfArchitectureType architecture = DnfArchitectureType::HAND_MOTION;

		const ExperimentParameters params{architecture, deltaT};
		Experiment experiment(params);

		experiment.init();
		experiment.run();
		experiment.end();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (...)
	{
		std::cerr << "Unknown exception" << std::endl;
	}

	return 0;
}
