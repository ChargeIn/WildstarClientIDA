//----- (00000001402DDD20) ----------------------------------------------------
__int64 __fastcall sub_1402DDD20(__int64 a1, int a2, _DWORD* a3)
{
	__int64 v4; // rax
	int** v5; // rdx
	int v6; // ecx
	__int64 result; // rax
	int* v8; // rax
	int v9; // ecx

	*(_DWORD*)(a1 + 12) = a2;
	v4 = a2;
	v5 = (int**)(a1 + 48);
	*(_DWORD*)(a1 + 16) = dword_140AF0ED8[v4];
	*(_DWORD*)(a1 + 20) = *a3;
	*(_DWORD*)(a1 + 24) = a3[1];
	v6 = dword_140AF06A0[2 * *(int*)(a1 + 16)];
	*(_DWORD*)(a1 + 28) = v6;
	LODWORD(v4) = v6 * *a3;
	*(_DWORD*)(a1 + 32) = v4;
	result = sub_1402E2D10(*(_DWORD*)(a1 + 24) * (int)v4, v5);
	if ((int)result >= 0)
	{
		v8 = (int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 24i64))(*(_QWORD*)(a1 + 48));
		v9 = *(_DWORD*)(a1 + 32);
		*(_QWORD*)(a1 + 40) = v8;
		sub_1407E4830(v8, 0i64, *(_DWORD*)(a1 + 24) * v9);
		return 0i64;
	}
	return result;
}
// 140AF06A0: using guessed type int dword_140AF06A0[];
// 140AF0ED8: using guessed type int dword_140AF0ED8[];

