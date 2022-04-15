#include "../winhttp.h"

//----- (0000000140150870) ----------------------------------------------------
__int64 __fastcall sub_140150870(__int64 a1, __int64 a2, int* a3)
{
	int* v6; // rax
	__int64 v7; // r8

	v6 = sub_14018B280(24i64, 0);
	*(_QWORD*)(a1 + 8) = v6;
	*(_QWORD*)v6 = v6;
	*(_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64) = *(_QWORD*)(a1 + 8);
	v7 = -1i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	do
		++v7;
	while (*((_BYTE*)a3 + v7));
	sub_14001B240((_QWORD*)(a1 + 16), a3, (__int64)a3 + v7);
	*(_QWORD*)(a1 + 56) = a2;
	*(_DWORD*)(a1 + 48) = -1;
	return a1;
}

