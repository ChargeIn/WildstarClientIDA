#include "../winhttp.h"

//----- (00000001400FB3A0) ----------------------------------------------------
__int64 __fastcall sub_1400FB3A0(__int64 a1, __int64 a2, int a3)
{
	_QWORD* v5; // rax
	__int64 v6; // r10
	__int64 v7; // rdx
	int v8; // r11d
	__int64 v9; // rcx
	__int64 v10; // rax
	_QWORD* v11; // rax
	__int64 v12; // r10
	__int64 v13; // rdx
	__int64 v14; // rbx

	v5 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v7 = *(_QWORD*)(v6 + 16);
	*(_QWORD*)v7 = *v5;
	*(_DWORD*)(v7 + 8) = *((_DWORD*)v5 + 2);
	*(_QWORD*)(v6 + 16) += 16i64;
	v9 = *(_QWORD*)(a1 + 16);
	v10 = *(_QWORD*)(v9 + 16);
	*(_DWORD*)(v10 + 8) = 3;
	*(double*)v10 = (double)v8;
	*(_QWORD*)(v9 + 16) += 16i64;
	v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), a3);
	v13 = *(_QWORD*)(v12 + 16);
	*(_QWORD*)v13 = *v11;
	*(_DWORD*)(v13 + 8) = *((_DWORD*)v11 + 2);
	*(_QWORD*)(v12 + 16) += 16i64;
	v14 = *(_QWORD*)(a1 + 16);
	sub_14005EA50(
		v14,
		(__int64*)(*(_QWORD*)(v14 + 16) - 48i64),
		(int*)(*(_QWORD*)(v14 + 16) - 32i64),
		(unsigned int*)(*(_QWORD*)(v14 + 16) - 16i64));
	*(_QWORD*)(v14 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	return 0i64;
}
// 1400FB3CA: variable 'v6' is possibly undefined
// 1400FB3DC: variable 'v8' is possibly undefined
// 1400FB416: variable 'v12' is possibly undefined

