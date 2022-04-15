#include "../winhttp.h"

//----- (0000000140386220) ----------------------------------------------------
__int64 __fastcall sub_140386220(__int64 a1, __int64 a2)
{
	__int64 v3; // rbx
	__int64 v4; // rax
	float v5; // xmm0_4
	float v6; // xmm1_4

	v3 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 80i64))(a1, 2i64);
	v4 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 80i64))(a2, 2i64);
	v5 = *(float*)(v3 + 20);
	v6 = *(float*)(v4 + 20);
	if (v5 <= v6)
		return v6 > v5;
	else
		return 0xFFFFFFFFi64;
}

