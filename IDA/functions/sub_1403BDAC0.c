#include "../winhttp.h"

//----- (00000001403BDAC0) ----------------------------------------------------
void __fastcall sub_1403BDAC0(__int64 a1)
{
	__int64 v2; // rcx

	while (*(_QWORD*)(a1 + 25432))
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 25432) + 32i64))(*(_QWORD*)(a1 + 25432));
	v2 = *(_QWORD*)(a1 + 25744);
	*(_DWORD*)(a1 + 25440) = 0;
	if (v2 && *(_DWORD*)(v2 + 5664) && *(_DWORD*)(v2 + 5668) == 1)
	{
		*(_DWORD*)(v2 + 5664) = 0;
		sub_140195D70(v2 + 5672);
	}
}

