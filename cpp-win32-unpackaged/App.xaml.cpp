// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.
#include "pch.h"

#include "App.xaml.h"
#include <winrt/Windows.UI.Xaml.Interop.h>
#include <winrt/Microsoft.UI.Xaml.XamlTypeInfo.h>
#include <winrt/Microsoft.UI.Xaml.Markup.h>

using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;
using namespace Microsoft::UI::Xaml::XamlTypeInfo;
using namespace Microsoft::UI::Xaml::Markup;
using namespace Windows::UI::Xaml::Interop;
using namespace Windows::Foundation;

namespace winrt::SimpleIslandApp::implementation
{
    App::App()
        : m_windowsXamlManager(winrt::Microsoft::UI::Xaml::Hosting::WindowsXamlManager::InitializeForCurrentThread())
    {
        //Application::Current().RequestedTheme(ApplicationTheme::Light);
    }

    void App::OnLaunched(winrt::Microsoft::UI::Xaml::LaunchActivatedEventArgs const&)
    {
        winrt::Microsoft::UI::Xaml::Controls::XamlControlsResources xc;
        Resources().MergedDictionaries().Append(xc);
        Resources().MergedDictionaries().Append(XamlControlsResources());
        //App::RequestedTheme(ApplicationTheme::Light);
        //App::RequestedTheme(ApplicationTheme::Dark);
    }
}

