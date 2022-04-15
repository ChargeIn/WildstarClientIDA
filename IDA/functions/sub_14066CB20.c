//----- (000000014066CB20) ----------------------------------------------------
__int64 __fastcall sub_14066CB20(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rdi
	__int64 v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rax
	__int16* v9; // rax
	unsigned __int64* v10; // rdx
	unsigned __int64 v11; // r8
	__int64 v13; // [rsp+20h] [rbp-28h] BYREF
	__int64 v14; // [rsp+28h] [rbp-20h]

	if (*(_QWORD*)(qword_140C65898 + 120) && (v2 = sub_140056AB0(a1, 1u)) != 0 && (v3 = *(_QWORD*)(v2 + 8)) != 0)
		v4 = sub_14066DAB0(*(_QWORD*)(*(_QWORD*)(v3 + 8) + 8i64), **(_DWORD**)(*(_QWORD*)(v3 + 8) + 8i64));
	else
		v4 = 0i64;
	if (!*(_QWORD*)(qword_140C65898 + 120)
		|| (v5 = sub_140056AB0(a1, 1u)) == 0
		|| (v7 = *(_QWORD*)(v5 + 8)) == 0
		|| (v8 = *(_QWORD*)(v7 + 8)) == 0
		|| !v4)
	{
		v10 = (unsigned __int64*)sub_14018F0E0(&v13, word_1409F4A7C)[1];
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
	v9 = sub_14034BDD0(v6, *(_DWORD*)(*(_QWORD*)(v8 + 8) + 4i64));
	v10 = (unsigned __int64*)sub_14018F0E0(&v13, (unsigned __int16*)v9)[1];
	if (!v10)
		goto LABEL_16;
	v11 = -1i64;
	do
		++v11;
	while (*((_BYTE*)v10 + v11));
LABEL_19:
	sub_140058710((__int64)a1, v10, v11);
LABEL_20:
	if (v14)
		sub_14018B900(v14, 0);
	return 1i64;
}
// 14066CBB5: variable 'v6' is possibly undefined
// 1409F4A7C: using guessed type unsigned __int16 word_1409F4A7C[36];
// 140C65898: using guessed type __int64 qword_140C65898;

