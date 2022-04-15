#include "../winhttp.h"

//----- (00000001402649D0) ----------------------------------------------------
__int64 __fastcall sub_1402649D0(char a1)
{
	int v2; // eax
	HMODULE v3; // rax
	HRESULT(__stdcall * DwmIsCompositionEnabled)(BOOL*); // rax
	int v5; // eax
	unsigned int v6; // ecx
	unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

	if ((a1 & 4) == 0)
		return 0i64;
	if (dword_140C6569C)
	{
		DwmIsCompositionEnabled = (HRESULT(__stdcall*)(BOOL*))qword_140C656E0;
	}
	else
	{
		if ((dword_140C8E0E8 & 1) != 0)
		{
			v2 = dword_140C8E0EC;
		}
		else
		{
			dword_140C8E0E8 |= 1u;
			v2 = sub_140193B70(6u, 0, 0);
			dword_140C8E0EC = v2;
		}
		if (v2 && !sub_140193C40() && (v3 = sub_140193770((__int64)L"dwmapi.dll")) != 0i64)
		{
			DwmIsCompositionEnabled = (HRESULT(__stdcall*)(BOOL*))GetProcAddress(v3, "DwmIsCompositionEnabled");
			dword_140C6569C = 1;
			qword_140C656E0 = (__int64)DwmIsCompositionEnabled;
		}
		else
		{
			DwmIsCompositionEnabled = (HRESULT(__stdcall*)(BOOL*))qword_140C656E0;
			dword_140C6569C = 1;
		}
	}
	if (!DwmIsCompositionEnabled)
		return 0i64;
	v5 = ((__int64(__fastcall*)(unsigned int*))DwmIsCompositionEnabled)(&v7);
	v6 = v7;
	if (v5 < 0)
		return 0;
	return v6;
}
// 140AE4C48: using guessed type wchar_t aDwmapiDll[11];
// 140C6569C: using guessed type int dword_140C6569C;
// 140C656E0: using guessed type __int64 qword_140C656E0;
// 140C8E0E8: using guessed type int dword_140C8E0E8;
// 140C8E0EC: using guessed type int dword_140C8E0EC;

