#include "../winhttp.h"

//----- (000000014076C340) ----------------------------------------------------
__int64 sub_14076C340()
{
	int v0; // eax
	_DWORD* v1; // r8
	bool v2; // zf
	__int64 result; // rax
	__int64 v4; // r9

	v0 = sub_1405BFAC0(qword_140C65B98);
	v1[2] = 1;
	v2 = v0 == 0;
	result = 1i64;
	*v1 = !v2;
	*(_QWORD*)(v4 + 16) += 16i64;
	return result;
}
// 14076C359: variable 'v1' is possibly undefined
// 14076C36E: variable 'v4' is possibly undefined
// 140C65B98: using guessed type __int64 qword_140C65B98;

