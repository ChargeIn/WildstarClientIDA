#include "../winhttp.h"

//----- (00000001404B4400) ----------------------------------------------------
__int64 __fastcall sub_1404B4400(__int64 a1, int* a2)
{
	__int64 v2; // rsi
	__int64 v4; // rdx
	__int64 v5; // rcx
	__int64 v6; // rax
	unsigned int v7; // eax
	__int64 v8; // rbx
	int* v9; // rbx
	__int64 v11; // [rsp+30h] [rbp+8h] BYREF

	v11 = a1;
	v2 = qword_140C659E8;
	v4 = *(_QWORD*)(qword_140C659E8 + 8);
	v5 = v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < (unsigned int)*a2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v4 || (v7 = *(_DWORD*)(v5 + 32), v11 = v5, *a2 < v7))
		v11 = v4;
	v8 = v11;
	if (v11 != v4)
	{
		sub_14018B900(*(_QWORD*)(v11 + 40), 0);
		v11 = v8;
		sub_1404B4510(v2, &v11);
	}
	if (a2[3])
	{
		v9 = sub_14018B280(16i64, 0);
		if (v9)
		{
			*(_QWORD*)v9 = 0i64;
			*((_QWORD*)v9 + 1) = 0i64;
		}
		else
		{
			v9 = 0i64;
		}
		*v9 = *a2;
		v9[1] = a2[1];
		v9[2] = a2[2];
		v9[3] = a2[3];
		*(_QWORD*)sub_140055BE0(v2, a2) = v9;
	}
	Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "ZoneMapUpdateHexGroup", byte_1409E9D84, a2);
	return 0i64;
}
// 1409E9D84: using guessed type _BYTE byte_1409E9D84[56];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659E8: using guessed type __int64 qword_140C659E8;

