//----- (0000000140512820) ----------------------------------------------------
__int64 __fastcall sub_140512820(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rbx
	int* v4; // rdi
	int* v5; // rax
	int* v6; // rax
	__int64 v7; // rax
	__int64 v8; // rsi
	int* v9; // rdx
	__int64 v10; // rbx
	int* v11; // rax

	v2 = sub_14018B280(80i64, 0);
	v3 = 0i64;
	v4 = v2;
	if (v2)
	{
		*((_QWORD*)v2 + 5) = 0i64;
		*((_QWORD*)v2 + 6) = 0i64;
		*((_QWORD*)v2 + 7) = 0i64;
		v5 = sub_14018B280(16i64, 0);
		*((_QWORD*)v4 + 5) = v5;
		*((_QWORD*)v4 + 6) = v5;
		*((_QWORD*)v4 + 7) = v5 + 4;
		if (v5)
			*(_WORD*)v5 = 0;
	}
	else
	{
		v4 = 0i64;
	}
	*v4 = 3;
	sub_1400F0A10(a1, 1, (__int64)&unk_1409F1374, (float*)v4 + 4);
	sub_1400F0A10(a1, 1, (__int64)"y", (float*)v4 + 5);
	sub_1400F0A10(a1, 1, (__int64)"z", (float*)v4 + 6);
	v6 = (int*)sub_1406622C0(a1, 2);
	if (v6 && (v7 = sub_1403D90D0(qword_140C65898, *v6), (v8 = v7) != 0) && *(_QWORD*)(v7 + 24))
	{
		v9 = (int*)&word_140B7B704;
		if (*(_QWORD*)(v7 + 16))
			v9 = *(int**)(v7 + 16);
		if (*(_WORD*)v9)
		{
			do
				++v3;
			while (*((_WORD*)v9 + v3));
		}
		sub_14001C480((__int64)(v4 + 8), v9, (int*)((char*)v9 + 2 * v3));
		v4[17] = **(_DWORD**)(v8 + 24);
	}
	else
	{
		v4[17] = 0;
	}
	v4[16] = dword_140C636A8;
	v10 = qword_140C7D5E8;
	v11 = sub_14018B280(24i64, 0);
	if (v11 != (int*)-16i64)
		*((_QWORD*)v11 + 2) = v4;
	*(_QWORD*)v11 = v10;
	*((_QWORD*)v11 + 1) = *(_QWORD*)(v10 + 8);
	**(_QWORD**)(v10 + 8) = v11;
	*(_QWORD*)(v10 + 8) = v11;
	++HIDWORD(qword_140C7D624);
	return 0i64;
}
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7D5E8: using guessed type __int64 qword_140C7D5E8;
// 140C7D624: using guessed type __int64 qword_140C7D624;

