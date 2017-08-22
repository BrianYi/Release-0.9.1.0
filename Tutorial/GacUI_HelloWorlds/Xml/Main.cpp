#define GAC_HEADER_USE_NAMESPACE
#include <GacUIReflection.h>
#include <Windows.h>

using namespace vl::collections;
using namespace vl::stream;
using namespace vl::reflection::description;

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int CmdShow)
{
	return SetupWindowsDirect2DRenderer();
}

void GuiMain()
{
	{
		FileStream fileStream(L"../UIRes/Xml.bin", FileStream::ReadOnly);
		auto resource = GuiResource::LoadPrecompiledBinary(fileStream);
		GetResourceManager()->SetResource(L"Resource", resource, GuiResourceUsage::InstanceClass);
	}

	auto window = UnboxValue<GuiWindow*>(Value::Create(L"helloworld::MainWindow"));
	window->MoveToScreenCenter();
	GetApplication()->Run(window);
	delete window;
}