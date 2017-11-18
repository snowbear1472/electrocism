#pragma once

#include <string>
#include <chrono>
#include <vector>
#include <ctime>
#include <fstream>


namespace electrocism
{
	class LogNode final
	{
	public:
		std::chrono::system_clock::time_point time;
		std::string message;

	public:
		LogNode( );
		LogNode( const std::string& message_ );

		const std::string ToString( ) const;
	};

	namespace Manager
	{
		std::vector<LogNode> logs;

		void log( const std::string& message );
		void save_log( const std::string& path );
	}
}