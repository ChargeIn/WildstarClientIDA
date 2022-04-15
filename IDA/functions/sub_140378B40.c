#include "../winhttp.h"

//----- (0000000140378B40) ----------------------------------------------------
__int64 __fastcall sub_140378B40(__int64 a1)
{
	__int64 v1; // rbx
	float i; // xmm6_4
	__int64 v4; // rcx
	__int64 result; // rax
	unsigned __int64 v6; // rbx
	unsigned __int64 j; // rsi

	v1 = *(_QWORD*)(a1 + 40);
	for (i = 1.0; v1; v1 = *(_QWORD*)(v1 + 40))
	{
		i = i * *(float*)(v1 + 124);
		if (*(_QWORD*)(v1 + 24))
			i = i * (*(float(__fastcall**)(__int64))(*(_QWORD*)v1 + 176i64))(v1);
	}
	v4 = *(_QWORD*)(a1 + 24);
	if (v4)
		(*(float(__fastcall**)(__int64))(*(_QWORD*)v4 + 280i64))(v4);
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 152i64))(*(_QWORD*)(a1 + 48));
	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 72i64))(*(_QWORD*)(a1 + 48));
	v6 = 0i64;
	for (j = result; v6 < j; ++v6)
	{
		result = (*(__int64(__fastcall**)(_QWORD, unsigned __int64))(**(_QWORD**)(a1 + 48) + 80i64))(
			*(_QWORD*)(a1 + 48),
			v6);
		if (result)
			result = sub_140378C20(result);
	}
	return result;
}
// 140378BAC: ignored the value written to the shadow area of the succeeding call

