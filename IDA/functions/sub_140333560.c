#include "../winhttp.h"

//----- (0000000140333560) ----------------------------------------------------
__int64 __fastcall sub_140333560(__int64 a1, unsigned __int16 a2)
{
	__int64 v2; // rcx
	__int64* v3; // rdx
	__int64 result; // rax
	__int64 i; // rcx

	if ((unsigned __int64)a2 >= *(_QWORD*)(a1 + 176))
		return 0i64;
	v2 = *(_QWORD*)(*(_QWORD*)(a1 + 168) + 8i64 * a2);
	if (!v2)
		return 0i64;
	v3 = *(__int64**)(v2 + 88);
	result = 0i64;
	if (!v3)
		return *(_QWORD*)(*(_QWORD*)(v2 + 56) + 8i64);
	for (i = *v3; i; i = *(_QWORD*)(i + 56))
		result += *(_QWORD*)(i + 8);
	return result;
}

