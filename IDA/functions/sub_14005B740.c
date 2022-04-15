#include "../winhttp.h"

//----- (000000014005B740) ----------------------------------------------------
void __fastcall sub_14005B740(__int64 a1, __int64 a2, _QWORD* a3)
{
	__int64 v4; // rcx
	__int64 v6; // r8
	bool v7; // zf
	__int64 v8; // r8
	int v9; // [rsp+30h] [rbp+8h] BYREF

	v4 = *(_QWORD*)(a1 + 64);
	if (v4 == a2 || *((_DWORD*)a3 + 6))
		v4 = 0i64;
	sub_14005B390(v4, a3);
	v7 = *((_DWORD*)a3 + 7) == 0;
	v9 = *(_DWORD*)(a1 + 96);
	if (v7)
		*((_DWORD*)a3 + 7) = ((__int64(__fastcall*)(_QWORD, int*, __int64, _QWORD))a3[1])(*a3, &v9, 4i64, a3[2]);
	v7 = *((_DWORD*)a3 + 7) == 0;
	v9 = *(_DWORD*)(a1 + 100);
	if (v7)
		*((_DWORD*)a3 + 7) = ((__int64(__fastcall*)(_QWORD, int*, __int64, _QWORD))a3[1])(*a3, &v9, 4i64, a3[2]);
	v7 = *((_DWORD*)a3 + 7) == 0;
	LOBYTE(v9) = *(_BYTE*)(a1 + 112);
	if (v7)
		*((_DWORD*)a3 + 7) = ((__int64(__fastcall*)(_QWORD, int*, __int64, _QWORD))a3[1])(*a3, &v9, 1i64, a3[2]);
	v7 = *((_DWORD*)a3 + 7) == 0;
	LOBYTE(v9) = *(_BYTE*)(a1 + 113);
	if (v7)
		*((_DWORD*)a3 + 7) = ((__int64(__fastcall*)(_QWORD, int*, __int64, _QWORD))a3[1])(*a3, &v9, 1i64, a3[2]);
	v7 = *((_DWORD*)a3 + 7) == 0;
	LOBYTE(v9) = *(_BYTE*)(a1 + 114);
	if (v7)
		*((_DWORD*)a3 + 7) = ((__int64(__fastcall*)(_QWORD, int*, __int64, _QWORD))a3[1])(*a3, &v9, 1i64, a3[2]);
	v7 = *((_DWORD*)a3 + 7) == 0;
	LOBYTE(v9) = *(_BYTE*)(a1 + 115);
	if (v7)
		*((_DWORD*)a3 + 7) = ((__int64(__fastcall*)(_QWORD, int*, __int64, _QWORD))a3[1])(*a3, &v9, 1i64, a3[2]);
	sub_14005B320(*(_QWORD*)(a1 + 24), *(_DWORD*)(a1 + 80), v6, a3);
	sub_14005B420(a1, a3);
	sub_14005B580(a1, a3, v8);
}
// 14005B856: variable 'v6' is possibly undefined
// 14005B876: variable 'v8' is possibly undefined

