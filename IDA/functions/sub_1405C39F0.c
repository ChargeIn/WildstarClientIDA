#include "../winhttp.h"

//----- (00000001405C39F0) ----------------------------------------------------
__int64 __fastcall sub_1405C39F0(__int64 a1, _DWORD* a2)
{
	__int64 v2; // rbx
	__int64 v4; // rax
	int v5; // edx
	__int64 v6; // rcx
	unsigned int v7; // eax
	int v9; // [rsp+20h] [rbp-28h] BYREF
	__int64 v10; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v11)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v12; // [rsp+38h] [rbp-10h]

	v2 = qword_140C65B98;
	if ((dword_140DC34D4 & 1) != 0)
	{
		if (dword_140DC34DC)
		{
			v5 = dword_140DC34D8;
			goto LABEL_8;
		}
	}
	else
	{
		dword_140DC34D4 |= 1u;
	}
	dword_140DC34DC = 1;
	v4 = sub_140200220(0x26Au);
	if (v4)
	{
		v5 = *(_DWORD*)(v4 + 4);
		dword_140DC34D8 = v5;
	}
	else
	{
		v5 = 0;
		dword_140DC34D8 = 0;
	}
LABEL_8:
	v9 = 0;
	v10 = v2;
	v11 = sub_1405C4260;
	v12 = 0i64;
	sub_140195960(v2 + 192, v5, (__int64)&v9, 4);
	v6 = qword_140C65898;
	*(_DWORD*)(v2 + 168) = *a2;
	*(_DWORD*)(v2 + 172) = a2[1];
	v7 = a2[2];
	*(_DWORD*)(v2 + 176) = 0;
	*(_QWORD*)(v2 + 180) = v7;
	sub_1400EA3E0(*(_QWORD*)(v6 + 29504), "MatchingGameReady", L"b", 0i64);
	return 0i64;
}
// 1409EE9A4: using guessed type wchar_t aB_3[2];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;
// 140DC34D4: using guessed type int dword_140DC34D4;
// 140DC34D8: using guessed type int dword_140DC34D8;
// 140DC34DC: using guessed type int dword_140DC34DC;

