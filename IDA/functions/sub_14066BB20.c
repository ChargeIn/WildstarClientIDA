#include "../winhttp.h"

//----- (000000014066BB20) ----------------------------------------------------
__int64 __fastcall sub_14066BB20(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned int v4; // eax
	__int64 v5; // rax
	__int64 v6; // rdi
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rcx
	unsigned __int64* v10; // rdx
	unsigned __int64 v11; // r8
	__int16* v12; // rax
	__int64 v14; // [rsp+20h] [rbp-28h] BYREF
	__int64 v15; // [rsp+28h] [rbp-20h]

	if (!*(_QWORD*)(qword_140C65898 + 120)
		|| (v2 = sub_140056AB0(a1, 1u)) == 0
		|| (v3 = *(_QWORD*)(v2 + 8)) == 0
		|| (v4 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 8) + 48i64))(*(_QWORD*)(v3 + 8)),
			v5 = sub_14048D310(qword_140C65990, v4),
			(v6 = v5) == 0)
		|| !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v5 + 72i64))(v5))
	{
		v10 = (unsigned __int64*)sub_14018F0E0(&v14, word_1409F4984)[1];
		if (v10)
		{
			v11 = -1i64;
			do
				++v11;
			while (*((_BYTE*)v10 + v11));
			goto LABEL_19;
		}
		goto LABEL_16;
	}
	v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 32i64))(v6);
	v8 = sub_14024DB80(*(_DWORD*)(v7 + 128));
	if (v8)
	{
		v12 = sub_14034BDD0(v9, *(_DWORD*)(v8 + 4));
		v10 = (unsigned __int64*)sub_14018F0E0(&v14, (unsigned __int16*)v12)[1];
		if (v10)
		{
			v11 = -1i64;
			do
				++v11;
			while (*((_BYTE*)v10 + v11));
			goto LABEL_19;
		}
	LABEL_16:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		goto LABEL_20;
	}
	v10 = (unsigned __int64*)sub_14018F0E0(&v14, word_1409F4934)[1];
	if (!v10)
		goto LABEL_16;
	v11 = -1i64;
	do
		++v11;
	while (*((_BYTE*)v10 + v11));
LABEL_19:
	sub_140058710((__int64)a1, v10, v11);
LABEL_20:
	if (v15)
		sub_14018B900(v15, 0);
	return 1i64;
}
// 14066BBDF: variable 'v9' is possibly undefined
// 1409F4934: using guessed type unsigned __int16 word_1409F4934[24];
// 1409F4984: using guessed type unsigned __int16 word_1409F4984[12];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65990: using guessed type __int64 qword_140C65990;

