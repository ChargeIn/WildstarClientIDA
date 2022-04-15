#include "../winhttp.h"

//----- (000000014062A160) ----------------------------------------------------
void __fastcall sub_14062A160(__int64 a1, __m128* a2, __int64 a3, __int64 a4)
{
	__int64 v6; // rax
	int v7; // xmm2_4
	__int32 v8; // eax
	float v9; // [rsp+48h] [rbp+10h] BYREF

	if (a2 && a2[8].m128_i32[0] == 12)
	{
		if ((dword_140DC3E50 & 1) != 0)
		{
			v7 = dword_140DC3E54;
		}
		else
		{
			dword_140DC3E50 |= 1u;
			v6 = sub_140200220(0xEDu);
			if (v6)
			{
				v7 = *(_DWORD*)(v6 + 24);
				dword_140DC3E54 = v7;
			}
			else
			{
				v7 = 1112014848;
				dword_140DC3E54 = 1112014848;
			}
		}
		if (sub_14062B670(*(__m128**)(qword_140C65898 + 120), a2, *(float*)&v7, a4, &v9)
			&& (int)sub_14045A950((__int64)a2, *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 8i64)) >= 1
			&& v9 < *(float*)(a1 + 4))
		{
			v8 = a2->m128_i32[2];
			*(float*)(a1 + 4) = v9;
			*(_DWORD*)a1 = v8;
		}
	}
}
// 14062A1E9: variable 'a4' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC3E50: using guessed type int dword_140DC3E50;
// 140DC3E54: using guessed type int dword_140DC3E54;

