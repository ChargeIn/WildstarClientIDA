#include "../winhttp.h"

//----- (0000000140193B70) ----------------------------------------------------
BOOL __fastcall sub_140193B70(unsigned __int16 a1, unsigned __int16 a2, WORD a3)
{
	DWORD v3; // ebx
	DWORD v5; // edi
	ULONGLONG v6; // rax
	ULONGLONG v7; // rax
	ULONGLONG v8; // rax
	DWORDLONG v9; // rax
	struct _OSVERSIONINFOEXW VersionInformation; // [rsp+20h] [rbp-148h] BYREF

	v3 = a1;
	v5 = a2;
	sub_1407E4830((int*)&VersionInformation.dwMajorVersion, 0i64, 0x118ui64);
	VersionInformation.dwOSVersionInfoSize = 284;
	VersionInformation.dwMajorVersion = v3;
	VersionInformation.dwMinorVersion = v5;
	VersionInformation.wServicePackMajor = a3;
	v6 = VerSetConditionMask(0i64, 2u, 3u);
	v7 = VerSetConditionMask(v6, 1u, 3u);
	v8 = VerSetConditionMask(v7, 0x20u, 3u);
	v9 = VerSetConditionMask(v8, 0x10u, 3u);
	return VerifyVersionInfoW(&VersionInformation, 0x33u, v9);
}

