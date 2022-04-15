//----- (000000014001AC30) ----------------------------------------------------
__int64 __fastcall sub_14001AC30(__int64 a1, int a2, int* a3)
{
	bool v3; // zf
	int v4; // r9d
	int v5; // r10d
	int v6; // r11d
	unsigned __int64 v7; // rdi
	int* v9; // rsi
	__int64 v10; // rcx
	int v11; // r8d
	int* v12; // rcx
	unsigned __int64 v13; // rax
	__int64 v14; // rdx
	_DWORD* v15; // rdx
	_DWORD* v16; // rcx
	void(__fastcall * v17)(__int64*, _DWORD*); // rax
	int v19; // [rsp+20h] [rbp-28h] BYREF
	int v20; // [rsp+24h] [rbp-24h]
	int v21; // [rsp+28h] [rbp-20h]
	__int64 v22; // [rsp+30h] [rbp-18h] BYREF
	int v23; // [rsp+38h] [rbp-10h]

	v3 = *(_DWORD*)(a1 + 136) == 0;
	v4 = *a3;
	v5 = a3[1];
	v6 = a3[2];
	v19 = *a3;
	v20 = v5;
	v7 = a2;
	v21 = v6;
	if (!v3)
	{
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)a1 + 48i64))(a1, &v19);
		v6 = v21;
		v5 = v20;
		v4 = v19;
	}
	v9 = (int*)qword_140C63750;
	v10 = 3i64 * *(int*)qword_140C63750;
	LODWORD(v22) = *(_DWORD*)(a1 + 12i64 * *(int*)qword_140C63750 + 32);
	HIDWORD(v22) = *(_DWORD*)(a1 + 4 * v10 + 36);
	v11 = *(_DWORD*)(a1 + 4 * v10 + 40);
	v23 = v11;
	if (v7 < 5)
	{
		v12 = (int*)(a1 + 4 * (v7 + 2 * (v7 + 5)));
		v13 = 5 - v7;
		do
		{
			*(v12 - 2) = v4;
			*(v12 - 1) = v5;
			*v12 = v6;
			v12 += 3;
			--v13;
		} while (v13);
	}
	*(_DWORD*)(a1 + 24) = (1 << v7) | *(_DWORD*)(a1 + 24) & ((1 << v7) - 1);
	v14 = *v9 + 2 * (*v9 + 4i64);
	v3 = v22 == *(_QWORD*)(a1 + 4 * v14);
	v15 = (_DWORD*)(a1 + 4 * v14);
	if (!v3 || v11 != v15[2])
	{
		v16 = *(_DWORD**)(a1 + 128);
		if (v16)
		{
			*v16 = *v15;
			v16[1] = v15[1];
			v16[2] = v15[2];
		}
		v17 = *(void(__fastcall**)(__int64*, _DWORD*))(a1 + 144);
		if (v17)
			v17(&v22, v15);
	}
	return 1i64;
}
// 140C63750: using guessed type __int64 qword_140C63750;

