#include "../winhttp.h"

//----- (00000001400E10F0) ----------------------------------------------------
_QWORD* __fastcall sub_1400E10F0(__int64 a1, __int64* a2, _QWORD** a3, _QWORD* a4)
{
	_QWORD* result; // rax
	_QWORD* v8; // rdi
	__int64 v9; // rbx
	int* v10; // rax
	_QWORD* v11; // rcx

	result = (_QWORD*)*a4;
	if (*a3 != (_QWORD*)*a4)
	{
		do
		{
			v8 = *a3;
			v9 = *a2;
			v10 = sub_14018B280(24i64, 0);
			if (v10 != (int*)-16i64)
				*((_QWORD*)v10 + 2) = v8[2];
			*(_QWORD*)v10 = v9;
			*((_QWORD*)v10 + 1) = *(_QWORD*)(v9 + 8);
			**(_QWORD**)(v9 + 8) = v10;
			*(_QWORD*)(v9 + 8) = v10;
			result = *a3;
			v11 = (_QWORD*)**a3;
			*a3 = v11;
		} while (v11 != (_QWORD*)*a4);
	}
	return result;
}

