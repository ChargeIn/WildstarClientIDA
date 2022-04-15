#include "../winhttp.h"

//----- (00000001403902B0) ----------------------------------------------------
__int64 __fastcall sub_1403902B0(_QWORD* a1)
{
	_QWORD* v1; // rdx
	__int64 v2; // rdx
	_QWORD* v3; // rdx
	__int64 v4; // rdx
	__int64 result; // rax
	_QWORD* v6; // rdx
	__int64 v7; // rdx
	_QWORD* v8; // rdx
	__int64 v9; // rdx
	_QWORD* v10; // rdx
	__int64 v11; // rdx

	v1 = (_QWORD*)a1[4];
	if (v1)
		*v1 = a1[5];
	v2 = a1[5];
	if (v2)
		*(_QWORD*)(v2 + 32) = a1[4];
	v3 = (_QWORD*)a1[6];
	a1[4] = 0i64;
	a1[5] = 0i64;
	if (v3)
		*v3 = a1[7];
	v4 = a1[7];
	if (v4)
		*(_QWORD*)(v4 + 48) = a1[6];
	result = a1[2];
	a1[6] = 0i64;
	a1[7] = 0i64;
	*(_DWORD*)(result + 12) = 0;
	v6 = (_QWORD*)a1[8];
	if (v6)
	{
		result = a1[9];
		*v6 = result;
	}
	v7 = a1[9];
	if (v7)
	{
		result = a1[8];
		*(_QWORD*)(v7 + 64) = result;
	}
	a1[8] = 0i64;
	a1[9] = 0i64;
	v8 = (_QWORD*)a1[6];
	if (v8)
	{
		result = a1[7];
		*v8 = result;
	}
	v9 = a1[7];
	if (v9)
	{
		result = a1[6];
		*(_QWORD*)(v9 + 48) = result;
	}
	a1[6] = 0i64;
	a1[7] = 0i64;
	v10 = (_QWORD*)a1[4];
	if (v10)
	{
		result = a1[5];
		*v10 = result;
	}
	v11 = a1[5];
	if (v11)
	{
		result = a1[4];
		*(_QWORD*)(v11 + 32) = result;
	}
	a1[5] = 0i64;
	a1[4] = 0i64;
	return result;
}

