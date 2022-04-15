#include "../winhttp.h"

//----- (00000001407A8200) ----------------------------------------------------
__int64 __fastcall sub_1407A8200(__int64 a1, int a2, int a3)
{
	unsigned __int64 v3; // r10
	int v4; // eax
	__int64 v6; // r9
	__int64 v7; // rcx
	__int64 result; // rax

	v3 = *(_QWORD*)(a1 + 144);
	v4 = 0;
	if (v3)
	{
		v6 = 0i64;
		while (**(_DWORD**)(*(_QWORD*)(a1 + 136) + 8 * v6) != a2)
		{
			v6 = (unsigned int)++v4;
			if ((unsigned int)v4 >= v3)
				goto LABEL_5;
		}
	}
	else
	{
	LABEL_5:
		v4 = -1;
	}
	v7 = v4;
	result = *(_QWORD*)(a1 + 136);
	*(_DWORD*)(*(_QWORD*)(result + 8 * v7) + 144i64) = a3;
	return result;
}

