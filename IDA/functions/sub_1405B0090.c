#include "../winhttp.h"

//----- (00000001405B0090) ----------------------------------------------------
int* __fastcall sub_1405B0090(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	_QWORD* i; // rbx
	_QWORD* j; // rbx
	int* v6; // rdi
	int* v7; // rbx
	int* result; // rax

	v2 = a1[37];
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[37] = 0i64;
	}
	v3 = a1[36];
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		a1[36] = 0i64;
	}
	for (i = (_QWORD*)a1[39]; i != (_QWORD*)a1[40]; ++i)
	{
		if (*i)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*i + 8i64))(*i);
			*i = 0i64;
		}
	}
	sub_1405B1C90((__int64)(a1 + 38), (_QWORD*)a1[39], a1[40]);
	for (j = (_QWORD*)a1[43]; j != (_QWORD*)a1[44]; ++j)
	{
		if (*j)
		{
			(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*j + 8i64))(*j);
			*j = 0i64;
		}
	}
	v6 = (int*)a1[44];
	v7 = (int*)a1[43];
	result = sub_1407DB590(v7, v6, 0i64);
	a1[44] += -8 * (((char*)v6 - (char*)v7) >> 3);
	return result;
}

