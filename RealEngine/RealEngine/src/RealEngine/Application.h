#pragma once
#include "Core.h"

namespace RealEngine
{
	class REALENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//to be defined in client
	Application* CreateApplication();
}


