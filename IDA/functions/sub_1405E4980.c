#include "../winhttp.h"

//----- (00000001405E4980) ----------------------------------------------------
void __fastcall sub_1405E4980(_QWORD* a1)
{
	__int64 v2; // rbp
	__int64* v3; // rdi
	__int64 v4; // rsi
	_DWORD* v5; // rax
	int v6; // xmm0_4
	__int64 v7; // rbx
	__int64 v8; // rcx
	__int64* v9; // rdi
	_DWORD* v10; // rax
	int v11; // xmm0_4
	__int64 v12; // rbx
	__int64 v13; // rcx

	sub_1405E4AA0(a1);
	v2 = 66i64;
	v3 = a1 + 2;
	v4 = 66i64;
	do
	{
		v5 = (_DWORD*)*v3;
		if (*(_DWORD*)*v3 == 3)
			v6 = 1065353216;
		else
			v6 = 0;
		v5[1] = v6;
		v5[2] = 0;
		*((_QWORD*)v5 + 3) = 0i64;
		v7 = *v3;
		if (*v3)
		{
			*(_QWORD*)(v7 + 24) = 0i64;
			v8 = *(_QWORD*)(v7 + 16);
			if (v8)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
			sub_14018B900(v7, 0);
		}
		++v3;
		--v4;
	} while (v4);
	v9 = a1 + 69;
	do
	{
		v10 = (_DWORD*)*v9;
		if (*(_DWORD*)*v9 == 3)
			v11 = 1065353216;
		else
			v11 = 0;
		v10[1] = v11;
		v10[2] = 0;
		*((_QWORD*)v10 + 3) = 0i64;
		v12 = *v9;
		if (*v9)
		{
			*(_QWORD*)(v12 + 24) = 0i64;
			v13 = *(_QWORD*)(v12 + 16);
			if (v13)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v13 - 16) + 8i64))(v13 - 16);
			sub_14018B900(v12, 0);
		}
		++v9;
		--v2;
	} while (v2);
	if (*a1)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16i64) + 8i64))(*a1 - 16i64);
}

