#include "../winhttp.h"

//----- (000000014066B300) ----------------------------------------------------
__int64 __fastcall sub_14066B300(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rcx
	__int16* v7; // rax
	unsigned __int64* v8; // rdx
	unsigned __int64 v9; // r8
	__int64 v11; // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+28h] [rbp-20h]

	if (!*(_QWORD*)(qword_140C65898 + 120)
		|| (v2 = sub_140056AB0(a1, 1u)) == 0
		|| (v3 = *(_QWORD*)(v2 + 8)) == 0
		|| (v4 = *(_QWORD*)(v3 + 8)) == 0)
	{
		v8 = (unsigned __int64*)sub_14018F0E0(&v11, word_1409F499C)[1];
		if (v8)
		{
			v9 = -1i64;
			do
				++v9;
			while (*((_BYTE*)v8 + v9));
			goto LABEL_13;
		}
	LABEL_10:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		goto LABEL_14;
	}
	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 40i64))(v4);
	v7 = sub_14034BDD0(v6, *(_DWORD*)(v5 + 16));
	v8 = (unsigned __int64*)sub_14018F0E0(&v11, (unsigned __int16*)v7)[1];
	if (!v8)
		goto LABEL_10;
	v9 = -1i64;
	do
		++v9;
	while (*((_BYTE*)v8 + v9));
LABEL_13:
	sub_140058710((__int64)a1, v8, v9);
LABEL_14:
	if (v12)
		sub_14018B900(v12, 0);
	return 1i64;
}
// 14066B348: variable 'v6' is possibly undefined
// 1409F499C: using guessed type unsigned __int16 word_1409F499C[20];
// 140C65898: using guessed type __int64 qword_140C65898;

