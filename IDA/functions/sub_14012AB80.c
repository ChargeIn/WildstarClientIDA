#include "../winhttp.h"

//----- (000000014012AB80) ----------------------------------------------------
__int64 __fastcall sub_14012AB80(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rsi
	unsigned int v4; // ebx
	__int64 v5; // rdi
	int v7[100]; // [rsp+20h] [rbp-1A8h] BYREF

	v2 = sub_14012AAF0(a1, 1u);
	v3 = v2;
	if (v2 && !*(_QWORD*)(v2 + 656))
	{
		*(_QWORD*)(v2 + 656) = sub_1401A7740(v2 + 16, (int*)L"Tooltip");
		if ((unsigned int)sub_140056D60(a1, 2u))
		{
			v4 = sub_1400584E0((__int64)a1, 2);
			v5 = sub_1401A6C70(*(_QWORD*)(v3 + 656), (int*)L"Width");
			sub_1401A4C20(v7, 0xC8ui64, (__int64)L"%d", v4);
			sub_1401A4C50(v5 + 32, v7);
		}
		sub_1401A5A70((_QWORD*)(v3 + 16), *(_QWORD**)(v3 + 656));
	}
	return 0i64;
}
// 1409E41F4: using guessed type wchar_t aD_19[3];
// 140A20650: using guessed type wchar_t aTooltip_0[8];
// 140A31898: using guessed type wchar_t aWidth[6];
// 14012AB80: using guessed type int var_1A8[100];

