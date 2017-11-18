#pragma once

#include <SFML\Graphics.hpp>


namespace electrocism
{
	enum DisplayState
	{
		Unkwon = -1,
		Running,
		Stop
	};

	namespace Manager
	{
		class DisplayManager
		{
		private:
			sf::RenderWindow window;
			DisplayState state;

		public:
			void run( );
			void stop( );

			sf::RenderWindow& get_window( );
			DisplayState get_state( ) const;

		private:
			void loop( );

			void inputs( );
			void events( );
		};
	}
}