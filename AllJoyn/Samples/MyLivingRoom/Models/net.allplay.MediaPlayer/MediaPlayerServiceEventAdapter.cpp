//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#include "pch.h"

using namespace Microsoft::WRL;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::Devices::AllJoyn;
using namespace net::allplay::MediaPlayer;

// Note: Unlike an Interface implementation, which provides a single handler for each member, the event
// model allows for 0 or more listeners to be registered. The EventAdapter implementation deals with this
// difference by implementing a last-writer-wins policy. The lack of any return value (i.e., 0 listeners)
// is handled by returning a null result.

// Methods
IAsyncOperation<MediaPlayerForcedPreviousResult^>^ MediaPlayerServiceEventAdapter::ForcedPreviousAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new MediaPlayerForcedPreviousCalledEventArgs(info);
    ForcedPreviousCalled(this, args);
    return MediaPlayerForcedPreviousCalledEventArgs::GetResultAsync(args);
}

IAsyncOperation<MediaPlayerGetPlayerInfoResult^>^ MediaPlayerServiceEventAdapter::GetPlayerInfoAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new MediaPlayerGetPlayerInfoCalledEventArgs(info);
    GetPlayerInfoCalled(this, args);
    return MediaPlayerGetPlayerInfoCalledEventArgs::GetResultAsync(args);
}

IAsyncOperation<MediaPlayerGetPlaylistInfoResult^>^ MediaPlayerServiceEventAdapter::GetPlaylistInfoAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new MediaPlayerGetPlaylistInfoCalledEventArgs(info);
    GetPlaylistInfoCalled(this, args);
    return MediaPlayerGetPlaylistInfoCalledEventArgs::GetResultAsync(args);
}

IAsyncOperation<MediaPlayerNextResult^>^ MediaPlayerServiceEventAdapter::NextAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new MediaPlayerNextCalledEventArgs(info);
    NextCalled(this, args);
    return MediaPlayerNextCalledEventArgs::GetResultAsync(args);
}

IAsyncOperation<MediaPlayerPauseResult^>^ MediaPlayerServiceEventAdapter::PauseAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new MediaPlayerPauseCalledEventArgs(info);
    PauseCalled(this, args);
    return MediaPlayerPauseCalledEventArgs::GetResultAsync(args);
}

IAsyncOperation<MediaPlayerPlayResult^>^ MediaPlayerServiceEventAdapter::PlayAsync(_In_ AllJoynMessageInfo^ info, _In_ int32 interfaceMemberItemIndex, _In_ int64 interfaceMemberStartPositionMsecs, _In_ bool interfaceMemberPauseStateOnly)
{
    auto args = ref new MediaPlayerPlayCalledEventArgs(info, interfaceMemberItemIndex, interfaceMemberStartPositionMsecs, interfaceMemberPauseStateOnly);
    PlayCalled(this, args);
    return MediaPlayerPlayCalledEventArgs::GetResultAsync(args);
}

IAsyncOperation<MediaPlayerPreviousResult^>^ MediaPlayerServiceEventAdapter::PreviousAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new MediaPlayerPreviousCalledEventArgs(info);
    PreviousCalled(this, args);
    return MediaPlayerPreviousCalledEventArgs::GetResultAsync(args);
}

IAsyncOperation<MediaPlayerResumeResult^>^ MediaPlayerServiceEventAdapter::ResumeAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new MediaPlayerResumeCalledEventArgs(info);
    ResumeCalled(this, args);
    return MediaPlayerResumeCalledEventArgs::GetResultAsync(args);
}

IAsyncOperation<MediaPlayerSetPositionResult^>^ MediaPlayerServiceEventAdapter::SetPositionAsync(_In_ AllJoynMessageInfo^ info, _In_ int64 interfaceMemberPositionMsecs)
{
    auto args = ref new MediaPlayerSetPositionCalledEventArgs(info, interfaceMemberPositionMsecs);
    SetPositionCalled(this, args);
    return MediaPlayerSetPositionCalledEventArgs::GetResultAsync(args);
}

IAsyncOperation<MediaPlayerStopResult^>^ MediaPlayerServiceEventAdapter::StopAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new MediaPlayerStopCalledEventArgs(info);
    StopCalled(this, args);
    return MediaPlayerStopCalledEventArgs::GetResultAsync(args);
}

// Property Reads
IAsyncOperation<MediaPlayerGetEnabledControlsResult^>^ MediaPlayerServiceEventAdapter::GetEnabledControlsAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new MediaPlayerGetEnabledControlsRequestedEventArgs(info);
    GetEnabledControlsRequested(this, args);
    return MediaPlayerGetEnabledControlsRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<MediaPlayerGetInterruptibleResult^>^ MediaPlayerServiceEventAdapter::GetInterruptibleAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new MediaPlayerGetInterruptibleRequestedEventArgs(info);
    GetInterruptibleRequested(this, args);
    return MediaPlayerGetInterruptibleRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<MediaPlayerGetLoopModeResult^>^ MediaPlayerServiceEventAdapter::GetLoopModeAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new MediaPlayerGetLoopModeRequestedEventArgs(info);
    GetLoopModeRequested(this, args);
    return MediaPlayerGetLoopModeRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<MediaPlayerGetShuffleModeResult^>^ MediaPlayerServiceEventAdapter::GetShuffleModeAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new MediaPlayerGetShuffleModeRequestedEventArgs(info);
    GetShuffleModeRequested(this, args);
    return MediaPlayerGetShuffleModeRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<MediaPlayerGetVersionResult^>^ MediaPlayerServiceEventAdapter::GetVersionAsync(_In_ AllJoynMessageInfo^ info)
{
    auto args = ref new MediaPlayerGetVersionRequestedEventArgs(info);
    GetVersionRequested(this, args);
    return MediaPlayerGetVersionRequestedEventArgs::GetResultAsync(args);
}

// Property Writes
IAsyncOperation<MediaPlayerSetLoopModeResult^>^ MediaPlayerServiceEventAdapter::SetLoopModeAsync(_In_ AllJoynMessageInfo^ info, _In_ Platform::String^ value)
{
    auto args = ref new MediaPlayerSetLoopModeRequestedEventArgs(info, value);
    SetLoopModeRequested(this, args);
    return MediaPlayerSetLoopModeRequestedEventArgs::GetResultAsync(args);
}

IAsyncOperation<MediaPlayerSetShuffleModeResult^>^ MediaPlayerServiceEventAdapter::SetShuffleModeAsync(_In_ AllJoynMessageInfo^ info, _In_ Platform::String^ value)
{
    auto args = ref new MediaPlayerSetShuffleModeRequestedEventArgs(info, value);
    SetShuffleModeRequested(this, args);
    return MediaPlayerSetShuffleModeRequestedEventArgs::GetResultAsync(args);
}

