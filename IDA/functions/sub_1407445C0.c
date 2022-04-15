#include "../winhttp.h"

//----- (00000001407445C0) ----------------------------------------------------
__int64 __fastcall sub_1407445C0(__int64 a1)
{
	BOOL v2; // eax
	_DWORD* v3; // r8
	bool v4; // zf
	__int64 result; // rax

	v2 = sub_140601FB0(qword_140C65898 + 27664);
	v3 = *(_DWORD**)(a1 + 16);
	v4 = !v2;
	v3[2] = 1;
	result = 1i64;
	*v3 = !v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

