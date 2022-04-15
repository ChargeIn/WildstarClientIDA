#include "../winhttp.h"

//----- (00000001408736A0) ----------------------------------------------------
__int64 __fastcall sub_1408736A0(__int64 a1)
{
	__int64 v1; // rdx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 128);
	if (v1)
	{
		sub_140881720(dword_140C10F28, v1);
		result = 0i64;
		*(_QWORD*)(a1 + 128) = 0i64;
		*(_QWORD*)(a1 + 140) = 43i64;
		*(_WORD*)(a1 + 152) = 0;
		*(_QWORD*)(a1 + 160) = 0i64;
		*(_DWORD*)(a1 + 168) = -1;
		*(_DWORD*)(a1 + 172) = 1065353216;
		*(_DWORD*)(a1 + 176) = -1;
		*(_DWORD*)(a1 + 180) = 1;
	}
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;

