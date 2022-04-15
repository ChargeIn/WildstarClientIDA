#include "../winhttp.h"

//----- (0000000140032A30) ----------------------------------------------------
__int64 __fastcall sub_140032A30(__int64 a1, unsigned int a2, __int64* a3)
{
	_QWORD* v3; // rbx
	__int64 v5; // rax
	_QWORD* v6; // rdi
	__int64 v7; // rcx
	__int64 v8; // rax
	_QWORD* i; // rax
	__int64 j; // rax

	v3 = *(_QWORD**)(a1 + 56);
	v5 = v3[1];
	v6 = v3;
	v7 = v5;
	if (v5)
	{
		do
		{
			if (a2 >= *(_DWORD*)(v7 + 32))
			{
				v7 = *(_QWORD*)(v7 + 24);
			}
			else
			{
				v6 = (_QWORD*)v7;
				v7 = *(_QWORD*)(v7 + 16);
			}
		} while (v7);
		do
		{
			if (*(_DWORD*)(v5 + 32) < a2)
			{
				v5 = *(_QWORD*)(v5 + 24);
			}
			else
			{
				v3 = (_QWORD*)v5;
				v5 = *(_QWORD*)(v5 + 16);
			}
		} while (v5);
	}
	if (v3 == v6)
		return 0i64;
	a3[1] = 0i64;
	do
	{
		sub_140033260(a3, v3 + 5);
		v8 = v3[3];
		if (v8)
		{
			v3 = (_QWORD*)v3[3];
			for (i = *(_QWORD**)(v8 + 16); i; i = (_QWORD*)i[2])
				v3 = i;
		}
		else
		{
			for (j = v3[1]; v3 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
				v3 = (_QWORD*)j;
			if (v3[3] != j)
				v3 = (_QWORD*)j;
		}
	} while (v3 != v6);
	return 1i64;
}
// 140032A6F: conditional instruction was optimized away because rax.8!=0

