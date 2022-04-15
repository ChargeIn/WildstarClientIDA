//----- (00000001400FB470) ----------------------------------------------------
__int64 __fastcall sub_1400FB470(__int64 a1)
{
	_QWORD* v2; // rax
	__int64 v3; // r10
	__int64 v4; // rdx
	int v5; // r8d
	__int64 v6; // rcx
	__int64 v7; // rax
	int v8; // r11d
	_DWORD* v9; // rax
	__int64 v10; // r10
	__int64 v11; // rdx
	__int64 v12; // rbx

	v2 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v4 = *(_QWORD*)(v3 + 16);
	*(_QWORD*)v4 = *v2;
	*(_DWORD*)(v4 + 8) = *((_DWORD*)v2 + 2);
	*(_QWORD*)(v3 + 16) += 16i64;
	v5 = *(_DWORD*)(a1 + 24);
	v6 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 24) = v5 + 1;
	v7 = *(_QWORD*)(v6 + 16);
	*(_DWORD*)(v7 + 8) = 3;
	*(double*)v7 = (double)v5;
	*(_QWORD*)(v6 + 16) += 16i64;
	v9 = sub_1400580E0(*(_QWORD*)(a1 + 16), v8);
	v11 = *(_QWORD*)(v10 + 16);
	*(_QWORD*)v11 = *(_QWORD*)v9;
	*(_DWORD*)(v11 + 8) = v9[2];
	*(_QWORD*)(v10 + 16) += 16i64;
	v12 = *(_QWORD*)(a1 + 16);
	sub_14005EA50(
		v12,
		(__int64*)(*(_QWORD*)(v12 + 16) - 48i64),
		(int*)(*(_QWORD*)(v12 + 16) - 32i64),
		(unsigned int*)(*(_QWORD*)(v12 + 16) - 16i64));
	*(_QWORD*)(v12 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	return 0i64;
}
// 1400FB4A0: variable 'v3' is possibly undefined
// 1400FB4EB: variable 'v8' is possibly undefined
// 1400FB4F0: variable 'v10' is possibly undefined

