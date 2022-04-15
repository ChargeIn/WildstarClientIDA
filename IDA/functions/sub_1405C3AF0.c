#include "../winhttp.h"

//----- (00000001405C3AF0) ----------------------------------------------------
__int64 __fastcall sub_1405C3AF0(__int64 a1, _DWORD* a2)
{
	__int64 v2; // rbx
	__int64 v4; // rax
	int v5; // edx
	unsigned int v6; // edi
	__int64 v7; // rcx
	int v8; // eax
	__int64 v9; // rcx
	int v11; // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v13)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v14; // [rsp+38h] [rbp-10h]

	v2 = qword_140C65B98;
	if ((dword_140DC34E0 & 1) != 0)
	{
		v5 = dword_140DC34E4;
	}
	else
	{
		dword_140DC34E0 |= 1u;
		v4 = sub_140200220(0x26Au);
		if (v4)
		{
			v5 = *(_DWORD*)(v4 + 4);
			dword_140DC34E4 = v5;
		}
		else
		{
			v5 = 30000;
			dword_140DC34E4 = 30000;
		}
	}
	v6 = 0;
	v12 = v2;
	v11 = 0;
	v13 = sub_1405C4260;
	v14 = 0i64;
	sub_140195960(v2 + 192, v5, (__int64)&v11, 4);
	v7 = qword_140C65898;
	*(_DWORD*)(v2 + 168) = *a2;
	*(_DWORD*)(v2 + 172) = a2[1];
	v8 = a2[2];
	*(_QWORD*)(v2 + 180) = 0i64;
	*(_DWORD*)(v2 + 176) = v8;
	v9 = *(_QWORD*)(v7 + 29504);
	if (*(_DWORD*)(v2 + 336))
	{
		LOBYTE(v6) = a2[1] == 0;
		sub_1400EA3E0(v9, "MatchingGamePendingUpdate", "b", v6);
	}
	else
	{
		sub_1400EA3E0(v9, "MatchingGameReady", L"b", 1i64);
	}
	return 0i64;
}
// 1409EE9A4: using guessed type wchar_t aB_3[2];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;
// 140DC34E0: using guessed type int dword_140DC34E0;
// 140DC34E4: using guessed type int dword_140DC34E4;

