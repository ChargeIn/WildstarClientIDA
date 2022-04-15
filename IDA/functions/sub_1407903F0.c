#include "../winhttp.h"

//----- (00000001407903F0) ----------------------------------------------------
__int64 __fastcall sub_1407903F0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	__int64 v4; // rdi
	__int64 result; // rax

	v4 = *(int*)(a1 + 24);
	if ((int)v4 >= 32)
		sub_140056830(*(_QWORD**)(a1 + 16), (unsigned __int64*)aTooManyCapture);
	*(_QWORD*)(a1 + 16 * (v4 + 2)) = a2;
	*(_QWORD*)(a1 + 16 * v4 + 40) = a4;
	*(_DWORD*)(a1 + 24) = v4 + 1;
	result = sub_1407905D0(a1, a2, a3);
	if (!result)
		--* (_DWORD*)(a1 + 24);
	return result;
}
// 1407905D0: using guessed type __int64 __fastcall sub_1407905D0(_QWORD, _QWORD, _QWORD);

