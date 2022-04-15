//----- (000000014001A8D0) ----------------------------------------------------
__int64 __fastcall sub_14001A8D0(__int64 a1, int a2, int* a3)
{
	bool v3; // zf
	int v4; // r9d
	int v5; // r10d
	unsigned __int64 v6; // rdi
	int* v8; // r8
	int* v9; // rax
	unsigned __int64 v10; // rcx
	_DWORD* v11; // rdx
	_DWORD* v12; // r8
	void(__fastcall * v13)(__int64*); // r8
	int v15; // [rsp+30h] [rbp+8h] BYREF
	int v16; // [rsp+34h] [rbp+Ch]
	__int64 v17; // [rsp+40h] [rbp+18h] BYREF

	v3 = *(_DWORD*)(a1 + 104) == 0;
	v4 = *a3;
	v5 = a3[1];
	v15 = *a3;
	v16 = v5;
	v6 = a2;
	if (!v3)
	{
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)a1 + 48i64))(a1, &v15);
		v5 = v16;
		v4 = v15;
	}
	v8 = (int*)qword_140C63750;
	v17 = *(_QWORD*)(a1 + 8i64 * *(int*)qword_140C63750 + 32);
	if (v6 < 5)
	{
		v9 = (int*)(a1 + 32 + 8 * v6);
		v10 = 5 - v6;
		do
		{
			*v9 = v4;
			v9[1] = v5;
			v9 += 2;
			--v10;
		} while (v10);
	}
	*(_DWORD*)(a1 + 24) = (1 << v6) | *(_DWORD*)(a1 + 24) & ((1 << v6) - 1);
	v11 = (_DWORD*)(a1 + 8 * (*v8 + 4i64));
	if (v17 != *(_QWORD*)v11)
	{
		v12 = *(_DWORD**)(a1 + 96);
		if (v12)
		{
			*v12 = *v11;
			v12[1] = v11[1];
		}
		v13 = *(void(__fastcall**)(__int64*))(a1 + 112);
		if (v13)
			v13(&v17);
	}
	return 1i64;
}
// 140C63750: using guessed type __int64 qword_140C63750;

