#include "../winhttp.h"

//----- (00000001404BDE00) ----------------------------------------------------
void __fastcall sub_1404BDE00(__int64 a1, _OWORD* a2)
{
	__int64 v2; // rcx

	v2 = *(_QWORD*)(a1 + 16);
	if (v2)
	{
		if (a2)
			*a2 = *(_OWORD*)((*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(v2 + 288) + 80i64))(
				*(_QWORD*)(v2 + 288),
				2i64)
				+ 32);
	}
}

