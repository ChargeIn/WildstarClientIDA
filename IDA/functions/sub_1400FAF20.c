#include "../winhttp.h"

//----- (00000001400FAF20) ----------------------------------------------------
__int64 __fastcall sub_1400FAF20(__int64 a1, float a2)
{
	_QWORD* v3; // rax
	__int64 v4; // r10
	__int64 v5; // r8
	int v6; // ecx
	__int64 v7; // rdx
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rbx

	v3 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v5 = *(_QWORD*)(v4 + 16);
	*(_QWORD*)v5 = *v3;
	*(_DWORD*)(v5 + 8) = *((_DWORD*)v3 + 2);
	*(_QWORD*)(v4 + 16) += 16i64;
	v6 = *(_DWORD*)(a1 + 24);
	v7 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 24) = v6 + 1;
	v8 = *(_QWORD*)(v7 + 16);
	*(_DWORD*)(v8 + 8) = 3;
	*(double*)v8 = (double)v6;
	*(_QWORD*)(v7 + 16) += 16i64;
	v9 = *(_QWORD*)(a1 + 16);
	v10 = *(_QWORD*)(v9 + 16);
	*(double*)v10 = a2;
	*(_DWORD*)(v10 + 8) = 3;
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
// 1400FAF47: variable 'v4' is possibly undefined

