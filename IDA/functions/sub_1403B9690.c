#include "../winhttp.h"

//----- (00000001403B9690) ----------------------------------------------------
__int64 __fastcall sub_1403B9690(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	__int64 v4; // rbx
	float v5; // xmm3_4
	__int64 v6; // r8
	__int64 v7; // rdi
	int v9; // [rsp+20h] [rbp-18h]

	v3 = sub_1403ACBB0(a1 + 160, *(_QWORD*)a2);
	v4 = v3;
	if (v3)
	{
		v5 = *(float*)(v3 + 132);
		v6 = *(_QWORD*)(v3 + 72);
		*(_DWORD*)(v3 + 132) = *(_DWORD*)(a2 + 8);
		v7 = *(_QWORD*)(qword_140C65898 + 29504);
		if (!v6)
			v6 = *(_QWORD*)(v3 + 64) + 8i64;
		v9 = sub_1403B5360(qword_140C65898, *(_QWORD*)(v3 + 64), v6, v5);
		sub_1400EA3E0(v7, "ItemDurabilityUpdate", byte_1409EAD0C, v4, v9);
	}
	return 0i64;
}
// 1409EAD0C: using guessed type _BYTE byte_1409EAD0C[24];
// 140C65898: using guessed type __int64 qword_140C65898;

