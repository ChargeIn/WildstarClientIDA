#include "../winhttp.h"

//----- (0000000140652910) ----------------------------------------------------
__int64 __fastcall sub_140652910(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	unsigned __int16* v4; // rdx
	unsigned __int64* v5; // rdx
	unsigned __int64 v6; // r8
	__int64 v8; // [rsp+20h] [rbp-28h] BYREF
	__int64 v9; // [rsp+28h] [rbp-20h]

	v2 = (int*)sub_1406622C0(a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
	{
		v5 = (unsigned __int64*)sub_14018F0E0(&v8, word_1409F446C)[1];
		if (v5)
		{
			v6 = -1i64;
			do
				++v6;
			while (*((_BYTE*)v5 + v6));
			goto LABEL_13;
		}
	LABEL_10:
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		goto LABEL_14;
	}
	v4 = *(unsigned __int16**)(v3 + 144);
	if (!v4)
		v4 = *(unsigned __int16**)(v3 + 176);
	v5 = (unsigned __int64*)sub_14018F0E0(&v8, v4)[1];
	if (!v5)
		goto LABEL_10;
	v6 = -1i64;
	do
		++v6;
	while (*((_BYTE*)v5 + v6));
LABEL_13:
	sub_140058710(a1, v5, v6);
LABEL_14:
	if (v9)
		sub_14018B900(v9, 0);
	return 1i64;
}
// 1409F446C: using guessed type unsigned __int16 word_1409F446C[12];
// 140C65898: using guessed type __int64 qword_140C65898;

