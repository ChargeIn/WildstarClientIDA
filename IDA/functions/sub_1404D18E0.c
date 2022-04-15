#include "../winhttp.h"

//----- (00000001404D18E0) ----------------------------------------------------
__int64 __fastcall sub_1404D18E0(__int64 a1, _DWORD* a2)
{
	__int64 v2; // rsi
	__int64 v4; // rdx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rdi
	__int64 v8; // r8
	__int64 v9; // rdx
	__int64 v10; // rbx
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // r9
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v17; // [rsp+40h] [rbp+8h]

	v2 = qword_140C65A38;
	v4 = *(_QWORD*)(qword_140C65A38 + 160);
	v5 = v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < *a2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v4 || (v17 = v5, *a2 < *(_DWORD*)(v5 + 32)))
		v17 = *(_QWORD*)(qword_140C65A38 + 160);
	if (v17 != v4)
	{
		v7 = *(_QWORD*)(v17 + 40);
		sub_1404D13A0(v7, a2[2], a2[1], a2[3]);
		v8 = v2 + 8i64 * *(int*)(*(_QWORD*)(*(_QWORD*)(v7 + 8) + 8i64) + 4i64);
		v9 = *(_QWORD*)(v8 + 184);
		if (a2[4])
		{
			if (!v9 || **(_DWORD**)(*(_QWORD*)(v9 + 8) + 8i64) != *a2)
			{
				v10 = 0i64;
				if (v9)
					v10 = *(_QWORD*)(v9 + 8);
				v11 = qword_140C65898;
				*(_QWORD*)(v8 + 184) = v7;
				v12 = *(_QWORD*)(v7 + 8);
				if (v12)
					v13 = *(unsigned int*)(*(_QWORD*)(v12 + 8) + 4i64);
				else
					v13 = 5i64;
				sub_1400EA3E0(*(_QWORD*)(v11 + 29504), "RewardTrackActive", "iww", v13, v12, v10);
				v14 = *(_QWORD*)(qword_140C65898 + 32736);
				if (v14 && *(_QWORD*)(v14 + 24) && (unsigned int)sub_1400480B0(v14))
					sub_140435810(v15, *(_QWORD*)(v7 + 8), v10);
			}
		}
	}
	return 0i64;
}
// 1404D1A26: variable 'v15' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65A38: using guessed type __int64 qword_140C65A38;

