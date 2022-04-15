#include "../winhttp.h"

//----- (00000001401DD410) ----------------------------------------------------
__int64 __fastcall sub_1401DD410(unsigned __int16* a1)
{
	__int64 v1; // rbp
	_QWORD* v3; // rbx
	__int64 v4; // rdi
	int v5; // eax
	unsigned int v7; // r15d
	int* v8; // rax
	__int64 v9; // rcx
	int* v10; // r14
	__int64 v11; // rbx
	int* v12; // rax
	int* v13; // rdi
	unsigned __int64 v14; // rbx
	int* v15; // [rsp+48h] [rbp+10h] BYREF

	v1 = qword_140C79A08;
	v3 = *(_QWORD**)(qword_140C79A08 + 8);
	v4 = qword_140C79A08;
	if (!v3)
		goto LABEL_8;
	do
	{
		if ((int)sub_14018E2C0(v3[4], a1) < 0)
		{
			v3 = (_QWORD*)v3[3];
		}
		else
		{
			v4 = (__int64)v3;
			v3 = (_QWORD*)v3[2];
		}
	} while (v3);
	if (v4 == v1 || (v5 = sub_14018E2C0((__int64)a1, *(unsigned __int16**)(v4 + 32)), v15 = (int*)v4, v5 < 0))
		LABEL_8:
	v15 = (int*)v1;
	if (v15 != (int*)v1)
		return (unsigned int)v15[10];
	v7 = qword_140C799F8;
	v8 = sub_14018B280(8i64, 0);
	v10 = v8;
	if (v8)
	{
		if (a1)
		{
			v11 = 0i64;
			if (*a1)
			{
				do
					++v11;
				while (a1[v11]);
			}
			v12 = sub_14018B280(2 * v11 + 18, 0);
			if (v12)
			{
				*((_QWORD*)v12 + 1) = v11;
				*(_QWORD*)v12 = off_140B55060;
			}
			else
			{
				v12 = 0i64;
			}
			v13 = v12 + 4;
			v14 = 2 * v11;
			sub_1407DB590(v12 + 4, (int*)a1, v14);
			*(_WORD*)((char*)v13 + v14) = 0;
			*(_QWORD*)v10 = v13;
			v15 = v10;
		}
		else
		{
			*(_QWORD*)v8 = 0i64;
			v15 = v8;
		}
	}
	else
	{
		v15 = 0i64;
	}
	sub_1401DE2C0(v9, &v15);
	v15 = *(int**)v15;
	*sub_1401DDE60((__int64)&unk_140C79A00, (__int64*)&v15) = v7;
	return v7;
}
// 1401DD528: variable 'v9' is possibly undefined
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C799F8: using guessed type __int64 qword_140C799F8;
// 140C79A08: using guessed type __int64 qword_140C79A08;

