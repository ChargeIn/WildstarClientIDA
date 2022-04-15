#include "../winhttp.h"

//----- (00000001407F00F0) ----------------------------------------------------
__int64 __fastcall sub_1407F00F0(LPCWSTR lpOutputString, __int64 a2, unsigned int a3)
{
	__int64 v6; // rdi
	PVOID v7; // rsi
	int v8; // r14d
	HMODULE Library; // rbx
	int(__stdcall * MessageBoxW)(HWND, LPCWSTR, LPCWSTR, UINT); // rax
	HWND(__stdcall * GetActiveWindow)(); // rax
	HWND(__stdcall * GetLastActivePopup)(HWND); // rax
	BOOL(__stdcall * GetUserObjectInformationW)(HANDLE, int, PVOID, DWORD, LPDWORD); // rax
	HWINSTA(__stdcall * GetProcessWindowStation)(); // rax
	__int64 (*v16)(void); // rbx
	unsigned int(__fastcall * v17)(__int64, __int64, char*); // rax
	unsigned int(__fastcall * v18)(__int64, __int64, char*); // r14
	__int64 v19; // rax
	__int64 (*v20)(void); // rax
	__int64(__fastcall * v21)(__int64); // rax
	__int64(__fastcall * v22)(__int64, LPCWSTR, __int64, _QWORD); // rax
	char v23[16]; // [rsp+38h] [rbp-50h] BYREF

	v6 = 0i64;
	v7 = EncodePointer(0i64);
	v8 = sub_1407E26C0();
	if (!qword_140C60840)
	{
		Library = LoadLibraryExW(L"USER32.DLL", 0i64, 0x800u);
		if (!Library)
		{
			if (GetLastError() != 87)
				return 0i64;
			Library = LoadLibraryW(L"USER32.DLL");
			if (!Library)
				return 0i64;
		}
		MessageBoxW = (int(__stdcall*)(HWND, LPCWSTR, LPCWSTR, UINT))GetProcAddress(Library, "MessageBoxW");
		if (!MessageBoxW)
			return 0i64;
		qword_140C60840 = EncodePointer(MessageBoxW);
		GetActiveWindow = (HWND(__stdcall*)())GetProcAddress(Library, "GetActiveWindow");
		qword_140C60848 = EncodePointer(GetActiveWindow);
		GetLastActivePopup = (HWND(__stdcall*)(HWND))GetProcAddress(Library, "GetLastActivePopup");
		qword_140C60850 = EncodePointer(GetLastActivePopup);
		GetUserObjectInformationW = (BOOL(__stdcall*)(HANDLE, int, PVOID, DWORD, LPDWORD))GetProcAddress(
			Library,
			"GetUserObjectInformationW");
		qword_140C60860 = EncodePointer(GetUserObjectInformationW);
		if (qword_140C60860)
		{
			GetProcessWindowStation = (HWINSTA(__stdcall*)())GetProcAddress(Library, "GetProcessWindowStation");
			qword_140C60858 = EncodePointer(GetProcessWindowStation);
		}
	}
	if (IsDebuggerPresent())
	{
		if (lpOutputString)
			OutputDebugStringW(lpOutputString);
		if (v8)
			return 4i64;
	}
	else if (v8)
	{
		DecodePointer(qword_140C60840);
		return 3i64;
	}
	if (qword_140C60858 == v7
		|| qword_140C60860 == v7
		|| (v16 = (__int64 (*)(void))DecodePointer(qword_140C60858),
			v17 = (unsigned int(__fastcall*)(__int64, __int64, char*))DecodePointer(qword_140C60860),
			v18 = v17,
			!v16)
		|| !v17
		|| (v19 = v16()) != 0 && v18(v19, 1i64, v23) && (v23[8] & 1) != 0)
	{
		if (qword_140C60848 != v7)
		{
			v20 = (__int64 (*)(void))DecodePointer(qword_140C60848);
			if (v20)
			{
				v6 = v20();
				if (v6)
				{
					if (qword_140C60850 != v7)
					{
						v21 = (__int64(__fastcall*)(__int64))DecodePointer(qword_140C60850);
						if (v21)
							v6 = v21(v6);
					}
				}
			}
		}
	}
	else
	{
		a3 |= 0x200000u;
	}
	v22 = (__int64(__fastcall*)(__int64, LPCWSTR, __int64, _QWORD))DecodePointer(qword_140C60840);
	if (v22)
		return v22(v6, lpOutputString, a2, a3);
	return 0i64;
}

