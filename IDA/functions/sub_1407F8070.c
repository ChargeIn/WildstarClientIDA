#include "../winhttp.h"

//----- (00000001407F8070) ----------------------------------------------------
__int64 __fastcall sub_1407F8070(_QWORD* a1, __int64 a2, unsigned __int64 a3)
{
	__int64 v3; // rdx
	unsigned __int8 v4; // al
	__int64 v5; // rax
	bool v6; // cc

	v3 = a2 - (_QWORD)a1;
	if (!a3)
		return 0i64;
	if (((unsigned __int8)a1 & 7) != 0)
		goto LABEL_3;
LABEL_7:
	while ((((_WORD)a1 + (_WORD)v3) & 0xFFFu) <= 0xFF8)
	{
		v5 = *a1;
		if (*a1 != *(_QWORD*)((char*)a1 + v3))
			break;
		++a1;
		v6 = a3 <= 8;
		a3 -= 8i64;
		if (v6 || ((v5 - 0x101010101010101i64) & ~v5 & 0x8080808080808080ui64) != 0)
			return 0i64;
	}
LABEL_3:
	while (1)
	{
		v4 = *(_BYTE*)a1;
		if (*(_BYTE*)a1 != *((_BYTE*)a1 + v3))
			return -(__int64)(v4 < *((_BYTE*)a1 + v3)) | 1;
		a1 = (_QWORD*)((char*)a1 + 1);
		if (!--a3 || !v4)
			return 0i64;
		if (((unsigned __int8)a1 & 7) == 0)
			goto LABEL_7;
	}
}

