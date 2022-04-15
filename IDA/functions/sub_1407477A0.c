#include "../winhttp.h"

//----- (00000001407477A0) ----------------------------------------------------
__int64* __fastcall sub_1407477A0(__int64* a1, _QWORD* a2)
{
	__int64 v2; // r14
	int* v5; // rax
	unsigned __int64 v6; // rbx
	__int64 v7; // r12
	_QWORD* v8; // rdi
	__int64 v9; // rbp
	__int64 v10; // rdx
	__int64 v11; // rdi
	__int64 v12; // rcx

	v2 = a2[1];
	if (v2)
	{
		v5 = sub_14018B280(32 * v2 + 16, 0);
		v6 = 0i64;
		if (v5)
		{
			*((_QWORD*)v5 + 1) = v2;
			v7 = (__int64)(v5 + 4);
			*(_QWORD*)v5 = off_140B55060;
		}
		else
		{
			v7 = 16i64;
		}
	}
	else
	{
		v6 = 0i64;
		v7 = 0i64;
	}
	if (v2)
	{
		v8 = (_QWORD*)(v7 + 16);
		v9 = v2;
		do
		{
			if (v8 != (_QWORD*)16)
			{
				v10 = (__int64)v8 + *a2 - v7 - 16;
				*(v8 - 1) = 0i64;
				*v8 = 0i64;
				v8[1] = 0i64;
				sub_14001C1B0(v8 - 2, *(int**)(v10 + 8), *(_QWORD*)(v10 + 16));
			}
			v8 += 4;
			--v9;
		} while (v9);
	}
	if (a1[1])
	{
		v11 = 0i64;
		do
		{
			v12 = *(_QWORD*)(v11 + *a1 + 8);
			if (v12)
				sub_14018B900(v12, 0);
			++v6;
			v11 += 32i64;
		} while (v6 < a1[1]);
	}
	if (*a1)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
	a1[1] = v2;
	*a1 = v7;
	return a1;
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

