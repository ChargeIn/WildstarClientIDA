#include "../winhttp.h"

//----- (00000001403C0A80) ----------------------------------------------------
__int64 __fastcall sub_1403C0A80(__int64 a1, unsigned int* a2)
{
	__int64 v3; // rdx
	__int64 v4; // rax
	__int64 v5; // r8
	__int64 v7; // [rsp+30h] [rbp+8h]

	v3 = *(_QWORD*)(a1 + 28584);
	v4 = *(_QWORD*)(v3 + 8);
	v5 = v3;
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < *a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v5 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v5 == v3 || (v7 = v5, *a2 < *(_DWORD*)(v5 + 32)))
		v7 = *(_QWORD*)(a1 + 28584);
	if (v7 != v3)
		*(_DWORD*)(*(_QWORD*)(v7 + 40) + 8i64) = *((unsigned __int8*)a2 + 4);
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PetStanceChanged", byte_140B66548, *a2);
	return 0i64;
}
// 140B66548: using guessed type _BYTE byte_140B66548[8];
// 140C65898: using guessed type __int64 qword_140C65898;

