#include "../winhttp.h"

//----- (00000001401D2520) ----------------------------------------------------
__int64 __fastcall sub_1401D2520(__int64 a1)
{
	bool v2; // zf
	__int64 result; // rax

	if (*(_QWORD*)(a1 + 744))
	{
		sub_14018B900(*(_QWORD*)(a1 + 840), 0);
		v2 = *(_QWORD*)(a1 + 792) == 0i64;
		*(_QWORD*)(a1 + 840) = 0i64;
		if (!v2 && a1 != -752)
			sub_1401AD4B0((_QWORD*)(a1 + 752));
		result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 744) + 8i64))(*(_QWORD*)(a1 + 744));
		*(_QWORD*)(a1 + 744) = 0i64;
	}
	return result;
}

