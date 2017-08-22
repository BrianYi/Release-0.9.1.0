#define GAC_HEADER_USE_NAMESPACE
#include "UI/Source/HelloWorld.h"
#include <Windows.h>

using namespace vl::collections;
using namespace vl::stream;

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int CmdShow)
{
	return SetupWindowsDirect2DRenderer();
}

void GuiMain()
{
	{
		FileStream fileStream(L"../UIRes/CppXml.bin", FileStream::ReadOnly);
		auto resource = GuiResource::LoadPrecompiledBinary(fileStream);
		GetResourceManager()->SetResource(L"Resource", resource);
	}
	helloworld::MainWindow window;
	window.MoveToScreenCenter();
	GetApplication()->Run(&window);
}