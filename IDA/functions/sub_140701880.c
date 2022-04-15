#include "../winhttp.h"

//----- (0000000140701880) ----------------------------------------------------
__int64 __fastcall sub_140701880(_QWORD* a1)
{
	unsigned int v2; // eax
	__int64 v3; // rax
	unsigned __int64 v4; // rcx
	unsigned __int16* v5; // rdx
	unsigned __int64* v6; // rdx
	unsigned __int64 v7; // r8
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	__int64 v10; // [rsp+28h] [rbp-20h]

	v2 = sub_140056D60(a1, 1u);
	v3 = sub_140240F80(v2);
	if (!v3)
	{
		v6 = (unsigned __int64*)sub_14018F0E0(&v9, word_1409F84E4)[1];
		if (v6)
		{
			v7 = -1i64;
			do
				++v7;
			while (*((_BYTE*)v6 + v7));
			goto LABEL_15;
		}
	LABEL_12:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		goto LABEL_16;
	}
	v4 = *(_QWORD*)(v3 + 8);
	if (v4)
	{
		if (v4 <= qword_140C3FE70)
			v5 = (unsigned __int16*)(v4 + qword_140C3FE68);
		else
			v5 = 0i64;
	}
	else
	{
		v5 = 0i64;
	}
	v6 = (unsigned __int64*)sub_14018F0E0(&v9, v5)[1];
	if (!v6)
		goto LABEL_12;
	v7 = -1i64;
	do
		++v7;
	while (*((_BYTE*)v6 + v7));
LABEL_15:
	sub_140058710((__int64)a1, v6, v7);
LABEL_16:
	if (v10)
		sub_14018B900(v10, 0);
	return 1i64;
}
// 1409F84E4: using guessed type unsigned __int16 word_1409F84E4[2];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

