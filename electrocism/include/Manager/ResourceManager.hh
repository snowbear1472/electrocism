#pragma once

#include <map>
#include <vector>


namespace electrocism
{
	enum ResourceType
	{
		Unkwon = -1,
		Image,
		Sound
	};

	class Resource final
	{
	private:
		ResourceType type;
		std::vector<const char> data;

	public:
		ResourceType get_type( ) const;
		void set_type( const ResourceType& type_ );
	};

	namespace Manager
	{
		class ResourceManager final
		{
		private:
			std::vector<Resource> resources;

		public:
			void* resource( const std::string& path );

			void add_resource( const std::string& path );
		};
	}
}