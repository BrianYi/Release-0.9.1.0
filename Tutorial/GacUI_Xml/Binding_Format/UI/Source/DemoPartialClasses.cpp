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
Global Variables
***********************************************************************/

BEGIN_GLOBAL_STORAGE_CLASS(vl_workflow_global_Demo)
	vl_workflow_global::Demo instance;
	INITIALIZE_GLOBAL_STORAGE_CLASS
	FINALIZE_GLOBAL_STORAGE_CLASS
END_GLOBAL_STORAGE_CLASS(vl_workflow_global_Demo)

namespace vl_workflow_global
{
/***********************************************************************
Global Functions
***********************************************************************/

	Demo& Demo::Instance()
	{
		return Getvl_workflow_global_Demo().instance;
	}

/***********************************************************************
Closures
***********************************************************************/

	//-------------------------------------------------------------------

	__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__::__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__(::demo::MainWindowConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(__vwsnctorthis_0)
	{
	}

	void __vwsnf1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__::operator()(const ::vl::reflection::description::Value& __vwsn_value_) const
	{
		auto __vwsn_old_ = ::vl::__vwsn::This(::vl::__vwsn::This(__vwsnthis_0)->__vwsn_precompile_7)->GetText();
		auto __vwsn_new_ = ::vl::__vwsn::Unbox<::vl::WString>(__vwsn_value_);
		if ((__vwsn_old_ == __vwsn_new_))
		{
			return;
		}
		::vl::__vwsn::This(::vl::__vwsn::This(__vwsnthis_0)->__vwsn_precompile_7)->SetText(__vwsn_new_);
	}

	//-------------------------------------------------------------------

	__vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription::__vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription(::demo::MainWindowConstructor* __vwsnctorthis_0)
		:__vwsnthis_0(__vwsnctorthis_0)
	{
		this->__vwsn_bind_cache_0 = static_cast<::vl::presentation::controls::GuiSinglelineTextBox*>(nullptr);
		this->__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>();
		this->__vwsn_bind_opened_ = false;
		this->__vwsn_bind_closed_ = false;
		this->__vwsn_bind_listeners_ = ::vl::reflection::description::IValueDictionary::Create();
	}

	void __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription::__vwsn_bind_activator_()
	{
		auto __vwsn_bind_activator_result_ = ((::vl::WString(L"Hi, ", false) + ::vl::__vwsn::This(__vwsn_bind_cache_0)->GetText()) + ::vl::WString(L"! How are you?", false));
		{
			auto __vwsn_for_enumerable_ = ::vl::Ptr<::vl::reflection::description::IValueEnumerable>(::vl::__vwsn::This(__vwsn_bind_listeners_.Obj())->GetValues());
			auto __vwsn_for_enumerator_ = ::vl::__vwsn::This(__vwsn_for_enumerable_.Obj())->CreateEnumerator();
			while (::vl::__vwsn::This(__vwsn_for_enumerator_.Obj())->Next())
			{
				auto __vwsn_bind_callback_ = ::vl::__vwsn::Unbox<::vl::reflection::description::Value>(::vl::__vwsn::This(__vwsn_for_enumerator_.Obj())->GetCurrent());
				{
					::vl::__vwsn::Unbox<::vl::Func<void(const ::vl::reflection::description::Value&)>>(__vwsn_bind_callback_)(::vl::__vwsn::Box(__vwsn_bind_activator_result_));
				}
			}
		}
	}

	void __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription::__vwsn_bind_callback_0_0(::vl::presentation::compositions::GuiGraphicsComposition* __vwsn_bind_callback_argument_0, ::vl::presentation::compositions::GuiEventArgs* __vwsn_bind_callback_argument_1)
	{
		::vl::__vwsn::This(this)->__vwsn_bind_activator_();
	}

	void __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription::__vwsn_bind_initialize_()
	{
		(__vwsn_bind_cache_0 = ::vl::__vwsn::This(__vwsnthis_0)->textBoxName);
		(__vwsn_bind_handler_0_0 = ::vl::__vwsn::EventAttach(::vl::__vwsn::This(__vwsn_bind_cache_0)->TextChanged, ::vl::Func<void(::vl::presentation::compositions::GuiGraphicsComposition*, ::vl::presentation::compositions::GuiEventArgs*)>(::vl::__vwsn::This(this), &__vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription::__vwsn_bind_callback_0_0)));
	}

	::vl::Ptr<::vl::reflection::description::IValueListener> __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription::Subscribe(const ::vl::Func<void(const ::vl::reflection::description::Value&)>& __vwsn_bind_callback_)
	{
		if ((! __vwsn_bind_opened_))
		{
			(__vwsn_bind_opened_ = true);
			::vl::__vwsn::This(this)->__vwsn_bind_initialize_();
		}
		auto __vwsn_subscription_ = this;
		auto __vwsn_listener_shared_ = ::vl::Ptr<::vl::reflection::description::IValueListener>(new ::vl_workflow_global::__vwsnc2_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener(__vwsn_bind_listeners_, __vwsn_subscription_, this, __vwsnthis_0));
		::vl::__vwsn::This(__vwsn_bind_listeners_.Obj())->Set(::vl::__vwsn::Box(__vwsn_listener_shared_), ::vl::__vwsn::Box(__vwsn_bind_callback_));
		return __vwsn_listener_shared_;
	}

	bool __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription::Update()
	{
		if ((! __vwsn_bind_closed_))
		{
			::vl::__vwsn::This(this)->__vwsn_bind_activator_();
			return true;
		}
		return false;
	}

	bool __vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription::Close()
	{
		if ((! __vwsn_bind_closed_))
		{
			(__vwsn_bind_closed_ = true);
			::vl::__vwsn::EventDetach(::vl::__vwsn::This(__vwsn_bind_cache_0)->TextChanged, __vwsn_bind_handler_0_0);
			(__vwsn_bind_cache_0 = static_cast<::vl::presentation::controls::GuiSinglelineTextBox*>(nullptr));
			(__vwsn_bind_handler_0_0 = ::vl::Ptr<::vl::reflection::description::IEventHandler>());
			::vl::__vwsn::This(__vwsn_bind_listeners_.Obj())->Clear();
			return true;
		}
		return false;
	}

	//-------------------------------------------------------------------

	__vwsnc2_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener::__vwsnc2_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener(::vl::Ptr<::vl::reflection::description::IValueDictionary> __vwsnctor___vwsn_bind_listeners_, ::vl::reflection::description::IValueSubscription* __vwsnctor___vwsn_subscription_, ::vl::reflection::description::IValueSubscription* __vwsnctorthis_0, ::demo::MainWindowConstructor* __vwsnctorthis_1)
		:__vwsn_bind_listeners_(__vwsnctor___vwsn_bind_listeners_)
		, __vwsn_subscription_(__vwsnctor___vwsn_subscription_)
		, __vwsnthis_0(__vwsnctorthis_0)
		, __vwsnthis_1(__vwsnctorthis_1)
	{
	}

	::vl::reflection::description::IValueSubscription* __vwsnc2_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener::GetSubscription()
	{
		return ::vl::__vwsn::This(this)->__vwsn_subscription_;
	}

	bool __vwsnc2_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener::GetStopped()
	{
		return (! ::vl::__vwsn::This(::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_bind_listeners_.Obj())->GetKeys().Obj())->Contains(::vl::__vwsn::Box(this)));
	}

	bool __vwsnc2_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__Subscribe__vl_reflection_description_IValueListener::StopListening()
	{
		if (::vl::__vwsn::This(::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_bind_listeners_.Obj())->GetKeys().Obj())->Contains(::vl::__vwsn::Box(this)))
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_bind_listeners_.Obj())->Remove(::vl::__vwsn::Box(this));
			return true;
		}
		return false;
	}

}

/***********************************************************************
Class (::demo::MainWindowConstructor)
***********************************************************************/

namespace demo
{
	void MainWindowConstructor::__vwsn_initialize_instance_(::demo::MainWindow* __vwsn_this_, ::vl::presentation::GuiResourcePathResolver* __vwsn_resolver_)
	{
		(::vl::__vwsn::This(this)->__vwsn_precompile_0 = __vwsn_this_);
		(::vl::__vwsn::This(this)->__vwsn_precompile_8 = ::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_0)->GetBoundsComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_8)->SetPreferredMinSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = 480; __vwsn_temp__.y = 320; return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_0)->SetClientSize([&](){ ::vl::presentation::Size __vwsn_temp__; __vwsn_temp__.x = 480; __vwsn_temp__.y = 320; return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_0)->SetText(::vl::WString(L"Binding_Format", false));
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_1 = new ::vl::presentation::compositions::GuiTableComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = 0; __vwsn_temp__.top = 0; __vwsn_temp__.right = 0; __vwsn_temp__.bottom = 0; return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetMinSizeLimitation(::vl::presentation::compositions::GuiGraphicsComposition::MinSizeLimitation::LimitToElementAndChildren);
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetCellPadding(::vl::__vwsn::Parse<::vl::vint32_t>(::vl::WString(L"5", false)));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetRowsAndColumns(3, 3);
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetRowOption(0, [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetRowOption(1, [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetRowOption(2, [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = 1.0; return __vwsn_temp__; }());
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetColumnOption(0, [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::MinSize; return __vwsn_temp__; }());
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetColumnOption(1, [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Absolute; __vwsn_temp__.absolute = 100; return __vwsn_temp__; }());
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->SetColumnOption(2, [&](){ ::vl::presentation::compositions::GuiCellOption __vwsn_temp__; __vwsn_temp__.composeType = ::vl::presentation::compositions::GuiCellOption::ComposeType::Percentage; __vwsn_temp__.percentage = 1.0; return __vwsn_temp__; }());
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_2 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_2)->SetInternalMargin([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = 0; __vwsn_temp__.top = 5; __vwsn_temp__.right = 0; __vwsn_temp__.bottom = 5; return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_2)->SetSite(0, 0, 1, 1);
		}
		{
			auto __vwsn_controlStyle_ = ::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateLabelStyle();
			(::vl::__vwsn::This(this)->__vwsn_precompile_3 = new ::vl::presentation::controls::GuiLabel(__vwsn_controlStyle_));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_3)->SetText(::vl::WString(L"Type your name : ", false));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_2)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_3)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this)->__vwsn_precompile_2));
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_4 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_4)->SetSite(0, 1, 1, 1);
		}
		{
			auto __vwsn_controlStyle_ = ::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateTextBoxStyle();
			(::vl::__vwsn::This(this)->textBoxName = new ::vl::presentation::controls::GuiSinglelineTextBox(__vwsn_controlStyle_));
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_5 = ::vl::__vwsn::This(::vl::__vwsn::This(this)->textBoxName)->GetBoundsComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_5)->SetAlignmentToParent([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = 0; __vwsn_temp__.top = 0; __vwsn_temp__.right = 0; __vwsn_temp__.bottom = 0; return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->textBoxName)->SetText(::vl::WString(L"Jack", false));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_4)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(::vl::__vwsn::This(this)->textBoxName)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this)->__vwsn_precompile_4));
		}
		(::vl::__vwsn::This(this)->__vwsn_precompile_6 = new ::vl::presentation::compositions::GuiCellComposition());
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_6)->SetInternalMargin([&](){ ::vl::presentation::Margin __vwsn_temp__; __vwsn_temp__.left = 0; __vwsn_temp__.top = 5; __vwsn_temp__.right = 0; __vwsn_temp__.bottom = 5; return __vwsn_temp__; }());
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_6)->SetSite(1, 0, 1, 2);
		}
		{
			auto __vwsn_controlStyle_ = ::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateLabelStyle();
			(::vl::__vwsn::This(this)->__vwsn_precompile_7 = new ::vl::presentation::controls::GuiLabel(__vwsn_controlStyle_));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_6)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_7)->GetBoundsComposition()));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_1)->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this)->__vwsn_precompile_6));
		}
		{
			::vl::__vwsn::This(::vl::__vwsn::This(::vl::__vwsn::This(this)->__vwsn_precompile_0)->GetContainerComposition())->AddChild(static_cast<::vl::presentation::compositions::GuiGraphicsComposition*>(::vl::__vwsn::This(this)->__vwsn_precompile_1));
		}
		{
			auto __vwsn_created_subscription_ = ::vl::__vwsn::This(__vwsn_this_)->AddSubscription(::vl::Ptr<::vl::reflection::description::IValueSubscription>(new ::vl_workflow_global::__vwsnc1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance___vl_reflection_description_IValueSubscription(this)));
			::vl::__vwsn::This(__vwsn_created_subscription_.Obj())->Subscribe(LAMBDA(::vl_workflow_global::__vwsnf1_Demo_demo_MainWindowConstructor___vwsn_initialize_instance__(this)));
			::vl::__vwsn::This(__vwsn_created_subscription_.Obj())->Update();
		}
	}

	MainWindowConstructor::MainWindowConstructor()
	{
	}

/***********************************************************************
Class (::demo::MainWindow)
***********************************************************************/

	MainWindow::MainWindow()
		: ::vl::presentation::controls::GuiWindow(::vl::__vwsn::This(::vl::presentation::theme::GetCurrentTheme())->CreateWindowStyle())
	{
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

/***********************************************************************
Reflection
***********************************************************************/

namespace vl
{
	namespace reflection
	{
		namespace description
		{
#ifndef VCZH_DEBUG_NO_REFLECTION
			IMPL_CPP_TYPE_INFO(demo::MainWindow)
			IMPL_CPP_TYPE_INFO(demo::MainWindowConstructor)

#define _ ,
			BEGIN_CLASS_MEMBER(::demo::MainWindow)
				CLASS_MEMBER_CONSTRUCTOR(::demo::MainWindow*(), NO_PARAMETER)
			END_CLASS_MEMBER(::demo::MainWindow)

			BEGIN_CLASS_MEMBER(::demo::MainWindowConstructor)
				CLASS_MEMBER_CONSTRUCTOR(::vl::Ptr<::demo::MainWindowConstructor>(), NO_PARAMETER)
				CLASS_MEMBER_METHOD(__vwsn_initialize_instance_, { L"__vwsn_this_" _ L"__vwsn_resolver_" })
				CLASS_MEMBER_FIELD(__vwsn_precompile_0)
				CLASS_MEMBER_FIELD(__vwsn_precompile_1)
				CLASS_MEMBER_FIELD(__vwsn_precompile_2)
				CLASS_MEMBER_FIELD(__vwsn_precompile_3)
				CLASS_MEMBER_FIELD(__vwsn_precompile_4)
				CLASS_MEMBER_FIELD(__vwsn_precompile_5)
				CLASS_MEMBER_FIELD(__vwsn_precompile_6)
				CLASS_MEMBER_FIELD(__vwsn_precompile_7)
				CLASS_MEMBER_FIELD(__vwsn_precompile_8)
				CLASS_MEMBER_FIELD(textBoxName)
			END_CLASS_MEMBER(::demo::MainWindowConstructor)

#undef _
			class DemoTypeLoader : public Object, public ITypeLoader
			{
			public:
				void Load(ITypeManager* manager)
				{
					ADD_TYPE_INFO(::demo::MainWindow)
					ADD_TYPE_INFO(::demo::MainWindowConstructor)
				}

				void Unload(ITypeManager* manager)
				{
				}
			};
#endif

			bool LoadDemoTypes()
			{
#ifndef VCZH_DEBUG_NO_REFLECTION
				if (auto manager = GetGlobalTypeManager())
				{
					return manager->AddTypeLoader(MakePtr<DemoTypeLoader>());
				}
#endif
				return false;
			}
		}
	}
}

#if defined( _MSC_VER)
#pragma warning(pop)
#elif defined(__GNUC__)
#pragma GCC diagnostic pop
#elif defined(__clang__)
#pragma clang diagnostic pop
#endif
