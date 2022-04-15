#include "../winhttp.h"

//----- (00000001402D27F0) ----------------------------------------------------
__int64 __fastcall sub_1402D27F0(__int64 a1)
{
	__int64 v2; // rax
	unsigned int v3; // r8d

	v2 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 24i64))(*(_QWORD*)(a1 + 8));
	v3 = *(unsigned __int16*)(176i64 * *(unsigned int*)(a1 + 32) + *(_QWORD*)(v2 + 136) + 76);
	if (v3 >= *(_DWORD*)(v2 + 144))
		return 0i64;
	else
		return *(_QWORD*)(32i64 * (unsigned __int16)v3 + *(_QWORD*)(v2 + 152) + 24);
}

