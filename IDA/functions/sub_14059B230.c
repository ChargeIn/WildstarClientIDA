#include "../winhttp.h"

//----- (000000014059B230) ----------------------------------------------------
__int64 __fastcall sub_14059B230(__int64 a1)
{
	_DWORD* v1; // rbx
	int v3; // eax
	bool v4; // zf
	__int64 result; // rax

	v1 = *(_DWORD**)(a1 + 16);
	v3 = sub_1405A4850(a1, 87);
	v1[2] = 1;
	v4 = v3 == 0;
	result = 1i64;
	*v1 = !v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}

