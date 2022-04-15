#include "../winhttp.h"

//----- (000000014034C610) ----------------------------------------------------
signed int __fastcall sub_14034C610(double a1, __int64 a2, unsigned __int64 a3, _BYTE* a4)
{
	unsigned int v7; // eax
	signed int result; // eax
	LPCWSTR* v9; // rax
	int v10; // ebx
	__int64 v11; // [rsp+20h] [rbp-C8h] BYREF
	WCHAR LCData[64]; // [rsp+30h] [rbp-B8h] BYREF

	if (a4 && (*a4 & 2) != 0)
	{
		v7 = (unsigned __int8)a4[8];
	LABEL_8:
		v9 = (LPCWSTR*)sub_14018D540(&v11, (__int64)L"%.*lf", v7, a1);
		v10 = sub_14034C240(*v9, a2, a3, (__int64)a4);
		if (v11)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
		return v10;
	}
	if (GetLocaleInfoW(*(_DWORD*)(qword_140C7AAC0 + 12), 0x11u, LCData, 64))
	{
		v7 = sub_14018E820(LCData);
		goto LABEL_8;
	}
	result = GetLastError();
	if (result > 0)
		return (unsigned __int16)result | 0x80070000;
	return result;
}
// 140AF4850: using guessed type wchar_t aLf_0[6];
// 140C7AAC0: using guessed type __int64 qword_140C7AAC0;

