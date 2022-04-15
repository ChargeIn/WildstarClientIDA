#include "../winhttp.h"

//----- (00000001401D2CF0) ----------------------------------------------------
__int64 __fastcall sub_1401D2CF0(__int64 a1)
{
	__int64 v2; // rdx
	__int64 v3; // rdx
	__int64 result; // rax
	int* (__fastcall * v5)(__int64, __int64); // [rsp+20h] [rbp-18h] BYREF
	void(__fastcall * v6)(__int64, __int64); // [rsp+28h] [rbp-10h]

	if (*(_QWORD*)(a1 + 744))
	{
		sub_14018B900(*(_QWORD*)(a1 + 936), 0);
		*(_QWORD*)(a1 + 936) = 0i64;
		v2 = *(_QWORD*)(a1 + 768);
		v5 = sub_1401C3630;
		v6 = sub_14002D9C0;
		sub_14002D9C0((__int64)&v5, v2);
		v3 = *(_QWORD*)(a1 + 776);
		*(_QWORD*)(a1 + 768) = 0i64;
		v6((__int64)&v5, v3);
		*(_QWORD*)(a1 + 776) = 0i64;
		result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 744) + 8i64))(*(_QWORD*)(a1 + 744));
		*(_QWORD*)(a1 + 744) = 0i64;
	}
	return result;
}

