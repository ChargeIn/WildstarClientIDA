//----- (00000001406AE240) ----------------------------------------------------
__int64 __fastcall sub_1406AE240(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	unsigned __int64 v4; // rdx
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // rcx
	unsigned __int64* v8; // rdx
	unsigned __int64 v9; // r8
	__int16* v10; // rax
	__int64 v12; // [rsp+20h] [rbp-28h] BYREF
	__int64 v13; // [rsp+28h] [rbp-20h]

	v2 = sub_140056AB0(a1, 1u);
	if (!v2
		|| !qword_140C659F0
		|| ((v4 = *(_QWORD*)(v2 + 16)) == 0 ? (v5 = sub_1404C9B90(v3, *(_DWORD*)(v2 + 8))) : (v5 = sub_1404B6E50(v3, v4)),
			!v5))
	{
		v8 = (unsigned __int64*)sub_14018F0E0(&v12, word_1409F6904)[1];
		if (v8)
		{
			v9 = -1i64;
			do
				++v9;
			while (*((_BYTE*)v8 + v9));
			goto LABEL_20;
		}
		goto LABEL_17;
	}
	v6 = sub_140203DA0(*(_DWORD*)(v5 + 96));
	if (v6)
	{
		v10 = sub_14034BDD0(v7, *(_DWORD*)(v6 + 12));
		v8 = (unsigned __int64*)sub_14018F0E0(&v12, (unsigned __int16*)v10)[1];
		if (v8)
		{
			v9 = -1i64;
			do
				++v9;
			while (*((_BYTE*)v8 + v9));
			goto LABEL_20;
		}
	LABEL_17:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		goto LABEL_21;
	}
	v8 = (unsigned __int64*)sub_14018F0E0(&v12, word_1409F6924)[1];
	if (!v8)
		goto LABEL_17;
	v9 = -1i64;
	do
		++v9;
	while (*((_BYTE*)v8 + v9));
LABEL_20:
	sub_140058710((__int64)a1, v8, v9);
LABEL_21:
	if (v13)
		sub_14018B900(v13, 0);
	return 1i64;
}
// 1406AE27A: variable 'v3' is possibly undefined
// 1406AE2CF: variable 'v7' is possibly undefined
// 1409F6904: using guessed type unsigned __int16 word_1409F6904[16];
// 1409F6924: using guessed type unsigned __int16 word_1409F6924[44];
// 140C659F0: using guessed type __int64 qword_140C659F0;

