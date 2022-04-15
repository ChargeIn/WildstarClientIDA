#include "../winhttp.h"

//----- (00000001404AE1F0) ----------------------------------------------------
__int64 __fastcall sub_1404AE1F0(__int64 a1)
{
	__int64 v1; // rax
	__int64 v3; // rax
	unsigned int v4; // ebx
	int v5; // esi
	__int64 v6; // rax
	int v7; // eax

	v1 = *(_QWORD*)(a1 + 8);
	if (!v1 || !*(_QWORD*)(a1 + 16))
		return 1i64;
	v3 = sub_14024B980(*(_DWORD*)(*(_QWORD*)v1 + 24i64));
	v4 = 0;
	v5 = 0;
	if (v3)
		v5 = *(_DWORD*)(v3 + 40);
	v6 = sub_14024B980(*(_DWORD*)(**(_QWORD**)(a1 + 16) + 24i64));
	if (v6)
		v7 = *(_DWORD*)(v6 + 40);
	else
		v7 = 0;
	LOBYTE(v4) = v5 != v7;
	return v4;
}

