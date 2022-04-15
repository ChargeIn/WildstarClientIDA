//----- (00000001400FB650) ----------------------------------------------------
__int64 __fastcall sub_1400FB650(__int64 a1, int a2)
{
	_QWORD* v4; // rax
	__int64 v5; // r10
	__int64 v6; // r8
	__int64 v7; // rcx
	__int64 v8; // rax
	int v9; // r11d
	_DWORD* v10; // rax
	__int64 v11; // r10
	__int64 v12; // rdx
	__int64 v13; // rbx

	v4 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v6 = *(_QWORD*)(v5 + 16);
	*(_QWORD*)v6 = *v4;
	*(_DWORD*)(v6 + 8) = *((_DWORD*)v4 + 2);
	*(_QWORD*)(v5 + 16) += 16i64;
	v7 = *(_QWORD*)(a1 + 16);
	v8 = *(_QWORD*)(v7 + 16);
	*(double*)v8 = (double)a2;
	*(_DWORD*)(v8 + 8) = 3;
	*(_QWORD*)(v7 + 16) += 16i64;
	v10 = sub_1400580E0(*(_QWORD*)(a1 + 16), v9);
	v12 = *(_QWORD*)(v11 + 16);
	*(_QWORD*)v12 = *(_QWORD*)v10;
	*(_DWORD*)(v12 + 8) = v10[2];
	*(_QWORD*)(v11 + 16) += 16i64;
	v13 = *(_QWORD*)(a1 + 16);
	sub_14005EA50(
		v13,
		(__int64*)(*(_QWORD*)(v13 + 16) - 48i64),
		(int*)(*(_QWORD*)(v13 + 16) - 32i64),
		(unsigned int*)(*(_QWORD*)(v13 + 16) - 16i64));
	*(_QWORD*)(v13 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	return 0i64;
}
// 1400FB682: variable 'v5' is possibly undefined
// 1400FB6C2: variable 'v9' is possibly undefined
// 1400FB6C7: variable 'v11' is possibly undefined

