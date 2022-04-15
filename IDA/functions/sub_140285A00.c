#include "../winhttp.h"

//----- (0000000140285A00) ----------------------------------------------------
__int64 __fastcall sub_140285A00(__int64 a1)
{
	__int64 v1; // rax
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 224);
	*(_DWORD*)(*(_QWORD*)(v1 + 32) + 4i64) = ++ * (_DWORD*)(a1 + 392);
	result = *(_QWORD*)(a1 + 224);
	*(_DWORD*)(*(_QWORD*)(result + 32) + 8i64) = 0;
	return result;
}

