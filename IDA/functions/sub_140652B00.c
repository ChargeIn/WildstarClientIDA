//----- (0000000140652B00) ----------------------------------------------------
__int64 __fastcall sub_140652B00(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	unsigned __int64* v4; // rdx
	unsigned __int64 v5; // r8
	unsigned __int16* v6; // rax
	unsigned __int16* v7; // rdx
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	__int64 v10; // [rsp+28h] [rbp-20h]

	v2 = (int*)sub_1406622C0(a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
	{
		v4 = (unsigned __int64*)sub_14018F0E0(&v9, word_1409F4434)[1];
		if (v4)
		{
			v5 = -1i64;
			do
				++v5;
			while (*((_BYTE*)v4 + v5));
			goto LABEL_18;
		}
		goto LABEL_15;
	}
	if (!*(_DWORD*)(v3 + 360))
	{
		v6 = *(unsigned __int16**)(v3 + 16);
		v7 = (unsigned __int16*)&word_140B7B704;
		if (v6)
			v7 = v6;
		v4 = (unsigned __int64*)sub_14018F0E0(&v9, v7)[1];
		if (v4)
		{
			v5 = -1i64;
			do
				++v5;
			while (*((_BYTE*)v4 + v5));
			goto LABEL_18;
		}
	LABEL_15:
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		goto LABEL_19;
	}
	v4 = (unsigned __int64*)sub_14018F0E0(&v9, *(unsigned __int16**)(v3 + 376))[1];
	if (!v4)
		goto LABEL_15;
	v5 = -1i64;
	do
		++v5;
	while (*((_BYTE*)v4 + v5));
LABEL_18:
	sub_140058710(a1, v4, v5);
LABEL_19:
	if (v10)
		sub_14018B900(v10, 0);
	return 1i64;
}
// 1409F4434: using guessed type unsigned __int16 word_1409F4434[24];
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C65898: using guessed type __int64 qword_140C65898;

