#include "../winhttp.h"

//----- (00000001400F6570) ----------------------------------------------------
__int64 __fastcall sub_1400F6570(__int64 a1, __int64 a2, __int64 a3, _WORD* a4, _WORD* a5)
{
	WCHAR* v5; // rdi
	__int64 v9; // rax
	__int64 v10; // rax
	int* v11; // rdx
	__int64 v12; // rax
	__int64 v13; // rax
	__int64 v14; // rcx
	__int64 v15; // rcx
	_QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

	v5 = 0i64;
	v9 = 0i64;
	if (a5)
	{
		v10 = sub_1401A6B80(a3, a5);
		if (v10)
			v9 = sub_1401A4F40(v10 + 32);
		else
			v9 = 0i64;
	}
	v11 = (int*)&unk_1409D4564;
	*(_QWORD*)(a1 + 8) = 0i64;
	if (v9)
		v11 = (int*)v9;
	v12 = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	if (*(_WORD*)v11)
	{
		do
			++v12;
		while (*((_WORD*)v11 + v12));
	}
	sub_14001C1B0((_QWORD*)a1, v11, (__int64)v11 + 2 * v12);
	if (a4)
	{
		v13 = sub_1401A6B80(a3, a4);
		if (v13)
			v5 = (WCHAR*)sub_1401A4F40(v13 + 32);
		sub_1400E2630(v14, v17, v5, *(int**)(a1 + 8));
		v15 = *(_QWORD*)(a1 + 8);
		*(_QWORD*)(a1 + 8) = v17[1];
		*(_QWORD*)(a1 + 16) = v17[2];
		*(_QWORD*)(a1 + 24) = v17[3];
		if (v15)
			sub_14018B900(v15, 0);
	}
	return a1;
}
// 1400F6619: variable 'v14' is possibly undefined

