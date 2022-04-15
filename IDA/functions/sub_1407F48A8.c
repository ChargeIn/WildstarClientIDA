#include "../winhttp.h"

//----- (00000001407F48A8) ----------------------------------------------------
__int64 __fastcall sub_1407F48A8(
	LPCWSTR lpFileName,
	DWORD dwDesiredAccess,
	DWORD dwShareMode,
	LPSECURITY_ATTRIBUTES lpSecurityAttributes,
	DWORD dwCreationDisposition,
	unsigned int a6,
	int a7)
{
	HMODULE ModuleHandleW; // rax
	FARPROC CreateFile2; // rbx
	INT_PTR(__stdcall * v14)(); // [rsp+40h] [rbp-38h]
	int v15[4]; // [rsp+48h] [rbp-30h] BYREF
	LPSECURITY_ATTRIBUTES v16; // [rsp+58h] [rbp-20h]
	__int64 v17; // [rsp+60h] [rbp-18h]

	if ((unsigned int)sub_1407E26C0())
	{
		ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
		CreateFile2 = GetProcAddress(ModuleHandleW, "CreateFile2");
		if (!CreateFile2)
			return -1i64;
	}
	else
	{
		CreateFile2 = v14;
	}
	if (!(unsigned int)sub_1407E26C0())
		return (__int64)CreateFileW(
			lpFileName,
			dwDesiredAccess,
			dwShareMode,
			lpSecurityAttributes,
			dwCreationDisposition,
			a7 | a6,
			0i64);
	v15[3] = 0;
	v17 = 0i64;
	v15[1] = a6;
	v15[0] = 32;
	v15[2] = a7;
	v16 = lpSecurityAttributes;
	return ((__int64(__fastcall*)(LPCWSTR, _QWORD, _QWORD, _QWORD, int*))CreateFile2)(
		lpFileName,
		dwDesiredAccess,
		dwShareMode,
		dwCreationDisposition,
		v15);
}
// 1407F4900: variable 'v14' is possibly undefined

