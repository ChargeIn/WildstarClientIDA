#include "../winhttp.h"

//----- (00000001406B85F0) ----------------------------------------------------
__int64 __fastcall sub_1406B85F0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	unsigned __int64 v5; // rcx
	unsigned __int16* v6; // rdx
	unsigned __int64* v7; // rdx
	unsigned __int64 v8; // r8
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]

	v2 = sub_140056AB0(a1, 1u);
	if (!v2 || (v3 = *(_QWORD*)(v2 + 8)) == 0 || (v4 = *(_QWORD*)(v3 + 8)) == 0)
	{
		v7 = (unsigned __int64*)sub_14018F0E0(&v10, word_1409F6C74)[1];
		if (v7)
		{
			v8 = -1i64;
			do
				++v8;
			while (*((_BYTE*)v7 + v8));
			goto LABEL_17;
		}
	LABEL_14:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		goto LABEL_18;
	}
	v5 = *(_QWORD*)(v4 + 48);
	if (v5)
	{
		if (v5 <= qword_140C3FE70)
			v6 = (unsigned __int16*)(v5 + qword_140C3FE68);
		else
			v6 = 0i64;
	}
	else
	{
		v6 = 0i64;
	}
	v7 = (unsigned __int64*)sub_14018F0E0(&v10, v6)[1];
	if (!v7)
		goto LABEL_14;
	v8 = -1i64;
	do
		++v8;
	while (*((_BYTE*)v7 + v8));
LABEL_17:
	sub_140058710((__int64)a1, v7, v8);
LABEL_18:
	if (v11)
		sub_14018B900(v11, 0);
	return 1i64;
}
// 1409F6C74: using guessed type unsigned __int16 word_1409F6C74[16];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

