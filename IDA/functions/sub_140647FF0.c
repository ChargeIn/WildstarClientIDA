#include "../winhttp.h"

//----- (0000000140647FF0) ----------------------------------------------------
__int64 __fastcall sub_140647FF0(__int64* a1, int** a2)
{
	__int64 v2; // r13
	int* v5; // rax
	int* v6; // r15
	int* v7; // r14
	__int64 v8; // rbx
	int* v9; // rax
	int* v10; // rdi
	unsigned __int64 v11; // rbx
	unsigned __int64 i; // rbx
	int* v13; // rdx
	_QWORD* v14; // rcx
	__int64 v15; // rcx
	__int64 result; // rax

	v2 = a1[1];
	v5 = sub_14018DB00(*a1, v2 + 1, 8i64);
	v6 = &v5[2 * v2];
	v7 = v5;
	if (v6)
	{
		if (*a2)
		{
			v8 = *((_QWORD*)*a2 - 1);
			v9 = sub_14018B280(2 * v8 + 18, 0);
			if (v9)
			{
				*((_QWORD*)v9 + 1) = v8;
				*(_QWORD*)v9 = off_140B55060;
			}
			else
			{
				v9 = 0i64;
			}
			v10 = v9 + 4;
			v11 = 2 * v8;
			sub_1407DB590(v9 + 4, *a2, v11);
			*(_WORD*)((char*)v10 + v11) = 0;
			*(_QWORD*)v6 = v10;
		}
		else
		{
			*(_QWORD*)v6 = 0i64;
		}
	}
	if ((int*)*a1 != v7)
	{
		for (i = 0i64; i < a1[1]; ++i)
		{
			v13 = &v7[2 * i];
			if (v13)
			{
				v14 = (_QWORD*)(*a1 + 8 * i);
				*(_QWORD*)v13 = *v14;
				*v14 = 0i64;
			}
			v15 = *(_QWORD*)(*a1 + 8 * i);
			if (v15)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v7;
	}
	result = v2;
	a1[1] = v2 + 1;
	return result;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

