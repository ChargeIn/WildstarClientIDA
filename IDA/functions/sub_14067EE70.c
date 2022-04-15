#include "../winhttp.h"

//----- (000000014067EE70) ----------------------------------------------------
__int64 __fastcall sub_14067EE70(_QWORD* a1)
{
	_QWORD** v2; // rax
	_QWORD** v3; // rdi
	__int64 v4; // rax
	__int64 v5; // rcx
	unsigned __int64* v6; // rdx
	unsigned __int64 v7; // r8
	__int16* v8; // rax
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]

	v2 = (_QWORD**)sub_14067B760(a1);
	v3 = v2;
	if (!v2 || *(_DWORD*)(*v2[6] + 12i64) != 13 || ((int(__fastcall*)(_QWORD**))(*v2)[26])(v2) < 2)
	{
		v6 = (unsigned __int64*)sub_14018F0E0(&v10, word_1409F5274)[1];
		if (v6)
		{
			v7 = -1i64;
			do
				++v7;
			while (*((_BYTE*)v6 + v7));
			goto LABEL_17;
		}
		goto LABEL_14;
	}
	v4 = sub_140721F50(*v3[6], *(_DWORD*)(*v3[6] + 20i64));
	if (v4)
	{
		v8 = sub_14034BDD0(v5, *(_DWORD*)(*(_QWORD*)(v4 + 8) + 36i64));
		v6 = (unsigned __int64*)sub_14018F0E0(&v10, (unsigned __int16*)v8)[1];
		if (v6)
		{
			v7 = -1i64;
			do
				++v7;
			while (*((_BYTE*)v6 + v7));
			goto LABEL_17;
		}
	LABEL_14:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		goto LABEL_18;
	}
	v6 = (unsigned __int64*)sub_14018F0E0(&v10, word_1409F522C)[1];
	if (!v6)
		goto LABEL_14;
	v7 = -1i64;
	do
		++v7;
	while (*((_BYTE*)v6 + v7));
LABEL_17:
	sub_140058710((__int64)a1, v6, v7);
LABEL_18:
	if (v11)
		sub_14018B900(v11, 0);
	return 1i64;
}
// 14067EEF6: variable 'v5' is possibly undefined
// 1409F522C: using guessed type unsigned __int16 word_1409F522C[2];
// 1409F5274: using guessed type unsigned __int16 word_1409F5274[2];

