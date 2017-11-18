#include "Manager\LogManager.hh"


namespace electrocism
{
	LogNode::LogNode( )
		: time( std::chrono::system_clock::now( ) )
	{}
	LogNode::LogNode( const std::string& message_ )
		:time( std::chrono::system_clock::now( ) )
		, message( message_ )
	{}

	const std::string LogNode::ToString( ) const
	{
		auto tt = std::chrono::system_clock::to_time_t( time );
		std::string ct = std::ctime( &tt );

		ct += ", ";
		ct += message;

		return ct;
	}

	namespace Manager
	{
		void log( const std::string& message )
		{
			logs.push_back( LogNode( message ) );
		}
		void save_log( const std::string& path )
		{
			std::ofstream file( path );

			if ( file.is_open( ) )
			{
				for ( const auto& i : logs )
				{
					file << i.ToString( );
				}

				file.close( );
			}
		}
	}
}