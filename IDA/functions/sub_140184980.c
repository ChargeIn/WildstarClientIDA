#include "../winhttp.h"

//----- (0000000140184980) ----------------------------------------------------
__int64 __fastcall sub_140184980(_QWORD* a1)
{
	_QWORD* v2; // rbx
	__int64 v3; // r8
	__int64 result; // rax
	__int64 v5; // rdx
	struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF

	v2 = (_QWORD*)sub_140056AB0(a1, 1u);
	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	v3 = a1[2];
	result = 1i64;
	v5 = *(_QWORD*)&SystemTimeAsFileTime - *v2;
	*(_DWORD*)(v3 + 8) = 3;
	*(double*)v3 = (float)((float)(int)v5 * 0.0000001);
	a1[2] += 16i64;
	return result;
}

