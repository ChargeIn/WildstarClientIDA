#include "../winhttp.h"

//----- (0000000140370AE0) ----------------------------------------------------
__int64 __fastcall sub_140370AE0(__int64 a1)
{
	_QWORD* v1; // rdx
	__int64 v2; // rdx
	__int64 result; // rax

	v1 = *(_QWORD**)(a1 + 1248);
	if (v1)
		*v1 = *(_QWORD*)(a1 + 1256);
	v2 = *(_QWORD*)(a1 + 1256);
	if (v2)
		*(_QWORD*)(v2 + 1248) = *(_QWORD*)(a1 + 1248);
	result = 0i64;
	*(_QWORD*)(a1 + 1256) = 0i64;
	*(_QWORD*)(a1 + 1248) = 0i64;
	return result;
}

