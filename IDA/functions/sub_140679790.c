//----- (0000000140679790) ----------------------------------------------------
__int64 __fastcall sub_140679790(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rax
	__int64 v5; // rax
	__int64 v6; // rcx
	unsigned __int64* v7; // rdx
	unsigned __int64 v8; // r8
	__int16* v9; // rax
	__int64 v11; // [rsp+20h] [rbp-28h] BYREF
	__int64 v12; // [rsp+28h] [rbp-20h]

	if (!qword_140C65970
		|| !*(_QWORD*)(qword_140C65898 + 120)
		|| (v2 = sub_140056AB0(a1, 1u)) == 0
		|| (v3 = *(_QWORD*)(v2 + 8)) == 0
		|| (v4 = *(_QWORD*)(v3 + 8)) == 0)
	{
		v7 = (unsigned __int64*)sub_14018F0E0(&v11, word_1409F4BCC)[1];
		if (v7)
		{
			v8 = -1i64;
			do
				++v8;
			while (*((_BYTE*)v7 + v8));
			goto LABEL_19;
		}
		goto LABEL_16;
	}
	v5 = sub_14024DB80(*(_DWORD*)(*(_QWORD*)v4 + 16i64));
	if (v5)
	{
		v9 = sub_14034BDD0(v6, *(_DWORD*)(v5 + 4));
		v7 = (unsigned __int64*)sub_14018F0E0(&v11, (unsigned __int16*)v9)[1];
		if (v7)
		{
			v8 = -1i64;
			do
				++v8;
			while (*((_BYTE*)v7 + v8));
			goto LABEL_19;
		}
	LABEL_16:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		goto LABEL_20;
	}
	v7 = (unsigned __int64*)sub_14018F0E0(&v11, word_1409F4B64)[1];
	if (!v7)
		goto LABEL_16;
	v8 = -1i64;
	do
		++v8;
	while (*((_BYTE*)v7 + v8));
LABEL_19:
	sub_140058710((__int64)a1, v7, v8);
LABEL_20:
	if (v12)
		sub_14018B900(v12, 0);
	return 1i64;
}
// 140679822: variable 'v6' is possibly undefined
// 1409F4B64: using guessed type unsigned __int16 word_1409F4B64[40];
// 1409F4BCC: using guessed type unsigned __int16 word_1409F4BCC[28];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;
