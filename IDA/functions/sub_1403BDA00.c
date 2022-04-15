#include "../winhttp.h"

//----- (00000001403BDA00) ----------------------------------------------------
void __fastcall sub_1403BDA00(__int64 a1)
{
	int v2; // r8d
	unsigned __int64 v3; // rcx
	unsigned __int64 v4; // rdx
	__int64* v5; // rax
	__int64 v6; // rbx
	__int64 v7; // r9

	while (*(_QWORD*)(a1 + 25456))
	{
		v2 = **(_DWORD**)(a1 + 25448);
		if (!v2)
			goto LABEL_8;
		v3 = 0i64;
		v4 = *(_QWORD*)(qword_140C65898 + 2712);
		if (!v4)
			goto LABEL_8;
		v5 = *(__int64**)(qword_140C65898 + 2704);
		while (1)
		{
			v6 = *v5;
			if (*v5)
			{
				if (*(_DWORD*)(v6 + 64) == v2)
					break;
			}
			++v3;
			++v5;
			if (v3 >= v4)
				goto LABEL_8;
		}
		v7 = sub_1405A4B80(*v5, 1);
		if (v7)
			sub_1403BD8B0(a1, **(_DWORD**)(a1 + 25448), (__int64*)v6, v7);
		else
			LABEL_8:
		sub_1401C2F20(a1 + 25448, 0i64);
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

