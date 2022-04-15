#include "../winhttp.h"

//----- (00000001403672D0) ----------------------------------------------------
_QWORD* __fastcall sub_1403672D0(__int64 a1, int a2, __int64 a3)
{
	int* v5; // rax
	_QWORD* result; // rax
	_QWORD* v7; // r8
	_QWORD* v8; // rdx
	_QWORD* v9; // rcx
	__int64 v10; // rax

	v5 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 40i64))(a1);
	result = (_QWORD*)sub_14035C010(a3, v5);
	v7 = result;
	if (result && (unsigned int)(a2 - 9) <= 1 && !result[18])
	{
		v8 = result + 19;
		v9 = (_QWORD*)(*result + 2472i64);
		result[18] = v9;
		result[19] = *v9;
		*v9 = result;
		v10 = result[19];
		if (v10)
			*(_QWORD*)(v10 + 144) = v8;
		result = (_QWORD*)*v7;
		*(_DWORD*)(*v7 + 2480i64) = 0;
	}
	return result;
}

