//----- (00000001400FA910) ----------------------------------------------------
__int64 __fastcall sub_1400FA910(__int64 a1, __int64 a2, int a3)
{
	_QWORD* v5; // rax
	__int64 v6; // r10
	__int64 v7; // r8
	int v8; // r11d
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // rax
	__int64* v12; // rax

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
	v11 = *(_QWORD*)(v9 + 16);
	*(_DWORD*)(v11 + 8) = 3;
	*(double*)v11 = (double)a3;
	*(_QWORD*)(v9 + 16) += 16i64;
	v12 = (__int64*)sub_1400580E0(v9, -3);
	sub_14005EA50(v9, v12, (int*)(*(_QWORD*)(v9 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v9 + 16) - 16i64));
	*(_QWORD*)(v9 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	return 0i64;
}
// 1400FA93F: variable 'v6' is possibly undefined
// 1400FA956: variable 'v8' is possibly undefined

