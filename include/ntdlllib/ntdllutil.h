#pragma once
#include <ntdlllib/ntdll.h>
#include <string>

namespace ntdlllib
{
	class ntdllutil
	{ 
	public:
		static BOOL UnicodeStringToString(PUNICODE_STRING pusz, std::wstring& str);
		static BOOL MoveStringToUnicodeString(std::wstring const& str, PUNICODE_STRING pusz);
		static BOOL StringToUnicodeString(std::wstring const& str, PUNICODE_STRING pusz);
		static void FreeUnicodeString(PUNICODE_STRING pusz);

		static void CloseHandle(HANDLE handle);
	private:
	};
}