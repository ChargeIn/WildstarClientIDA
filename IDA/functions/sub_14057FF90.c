#include "../winhttp.h"

//----- (000000014057FF90) ----------------------------------------------------
__int64 __fastcall sub_14057FF90(__int64 a1, __int128* a2)
{
	__int128 v2; // xmm0
	unsigned __int64 v3; // rdi
	__int64 v4; // rbx
	unsigned __int64 v5; // rdx
	unsigned __int64 v6; // r9
	unsigned __int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rcx

	v2 = *a2;
	v3 = *(_QWORD*)(a1 + 816);
	v4 = *(_QWORD*)(a1 + 808);
	v5 = 0i64;
	v6 = v3;
	if (v3)
	{
		while (1)
		{
			v7 = v5 + ((v6 - v5) >> 1);
			v8 = *(_QWORD*)(v4 + 8 * v7);
			if ((_DWORD)v2 == *(_DWORD*)v8 && *((_QWORD*)&v2 + 1) == *(_QWORD*)(v8 + 8))
				break;
			if ((unsigned int)v2 < *(_DWORD*)v8
				|| (unsigned int)v2 <= *(_DWORD*)v8 && *((_QWORD*)&v2 + 1) < *(_QWORD*)(v8 + 8))
			{
				v6 = v5 + ((v6 - v5) >> 1);
			}
			else
			{
				v5 = v7 + 1;
			}
			if (v5 >= v6)
				goto LABEL_10;
		}
	}
	else
	{
	LABEL_10:
		v7 = v5;
	}
	if (v7 < v3
		&& (v9 = *(_QWORD*)(v4 + 8 * v7), *(_DWORD*)v9 == (_DWORD)v2)
		&& *(_QWORD*)(v9 + 8) == *((_QWORD*)&v2 + 1))
	{
		return *(_QWORD*)(v4 + 8 * v7);
	}
	else
	{
		return 0i64;
	}
}

