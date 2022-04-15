#include "../winhttp.h"

//----- (0000000140581160) ----------------------------------------------------
void __fastcall sub_140581160(__int64 a1, __int128* a2)
{
	__int128 v2; // xmm0
	unsigned __int64 v3; // rdi
	__int64 v4; // rsi
	__int64 v5; // r11
	unsigned __int64 v6; // rdx
	unsigned __int64 v7; // r9
	unsigned __int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rax

	v2 = *a2;
	v3 = *(_QWORD*)(a1 + 816);
	v4 = a1 + 808;
	v5 = *(_QWORD*)(a1 + 808);
	v6 = 0i64;
	v7 = v3;
	if (v3)
	{
		while (1)
		{
			v8 = v6 + ((v7 - v6) >> 1);
			v9 = *(_QWORD*)(v5 + 8 * v8);
			if ((_DWORD)v2 == *(_DWORD*)v9 && *((_QWORD*)&v2 + 1) == *(_QWORD*)(v9 + 8))
				break;
			if ((unsigned int)v2 < *(_DWORD*)v9
				|| (unsigned int)v2 <= *(_DWORD*)v9 && *((_QWORD*)&v2 + 1) < *(_QWORD*)(v9 + 8))
			{
				v7 = v6 + ((v7 - v6) >> 1);
			}
			else
			{
				v6 = v8 + 1;
			}
			if (v6 >= v7)
				goto LABEL_10;
		}
	}
	else
	{
	LABEL_10:
		v8 = v6;
	}
	if (v8 < v3)
	{
		v10 = *(_QWORD*)(v5 + 8 * v8);
		if (*(_DWORD*)v10 == (_DWORD)v2 && *(_QWORD*)(v10 + 8) == *((_QWORD*)&v2 + 1))
		{
			if (v10)
				sub_14057B7F0(*(_QWORD*)(v5 + 8 * v8));
			sub_140007270(v4, v8);
		}
	}
}

