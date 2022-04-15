#include "../winhttp.h"

//----- (0000000140487E40) ----------------------------------------------------
__int64 __fastcall sub_140487E40(__int64 a1, int a2, unsigned int* a3, unsigned int a4, int a5, int a6, _DWORD* a7)
{
	_DWORD* v7; // rsi
	unsigned int v8; // ebx
	__int64 v13; // rax
	int v14; // r8d
	__int64 result; // rax

	v7 = a7;
	v8 = 0;
	if (a7)
		*a7 = 0;
	v13 = *(_QWORD*)a1;
	LODWORD(a7) = 0;
	if (!v13)
		goto LABEL_12;
	v14 = *(_DWORD*)(v13 + 72);
	if (v14 && (unsigned int)sub_1403C9450(a1, *(_DWORD*)(qword_140C65898 + 29008), v14))
	{
		if (*(_QWORD*)(qword_140C65898 + 120))
		{
			sub_1403F7E50(qword_140C65898, a3, a4, (unsigned int*)&a7, 0i64, 0, 0i64);
			return (unsigned int)a7;
		}
		return v8;
	}
	if ((*(_BYTE*)(*(_QWORD*)a1 + 4i64) & 1) == 0)
	{
		result = sub_140487F50(a1, a5, v7);
		if ((_DWORD)result)
			return result;
		goto LABEL_12;
	}
	result = sub_1404880F0(a1, a2, a5);
	if (!(_DWORD)result)
	{
	LABEL_12:
		if (!a6)
			return (unsigned int)sub_1404883B0(a1, a3, a4, v7);
		return v8;
	}
	return result;
}
// 140487F25: variable 'a1' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

