#include "../winhttp.h"

//----- (00000001400FB1D0) ----------------------------------------------------
__int64 __fastcall sub_1400FB1D0(__int64 a1)
{
	_QWORD* v2; // rax
	__int64 v3; // r10
	__int64 v4; // rdx
	__int64 v5; // rcx
	__int64 v6; // rax
	int v7; // r11d
	_QWORD* v8; // rax
	__int64 v9; // r10
	__int64 v10; // rdx
	__int64 v11; // rbx

	v2 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v4 = *(_QWORD*)(v3 + 16);
	*(_QWORD*)v4 = *v2;
	*(_DWORD*)(v4 + 8) = *((_DWORD*)v2 + 2);
	*(_QWORD*)(v3 + 16) += 16i64;
	LODWORD(v4) = *(_DWORD*)(a1 + 24);
	v5 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 24) = v4 + 1;
	v6 = *(_QWORD*)(v5 + 16);
	*(_DWORD*)(v6 + 8) = 3;
	*(double*)v6 = (double)(int)v4;
	*(_QWORD*)(v5 + 16) += 16i64;
	v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), v7);
	v10 = *(_QWORD*)(v9 + 16);
	*(_QWORD*)v10 = *v8;
	*(_DWORD*)(v10 + 8) = *((_DWORD*)v8 + 2);
	*(_QWORD*)(v9 + 16) += 16i64;
	v11 = *(_QWORD*)(a1 + 16);
	sub_14005EA50(
		v11,
		(__int64*)(*(_QWORD*)(v11 + 16) - 48i64),
		(int*)(*(_QWORD*)(v11 + 16) - 32i64),
		(unsigned int*)(*(_QWORD*)(v11 + 16) - 16i64));
	*(_QWORD*)(v11 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	return 0i64;
}
// 1400FB1F7: variable 'v3' is possibly undefined
// 1400FB247: variable 'v7' is possibly undefined
// 1400FB24C: variable 'v9' is possibly undefined

