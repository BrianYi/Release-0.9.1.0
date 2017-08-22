/***********************************************************************
!!!!!! DO NOT MODIFY !!!!!!

GacGen.exe Resource.xml

This file is generated by Workflow compiler
https://github.com/vczh-libraries
***********************************************************************/

#include "Demo.h"

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

#define GLOBAL_SYMBOL ::vl_workflow_global::Demo::
#define GLOBAL_NAME ::vl_workflow_global::Demo::Instance().
#define GLOBAL_OBJ &::vl_workflow_global::Demo::Instance()
#define USERIMPL(...)

/***********************************************************************
Class (::demo::MainWindow)
***********************************************************************/

namespace demo
{
	void MainWindow::ClearViewSelection()
	{
		::vl::__vwsn::This(::vl::__vwsn::This(this)->commandBigIcon)->SetSelected(false);
		::vl::__vwsn::This(::vl::__vwsn::This(this)->commandSmallIcon)->SetSelected(false);
		::vl::__vwsn::This(::vl::__vwsn::This(this)->commandList)->SetSelected(false);
		::vl::__vwsn::This(::vl::__vwsn::This(this)->commandDetail)->SetSelected(false);
		::vl::__vwsn::This(::vl::__vwsn::This(this)->commandTile)->SetSelected(false);
		::vl::__vwsn::This(::vl::__vwsn::This(this)->commandInformation)->SetSelected(false);
	}

	::vl::Ptr<::demo::IViewModel> MainWindow::GetViewModel()
	{
		return ::vl::__vwsn::This(this)->__vwsn_parameter_ViewModel;
	}

	USERIMPL(/* ::demo::MainWindow */)
	void MainWindow::commandBigIcon_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments)
	{
		ClearViewSelection();
		commandBigIcon->SetSelected(true);
		listViewContacts->ChangeItemStyle(new vl::presentation::controls::list::ListViewBigIconContentProvider);
	}

	USERIMPL(/* ::demo::MainWindow */)
	void MainWindow::commandSmallIcon_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments)
	{
		ClearViewSelection();
		commandSmallIcon->SetSelected(true);
		listViewContacts->ChangeItemStyle(new vl::presentation::controls::list::ListViewSmallIconContentProvider);
	}

	USERIMPL(/* ::demo::MainWindow */)
	void MainWindow::commandList_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments)
	{
		ClearViewSelection();
		commandList->SetSelected(true);
		listViewContacts->ChangeItemStyle(new vl::presentation::controls::list::ListViewListContentProvider);
	}

	USERIMPL(/* ::demo::MainWindow */)
	void MainWindow::commandDetail_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments)
	{
		ClearViewSelection();
		commandDetail->SetSelected(true);
		listViewContacts->ChangeItemStyle(new vl::presentation::controls::list::ListViewDetailContentProvider);
	}

	USERIMPL(/* ::demo::MainWindow */)
	void MainWindow::commandTile_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments)
	{
		ClearViewSelection();
		commandTile->SetSelected(true);
		listViewContacts->ChangeItemStyle(new vl::presentation::controls::list::ListViewTileContentProvider);
	}

	USERIMPL(/* ::demo::MainWindow */)
	void MainWindow::commandInformation_Executed(::vl::presentation::compositions::GuiGraphicsComposition* sender, ::vl::presentation::compositions::GuiEventArgs* arguments)
	{
		ClearViewSelection();
		commandInformation->SetSelected(true);
		listViewContacts->ChangeItemStyle(new vl::presentation::controls::list::ListViewInformationContentProvider);
	}

	MainWindow::MainWindow(::vl::Ptr<::demo::IViewModel> __vwsn_ctor_parameter_ViewModel)
		: ::vl::presentation::controls::GuiWindow(::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateWindowStyle())
	{
		(::vl::__vwsn::This(this)->__vwsn_parameter_ViewModel = __vwsn_ctor_parameter_ViewModel);
		auto __vwsn_resource_ = ::vl::__vwsn::This(::vl::presentation::GetResourceManager())->GetResourceFromClassName(::vl::WString(L"demo::MainWindow", false));
		auto __vwsn_resolver_ = ::vl::Ptr<::vl::presentation::GuiResourcePathResolver>(new ::vl::presentation::GuiResourcePathResolver(__vwsn_resource_, ::vl::__vwsn::This(__vwsn_resource_.Obj())->GetWorkingDirectory()));
		::vl::__vwsn::This(this)->__vwsn_initialize_instance_(this, ::vl::__vwsn::Ensure(static_cast<::vl::presentation::GuiResourcePathResolver*>(__vwsn_resolver_.Obj())));
	}

	MainWindow::~MainWindow()
	{
		::vl::__vwsn::This(this)->ClearSubscriptions();
	}

}
#undef GLOBAL_SYMBOL
#undef GLOBAL_NAME
#undef GLOBAL_OBJ
#undef USERIMPL

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif