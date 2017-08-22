/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#ifndef VCZH_WORKFLOW_COMPILER_GENERATED_MAINWINDOW
#define VCZH_WORKFLOW_COMPILER_GENERATED_MAINWINDOW

#include "DemoPartialClasses.h"

#if defined( _MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#elif defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wparentheses-equality"
#elif defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wparentheses-equality"
#endif

namespace demo
{
	class MainWindow : public ::vl::presentation::controls::GuiWindow, public ::demo::MainWindowConstructor, public ::vl::reflection::Description<MainWindow>
	{
		friend class ::demo::MainWindowConstructor;
		friend class ::vl_workflow_global::__vwsnc10_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
		friend class ::vl_workflow_global::__vwsnc11_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc12_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
		friend class ::vl_workflow_global::__vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc2_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
		friend class ::vl_workflow_global::__vwsnc3_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc4_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
		friend class ::vl_workflow_global::__vwsnc5_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc6_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
		friend class ::vl_workflow_global::__vwsnc7_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend class ::vl_workflow_global::__vwsnc8_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener;
		friend class ::vl_workflow_global::__vwsnc9_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription;
		friend struct ::vl_workflow_global::__vwsnf11_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf13_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf15_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf17_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf19_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsnf9_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsno10_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsno12_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsno14_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsno16_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsno18_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsno1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsno20_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsno21_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsno22_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsno23_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsno24_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsno2_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsno3_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsno4_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsno5_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsno6_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsno7_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
		friend struct ::vl_workflow_global::__vwsno8_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__;
#ifndef VCZH_DEBUG_NO_REFLECTION
		friend struct ::vl::reflection::description::CustomTypeDescriptorSelector<MainWindow>;
#endif
	public:
		bool CanCloseFile();
		bool OpenFile(::vl::vint32_t filterIndex);
		bool SaveFile(bool saveAs);
		void SetupTextConfig();
		void SetupXmlConfig();
	protected:
		::vl::WString fileName = ::vl::WString(L"", false);
		bool isXml = false;
		::vl::Ptr<::vl::presentation::controls::GuiWindow> findWindow = ::vl::Ptr<::vl::presentation::controls::GuiWindow>();
		void commandFileNewText_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments);
		void commandFileNewXml_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments);
		void commandFileOpen_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments);
		void commandFileOpenText_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments);
		void commandFileOpenXml_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments);
		void commandFileSave_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments);
		void commandFileSaveAs_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments);
		void commandFileExit_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments);
		void commandEditUndo_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments);
		void commandEditRedo_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments);
		void commandEditCut_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments);
		void commandEditCopy_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments);
		void commandEditPaste_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments);
		void commandEditDelete_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments);
		void commandEditSelect_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments);
		void commandEditFind_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments);
		void commandAbout_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments);
		void window_Closing(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiRequestEventArgs* arguments);
	public:
		MainWindow();
		~MainWindow();
	};

}
#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif
