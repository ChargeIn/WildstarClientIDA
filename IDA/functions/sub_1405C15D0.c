#include "../winhttp.h"

//----- (00000001405C15D0) ----------------------------------------------------
__int64 __fastcall sub_1405C15D0(unsigned int* a1)
{
	unsigned int v2; // ecx
	__int64 v3; // rax
	__int64 v4; // rsi
	unsigned int v5; // ebx
	__int64 v6; // rax
	int v7; // ecx
	unsigned int v8; // r8d
	int v9; // eax
	int v10; // edx
	int v11; // r9d

	v2 = *a1;
	if (!v2)
		return 0i64;
	v3 = sub_140215240(v2);
	if (!v3)
		return 0i64;
	v4 = sub_140214E00(*(_DWORD*)(v3 + 16));
	if (!v4)
		return 0i64;
	v5 = 0;
	if ((dword_140DC34CC & 1) != 0)
	{
		v7 = dword_140DC34D0;
	}
	else
	{
		dword_140DC34CC |= 1u;
		v6 = sub_140200220(0x290u);
		if (v6)
		{
			v7 = *(_DWORD*)(v6 + 4);
			dword_140DC34D0 = v7;
		}
		else
		{
			v7 = 0;
			dword_140DC34D0 = 0;
		}
	}
	v8 = a1[3];
	v9 = 0;
	v10 = dword_140C636A8 - a1[5];
	if (v8 == 1 && (v11 = *(_DWORD*)(v4 + 32)) != 0 || v8 == 2 && (v11 = *(_DWORD*)(v4 + 36)) != 0)
	{
		if (v11 - v10 > 0)
			return (unsigned int)(v11 - v10);
		return v5;
	}
	else
	{
		if (v8 == 3)
			v9 = v7 - v10;
		if (v9 > 0)
			return (unsigned int)v9;
		return v5;
	}
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140DC34CC: using guessed type int dword_140DC34CC;
// 140DC34D0: using guessed type int dword_140DC34D0;

