#include "../winhttp.h"

//----- (00000001405A4730) ----------------------------------------------------
__int64 __fastcall sub_1405A4730(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	_QWORD* a4,
	unsigned __int8(__fastcall* a5)(_QWORD*, _QWORD*))
{
	__int64 v5; // rbx
	__int64 i; // rsi
	_QWORD* v10; // rdi
	__int64 v11; // rbx
	__int64 v12; // rbx
	__int64 result; // rax

	v5 = a2;
	for (i = (a2 - 1) / 2; v5 > a3; i = (i - 1) / 2)
	{
		v10 = (_QWORD*)(a1 + 16 * i);
		if (!a5(v10, a4))
			break;
		v11 = 2 * v5;
		*(_QWORD*)(a1 + 8 * v11) = *v10;
		*(_QWORD*)(a1 + 8 * v11 + 8) = v10[1];
		v5 = i;
	}
	v12 = 2 * v5;
	*(_QWORD*)(a1 + 8 * v12) = *a4;
	result = a4[1];
	*(_QWORD*)(a1 + 8 * v12 + 8) = result;
	return result;
}

