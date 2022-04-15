#include "../winhttp.h"

//----- (00000001408BE160) ----------------------------------------------------
__int64 __fastcall sub_1408BE160(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD* a5)
{
	__int64 v6; // rax
	__int64 v8; // rcx
	__int64 v9; // rcx

	*(_QWORD*)(a1 + 16) = a4;
	*(_QWORD*)(a1 + 32) = a2;
	*(_QWORD*)(a1 + 24) = a3;
	*(_DWORD*)(a1 + 48) = *a5;
	v6 = sub_1408BEE20(a2);
	*(_QWORD*)(a1 + 40) = v6;
	if (!v6)
		return 2i64;
	*(_QWORD*)(a1 + 8) = 0i64;
	v8 = *(_QWORD*)(v6 + 24);
	if (v8)
		*(_QWORD*)(v8 + 8) = a1;
	else
		*(_QWORD*)(v6 + 16) = a1;
	++* (_DWORD*)(v6 + 8);
	*(_QWORD*)(v6 + 24) = a1;
	v9 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 96) = *(_DWORD*)(v9 + 16);
	*(_DWORD*)(a1 + 100) = *(_DWORD*)(v9 + 32);
	return 1i64;
}

