#include "../winhttp.h"

//----- (000000014045BDC0) ----------------------------------------------------
_DWORD* __fastcall sub_14045BDC0(__int64 a1, int a2, int a3, double a4)
{
	__int64 v5; // rdi
	unsigned int v8; // esi
	unsigned int v9; // ebp
	__int64 v10; // rcx
	__int64 v11; // r11
	__int64 v12; // rcx
	_DWORD* result; // rax
	__int64 v14; // rdx
	__int64 v15; // r8
	int v16; // [rsp+48h] [rbp+10h] BYREF

	v16 = a2;
	v5 = *(_QWORD*)(qword_140C65898 + 25744);
	v8 = 0;
	v9 = 0;
	if (v5)
	{
		v8 = *(_DWORD*)(v5 + 8);
		v9 = *(_DWORD*)(v5 + 264);
		if (a2 == v8)
		{
			if (*(_DWORD*)(a1 + 264) != v8 && a3 && v9 != *(_DWORD*)(a1 + 8))
				Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "TargetedByUnit", L"U", v9);
		}
		else if (*(_DWORD*)(a1 + 264) == v8 && (unsigned int)sub_14045BED0(a1, v8) && v9 == *(_DWORD*)(v10 + 8))
		{
			Apollo_LUAEvent(*(_QWORD*)(v11 + 29504), "UnTargetedByUnit", "U", v9);
		}
	}
	v12 = a1 + 328;
	if (a3)
	{
		result = sub_140032640(v12, &v16);
		*result = a3;
	}
	else
	{
		result = (_DWORD*)sub_140481460(v12, &v16);
	}
	if (v5 && a2 == v8 && v9 == *(_DWORD*)(a1 + 8))
		return (_DWORD*)sub_14055BAC0((_QWORD*)qword_140C65898, v14, v15, a4);
	return result;
}
// 14045BE23: conditional instruction was optimized away because rdi.8!=0
// 14045BE53: conditional instruction was optimized away because rdi.8!=0
// 14045BE4B: variable 'v10' is possibly undefined
// 14045BE66: variable 'v11' is possibly undefined
// 14045BEAB: variable 'v14' is possibly undefined
// 14045BEAB: variable 'v15' is possibly undefined
// 1409EDFA4: using guessed type wchar_t aU_12[2];
// 140C65898: using guessed type __int64 qword_140C65898;

