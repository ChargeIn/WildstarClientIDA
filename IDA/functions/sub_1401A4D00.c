#include "../winhttp.h"

//----- (00000001401A4D00) ----------------------------------------------------
_WORD* __fastcall sub_1401A4D00(__int64 a1, _WORD* a2, __int64 a3, int a4)
{
	__int16 v4; // bp
	unsigned __int64 v5; // rbx
	_WORD* v8; // rdi
	__int16 v11; // ax
	__int64 v12; // r10
	unsigned __int64 v13; // r8
	unsigned __int16* v14; // rax
	int v15; // r9d

	v4 = *(_WORD*)a3;
	v5 = 0i64;
	v8 = a2;
	if (*(_WORD*)a3)
	{
		do
			++v5;
		while (*(_WORD*)(a3 + 2 * v5));
	}
	v11 = *a2;
	if (!*a2)
		return 0i64;
	v12 = -a3;
	while (v11 != v4)
	{
	LABEL_14:
		v11 = v8[1];
		++v8;
		if (!v11)
			return 0i64;
	}
	v13 = 0i64;
	if (v5)
	{
		v14 = (unsigned __int16*)a3;
		while (1)
		{
			v15 = *(unsigned __int16*)((char*)v8 + (_QWORD)v14 + v12);
			if (v15 != *v14)
				goto LABEL_14;
			if ((_WORD)v15)
			{
				++v13;
				++v14;
				if (v13 < v5)
					continue;
			}
			break;
		}
	}
	if ((*(_DWORD*)a1 & 0x200) != 0)
		sub_14018B900(*(_QWORD*)(a1 + 8), 0);
	*(_QWORD*)(a1 + 8) = a2;
	*(_QWORD*)(a1 + 16) = v8;
	*(_DWORD*)a1 = a4 | 0x100;
	return &v8[v5];
}

