#include "../winhttp.h"

//----- (00000001408619C0) ----------------------------------------------------
__int64 __fastcall sub_1408619C0(__int64 a1)
{
	__int64 v1; // rbx
	__int64 result; // rax

	v1 = a1 + 144;
	if (*(_QWORD*)(a1 + 144))
	{
		sub_140868480(a1 + 144);
		*(_QWORD*)(v1 + 12) = 43i64;
		result = 0i64;
		*(_QWORD*)v1 = 0i64;
		*(_WORD*)(v1 + 24) = 0;
		*(_QWORD*)(v1 + 32) = 0i64;
		*(_DWORD*)(v1 + 40) = -1;
		*(_DWORD*)(v1 + 44) = 1065353216;
		*(_DWORD*)(v1 + 48) = -1;
		*(_DWORD*)(v1 + 52) = 1;
		*(_DWORD*)(a1 + 44) = 0;
	}
	return result;
}

