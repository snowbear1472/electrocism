#pragma once

#include <chrono>
#include <string>
#include <vector>


namespace electrocism
{
	class LogNode final
	{
	private:
		std::chrono::system_clock::time_point time;
		std::string message;

	public:
		LogNode( );
		LogNode( const std::string& message_ );

	public:
		const std::string ToString( );
	};

	namespace Manager
	{
		class LogManager final
		{
		private:
			static std::vector<LogNode> logs;

		public:
			static void log( const std::string& message );
			static void save( const std::string& path );
		};
	}
}