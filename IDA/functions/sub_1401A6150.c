#include "../winhttp.h"

//----- (00000001401A6150) ----------------------------------------------------
__int64 __fastcall sub_1401A6150(__int64 a1, __int64 a2)
{
	__int64 v2; // rcx
	__int64 v3; // rax
	__int64 result; // rax
	__int64 v5; // rcx
	__int64 v6; // rcx

	v2 = *(_QWORD*)(a2 + 16);
	if (!v2)
		return (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a2 + 80) + 32i64))(*(_QWORD*)(a2 + 80));
	v3 = *(_QWORD*)(v2 + 48);
	if (a2 == v3)
		*(_QWORD*)(v2 + 48) = *(_QWORD*)(v3 + 72);
	result = *(_QWORD*)(v2 + 56);
	if (a2 == result)
	{
		result = *(_QWORD*)(result + 64);
		*(_QWORD*)(v2 + 56) = result;
	}
	v5 = *(_QWORD*)(a2 + 64);
	if (v5)
	{
		result = *(_QWORD*)(a2 + 72);
		*(_QWORD*)(v5 + 72) = result;
	}
	v6 = *(_QWORD*)(a2 + 72);
	if (v6)
	{
		result = *(_QWORD*)(a2 + 64);
		*(_QWORD*)(v6 + 64) = result;
	}
	*(_QWORD*)(a2 + 16) = 0i64;
	return result;
}

