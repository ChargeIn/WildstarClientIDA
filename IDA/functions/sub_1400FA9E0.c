//----- (00000001400FA9E0) ----------------------------------------------------
__int64 __fastcall sub_1400FA9E0(__int64 a1)
{
	_QWORD* v2; // rax
	__int64 v3; // r10
	__int64 v4; // r8
	int v5; // ecx
	__int64 v6; // rdx
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rax
	int v10; // r11d
	__int64 v11; // rbx

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
	v8 = *(_QWORD*)(a1 + 16);
	v9 = *(_QWORD*)(v8 + 16);
	*(double*)v9 = (double)v10;
	*(_DWORD*)(v9 + 8) = 3;
	*(_QWORD*)(v8 + 16) += 16i64;
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
// 1400FAA07: variable 'v3' is possibly undefined
// 1400FAA53: variable 'v10' is possibly undefined

