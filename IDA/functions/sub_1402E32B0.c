#include "../winhttp.h"

//----- (00000001402E32B0) ----------------------------------------------------
__int64 __fastcall sub_1402E32B0(_QWORD* a1, __int64 a2, __int64 a3)
{
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rbx
	_DWORD* v11; // r14
	__int64 v12; // rbx
	unsigned __int64 v13; // rbp
	int** v14; // rsi
	int* v15; // rax
	int* v16; // rcx

	if (a1[3] != a3)
	{
		if (a3)
			(**(void(__fastcall***)(__int64))a3)(a3);
		v6 = a1[3];
		if (v6)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		a1[3] = a3;
	}
	a1[4] = a2;
	if (*(_DWORD*)(a2 + 20))
		v7 = *(unsigned int*)(a2 + 20) + (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 24i64))(a3);
	else
		v7 = 0i64;
	a1[5] = v7;
	if (a1[6] != a3)
	{
		if (a3)
			(**(void(__fastcall***)(__int64))a3)(a3);
		v8 = a1[6];
		if (v8)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		a1[6] = a3;
	}
	if (*(_DWORD*)(a2 + 24))
		v9 = *(unsigned int*)(a2 + 24) + (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 24i64))(a3);
	else
		v9 = 0i64;
	v10 = a1[2];
	v11 = (_DWORD*)a1[4];
	a1[7] = v9;
	v12 = v10 + 1704;
	if (*(_QWORD*)v12 == *(_QWORD*)(v12 + 8))
		sub_1400290D0(v12);
	v13 = (*(__int64(__fastcall**)(_DWORD*))(v12 + 24))(v11);
	v14 = (int**)(*(_QWORD*)(v12 + 16) + 8 * (v13 % *(_QWORD*)(v12 + 8)));
	v15 = sub_14018B280(32i64, 0);
	if (v15)
	{
		v16 = *v14;
		*(_QWORD*)v15 = v13;
		*((_QWORD*)v15 + 1) = v16;
		LODWORD(v16) = *v11;
		*((_QWORD*)v15 + 3) = a1;
		v15[4] = (int)v16;
	}
	*v14 = v15;
	++* (_QWORD*)v12;
	return 0i64;
}

