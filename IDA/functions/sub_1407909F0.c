#include "../winhttp.h"

//----- (00000001407909F0) ----------------------------------------------------
__int64 __fastcall sub_1407909F0(__int64 a1, unsigned __int64* a2, __int64 a3)
{
	int v3; // edi
	_QWORD* v7; // rbx
	int i; // ebx

	v3 = *(_DWORD*)(a1 + 24);
	if (!v3)
		v3 = a2 != 0i64;
	v7 = *(_QWORD**)(a1 + 16);
	if (!(unsigned int)sub_140058190((__int64)v7, v3))
		sub_140056830(v7, (unsigned __int64*)"stack overflow (%s)", aTooManyCapture_0);
	for (i = 0; i < v3; ++i)
		sub_140790910(a1, i, a2, a3);
	return (unsigned int)v3;
}

