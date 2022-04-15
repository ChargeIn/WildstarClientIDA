#include "../winhttp.h"

//----- (00000001405CD160) ----------------------------------------------------
void __fastcall sub_1405CD160(__int64 a1, __int64 a2, __int64 a3, double a4)
{
	__int64** v5; // rax
	__int64* v6; // rdi
	__int64* v7; // rbx
	__int64 v8; // rcx
	__int64* v9; // rax

	if (((*(_DWORD*)(qword_140C65898 + 31560) - 63) & 0xFFFFFFBF) != 0 || *(_QWORD*)(qword_140C65898 + 29096))
	{
		*(_DWORD*)(a1 + 32) = 1;
		*(_QWORD*)(a1 + 60) = 0i64;
	}
	else
	{
		v5 = *(__int64***)(a1 + 152);
		v6 = *v5;
		if (*v5 != (__int64*)v5)
		{
			do
			{
				v7 = v6;
				v6 = (__int64*)*v6;
				sub_1405CD200((__int64*)a1, (__int64)(v7 + 2), a3, a4);
				v8 = *v7;
				v9 = (__int64*)v7[1];
				*v9 = *v7;
				*(_QWORD*)(v8 + 8) = v9;
				sub_14018B900((__int64)v7, 0);
			} while (v6 != *(__int64**)(a1 + 152));
		}
	}
}
// 1405CD1B0: variable 'a3' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

