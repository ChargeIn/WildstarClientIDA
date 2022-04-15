//----- (000000014019D3A0) ----------------------------------------------------
__int64 __fastcall sub_14019D3A0(__int64 a1, unsigned __int16* a2, int** a3)
{
	__int64 v3; // r15
	unsigned __int64 v6; // rsi
	int* v7; // r14
	_QWORD* v8; // rbx
	_QWORD* v9; // rdi
	__int64 v10; // rax
	_QWORD* i; // rax
	__int64 j; // rax

	v3 = qword_140C63750;
	if (!a2 || !a3)
		return 2147942487i64;
	v6 = 0i64;
	v7 = sub_14018B280(32i64, 0);
	if (v7)
	{
		*(_QWORD*)v7 = off_140B5E6C8;
		*((_QWORD*)v7 + 2) = 0i64;
		*((_QWORD*)v7 + 1) = 0i64;
		v7[6] = 1;
	}
	else
	{
		v7 = 0i64;
	}
	if (*a2)
	{
		do
			++v6;
		while (a2[v6]);
	}
	v8 = *(_QWORD**)(v3 + 16);
	v9 = (_QWORD*)v8[1];
	while (v9)
	{
		if ((int)sub_14018E2C0(v9[4], a2) < 0)
		{
			v9 = (_QWORD*)v9[3];
		}
		else
		{
			v8 = v9;
			v9 = (_QWORD*)v9[2];
		}
	}
	while (v8 != *(_QWORD**)(v3 + 16))
	{
		if ((unsigned int)sub_14018E3E0((__int64)a2, (unsigned __int16*)v8[4], v6))
			break;
		sub_140033260((__int64*)v7 + 1, v8 + 5);
		v10 = v8[3];
		if (v10)
		{
			v8 = (_QWORD*)v8[3];
			for (i = *(_QWORD**)(v10 + 16); i; i = (_QWORD*)i[2])
				v8 = i;
		}
		else
		{
			for (j = v8[1]; v8 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
				v8 = (_QWORD*)j;
			if (v8[3] != j)
				v8 = (_QWORD*)j;
		}
	}
	*a3 = v7;
	return 0i64;
}
// 140B5E6C8: using guessed type __int64 (__fastcall *off_140B5E6C8[5])();
// 140C63750: using guessed type __int64 qword_140C63750;

