#pragma once

#ifdef FX_PLATFORM_WINDOWS
extern Flux::Application* Flux::CreateApplication();

int main(int argc, char** argv) {
	auto app = Flux::CreateApplication();
	app->Run();
	delete app;
}
#endif