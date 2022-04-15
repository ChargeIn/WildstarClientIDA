#include "../winhttp.h"

//----- (00000001407EA540) ----------------------------------------------------
__int64 __fastcall sub_1407EA540(unsigned __int8* a1, __int64 a2)
{
	__int64 v2; // rdx
	unsigned __int8 v3; // al
	__int64 v4; // rax

	v2 = a2 - (_QWORD)a1;
	if (((unsigned __int8)a1 & 7) != 0)
	{
	LABEL_2:
		while (1)
		{
			v3 = *a1;
			if (*a1 != a1[v2])
				return -(__int64)(v3 < a1[v2]) | 1;
			++a1;
			if (!v3)
				return 0i64;
			if (((unsigned __int8)a1 & 7) == 0)
				goto LABEL_5;
		}
	}
	else
	{
		do
		{
		LABEL_5:
			if ((((_WORD)a1 + (_WORD)v2) & 0xFFFu) > 0xFF8)
				goto LABEL_2;
			v4 = *(_QWORD*)a1;
			if (*(_QWORD*)a1 != *(_QWORD*)&a1[v2])
				goto LABEL_2;
			a1 += 8;
		} while (((v4 - 0x101010101010101i64) & ~v4 & 0x8080808080808080ui64) == 0);
		return 0i64;
	}
}

