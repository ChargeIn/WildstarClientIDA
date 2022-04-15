#include "../winhttp.h"

//----- (00000001402FBE00) ----------------------------------------------------
__int64 __fastcall sub_1402FBE00(__int64 a1, unsigned int a2)
{
	_QWORD* v3; // rbx
	__int64 result; // rax

	if (*(_DWORD*)(a1 + 332) != a2)
	{
		v3 = *(_QWORD**)(a1 + 1232);
		for (*(_DWORD*)(a1 + 332) = a2; v3; v3 = (_QWORD*)v3[156])
			result = (*(__int64(__fastcall**)(_QWORD*, _QWORD))(*v3 + 1000i64))(v3, a2);
	}
	return result;
}

