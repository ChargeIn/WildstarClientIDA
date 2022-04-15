//----- (0000000140652A40) ----------------------------------------------------
__int64 __fastcall sub_140652A40(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rax
	unsigned __int64* v4; // rdx
	unsigned __int64 v5; // r8
	__int64 v7; // [rsp+20h] [rbp-28h] BYREF
	__int64 v8; // [rsp+28h] [rbp-20h]

	v2 = (int*)sub_1406622C0(a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
	{
		v4 = (unsigned __int64*)sub_14018F0E0(&v7, word_1409F441C)[1];
		if (v4)
		{
			v5 = -1i64;
			do
				++v5;
			while (*((_BYTE*)v4 + v5));
			goto LABEL_11;
		}
	LABEL_8:
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		goto LABEL_12;
	}
	v4 = (unsigned __int64*)sub_14018F0E0(&v7, *(unsigned __int16**)(v3 + 376))[1];
	if (!v4)
		goto LABEL_8;
	v5 = -1i64;
	do
		++v5;
	while (*((_BYTE*)v4 + v5));
LABEL_11:
	sub_140058710(a1, v4, v5);
LABEL_12:
	if (v8)
		sub_14018B900(v8, 0);
	return 1i64;
}
// 1409F441C: using guessed type unsigned __int16 word_1409F441C[12];
// 140C65898: using guessed type __int64 qword_140C65898;

