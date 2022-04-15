#include "../winhttp.h"

//----- (00000001407575A0) ----------------------------------------------------
__int64 __fastcall sub_1407575A0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	int v4; // eax
	unsigned int* v5; // rcx
	unsigned int v6; // edx
	__int64 v7; // rax
	__int64 v8; // rdx
	int* v9; // rbx
	__int64 v10; // rdx
	__int64 v11; // rdx
	__int64 v12; // rdx

	v2 = sub_140056AB0(a1, 1u);
	v3 = v2;
	if (!v2 || !*(_QWORD*)v2)
		return 0i64;
	v4 = sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(*(_QWORD*)v2 + 8i64));
	v5 = *(unsigned int**)(*(_QWORD*)v3 + 8i64);
	v6 = *v5;
	v7 = v4 == 2 ? sub_14043D050((__int64)v5, v6) : sub_14043CFF0((__int64)v5, v6);
	v9 = (int*)v7;
	if (!v7)
		return 0i64;
	sub_140058900((__int64)a1, v8, 0);
	sub_1400EFF50((__int64)a1, v10, (unsigned __int64*)"ePortraitPlacement", v9[25]);
	sub_1400EFF50((__int64)a1, v11, (unsigned __int64*)"eOverlay", v9[26]);
	sub_1400EFF50((__int64)a1, v12, (unsigned __int64*)"eBackground", v9[27]);
	return 1i64;
}
// 140757613: variable 'v8' is possibly undefined
// 140757626: variable 'v10' is possibly undefined
// 140757639: variable 'v11' is possibly undefined
// 14075764C: variable 'v12' is possibly undefined
// 140C65B80: using guessed type __int64 qword_140C65B80;

