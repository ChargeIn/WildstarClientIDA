#include "../winhttp.h"

//----- (0000000140060FA0) ----------------------------------------------------
__int64 __fastcall sub_140060FA0(__int64 a1, int a2)
{
	unsigned __int64* v3; // rdx
	unsigned __int64 v5; // rdx
	bool v6; // cc
	__int64 result; // rax

	v3 = *(unsigned __int64**)(a1 + 80);
	*(_QWORD*)(a1 + 40) = v3;
	v5 = *v3;
	*(_QWORD*)(a1 + 24) = v5;
	sub_140060CB0(a1, v5);
	sub_140060EF0(a1, a2, *(_QWORD*)(a1 + 24));
	v6 = *(_DWORD*)(a1 + 92) <= 20000;
	*(_WORD*)(a1 + 96) = *(_WORD*)(a1 + 98);
	*(_BYTE*)(a1 + 101) = 1;
	if (!v6 && (*(_DWORD*)(a1 + 40) - *(_DWORD*)(a1 + 80)) / 40 + 1 < 20000)
		sub_1400612B0(a1, 20000);
	result = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_QWORD*)(a1 + 168) = 0i64;
	return result;
}

