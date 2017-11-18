#pragma once

#include <vector>
#include <string>


namespace electrocism
{
	enum SoundPlayState
	{
		Unkwon = -1,
		Playing,
		Stop
	};
	enum SoundPlayType
	{
		Unkwon = -1,
		Random,
		Sequential
	};

	namespace Manager
	{
		class SoundManager final
		{
		private:
			std::vector<std::string> sound_list;

			int cycle;

			SoundPlayState play_state;
			SoundPlayType play_type;

		public:
			void read_list( const std::string& path );
			std::vector<std::string> get_sound_list( ) const;

		public:
			void play( );
		};
	}
}