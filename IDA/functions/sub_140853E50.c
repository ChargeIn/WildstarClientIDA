#include "../winhttp.h"

//----- (0000000140853E50) ----------------------------------------------------
__int64 __fastcall sub_140853E50(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // rdx
	unsigned __int64 v6; // rax
	unsigned __int64 v7; // rcx
	__int64 result; // rax
	int v9; // ebp
	char v10; // [rsp+30h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a2 + 388);
	if (*(_BYTE*)(a1 + 26))
		v6 = sub_140850C90((_QWORD*)a1, v3, &v10);
	else
		v6 = sub_140850BA0((_QWORD*)a1, v3, &v10);
	if (v10)
	{
		v7 = *(_QWORD*)(a1 + 8) - 8i64;
		if (v6 < v7)
			qmemcpy((void*)v6, (const void*)(v6 + 8), 8 * (((v7 - v6 - 1) >> 3) + 1));
		*(_QWORD*)(a1 + 8) -= 8i64;
	}
	result = *(_QWORD*)a1;
	if (*(_QWORD*)(a1 + 8) == *(_QWORD*)a1)
	{
		v9 = a3 - 1;
		if (v9)
		{
			if (v9 == 1)
				return sub_1408447F0(a1);
		}
		else
		{
			return sub_1408447A0(a1);
		}
	}
	return result;
}

