#include "../winhttp.h"

//----- (0000000140651BD0) ----------------------------------------------------
__int64 __fastcall sub_140651BD0(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	unsigned __int16* v4; // rax
	unsigned __int16* v5; // rdx
	unsigned __int64* v6; // rdx
	unsigned __int64 v7; // r8
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	__int64 v10; // [rsp+28h] [rbp-20h]

	v2 = (int*)sub_1406622C0(a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
	{
		v6 = (unsigned __int64*)sub_14018F0E0(&v9, word_1409F43D4)[1];
		if (v6)
		{
			v7 = -1i64;
			do
				++v7;
			while (*((_BYTE*)v6 + v7));
			goto LABEL_13;
		}
	LABEL_10:
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		goto LABEL_14;
	}
	v4 = *(unsigned __int16**)(v3 + 16);
	v5 = (unsigned __int16*)&word_140B7B704;
	if (v4)
		v5 = v4;
	v6 = (unsigned __int64*)sub_14018F0E0(&v9, v5)[1];
	if (!v6)
		goto LABEL_10;
	v7 = -1i64;
	do
		++v7;
	while (*((_BYTE*)v6 + v7));
LABEL_13:
	sub_140058710(a1, v6, v7);
LABEL_14:
	if (v10)
		sub_14018B900(v10, 0);
	return 1i64;
}
// 1409F43D4: using guessed type unsigned __int16 word_1409F43D4[32];
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C65898: using guessed type __int64 qword_140C65898;

