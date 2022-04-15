//----- (00000001405E4540) ----------------------------------------------------
__int64 __fastcall sub_1405E4540(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	__int64 v5; // r14
	unsigned __int64 v7; // rdi
	_QWORD* v8; // rbx
	unsigned __int64 v9; // rdi
	int** v10; // rbx
	int* v11; // rax
	int* v12; // rcx
	__int64 v13; // rcx
	__int64 result; // rax
	__int64 v15; // [rsp+40h] [rbp+8h] BYREF

	v15 = a1;
	v5 = a4;
	if (a2 && a3)
	{
		v15 = a2;
		v7 = qword_140C4DF08(&v15);
		v8 = *(_QWORD**)(qword_140C4DF00 + 8 * (v7 % qword_140C4DEF8));
		if (!v8)
			goto LABEL_9;
		while (v7 != *v8 || !(unsigned int)qword_140C4DF10(&v15, v8 + 2))
		{
			v8 = (_QWORD*)v8[1];
			if (!v8)
				goto LABEL_9;
		}
		if (v8 == (_QWORD*)-24i64)
		{
		LABEL_9:
			v15 = a2;
			if (qword_140C4DEF0 == qword_140C4DEF8)
				sub_1400290D0((__int64)&qword_140C4DEF0);
			v9 = qword_140C4DF08(&v15);
			v10 = (int**)(qword_140C4DF00 + 8 * (v9 % qword_140C4DEF8));
			v11 = sub_14018B280(32i64, 0);
			if (v11)
			{
				v12 = *v10;
				*(_QWORD*)v11 = v9;
				*((_QWORD*)v11 + 1) = v12;
				v13 = v15;
				*((_QWORD*)v11 + 3) = a3;
				*((_QWORD*)v11 + 2) = v13;
			}
			*v10 = v11;
			++qword_140C4DEF0;
		}
	}
	result = qword_140C4DF18;
	if (!*(_QWORD*)(qword_140C4DF18 + 8 * v5))
		*(_QWORD*)(qword_140C4DF18 + 8 * v5) = a3;
	return result;
}
// 140C4DEF0: using guessed type __int64 qword_140C4DEF0;
// 140C4DEF8: using guessed type __int64 qword_140C4DEF8;
// 140C4DF00: using guessed type __int64 qword_140C4DF00;
// 140C4DF08: using guessed type __int64 (__fastcall *qword_140C4DF08)(_QWORD);
// 140C4DF10: using guessed type __int64 (__fastcall *qword_140C4DF10)(_QWORD, _QWORD);
// 140C4DF18: using guessed type __int64 qword_140C4DF18;

