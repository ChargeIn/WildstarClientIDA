#include "../winhttp.h"

//----- (000000014048D120) ----------------------------------------------------
_QWORD* __fastcall sub_14048D120(__int64 a1, unsigned int a2)
{
	__int64 v3; // rdx
	__int64 v5; // rax
	__int64 v6; // r8
	__int64 v7; // rbx
	__int64 v9; // [rsp+40h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 48);
	v5 = *(_QWORD*)(v3 + 8);
	v6 = v3;
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v6 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v6 == v3 || (v9 = v6, a2 < *(_DWORD*)(v6 + 32)))
		v9 = v3;
	v7 = v9;
	if (v9 != v3)
	{
		Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "ChallengeAbandon", byte_1409E9514, a2, &unk_1409F0584);
		sub_14048D7A0(a1, a2);
		sub_14018B900(*(_QWORD*)(v7 + 40), 0);
		v9 = v7;
		sub_14048FB60(a1 + 40, &v9);
	}
	return sub_14048D200(a1);
}
// 1409E9514: using guessed type _BYTE byte_1409E9514[24];
// 140C65898: using guessed type __int64 qword_140C65898;

