//----- (000000014056A070) ----------------------------------------------------
__int64 __fastcall sub_14056A070(__int64 a1, __int64 a2, int a3, int* a4)
{
	__int64 v4; // rax
	int v9; // r12d
	unsigned int v10; // edx
	__int64 v11; // r15
	__int64 v12; // rdx
	BOOL v13; // eax
	__int64 v15; // rbp
	int v16; // ebx
	int v17; // ebx
	__int64 v18; // rsi
	__int64 v19; // rax
	__int64 v20; // rcx
	unsigned int v21; // ebx
	__int64 v22; // rsi
	__int64 v23; // rax
	__int64 v24; // rcx
	__int64 v25[2]; // [rsp+40h] [rbp-48h] BYREF
	int v26; // [rsp+50h] [rbp-38h]
	__int64 v27; // [rsp+54h] [rbp-34h]
	int v28; // [rsp+5Ch] [rbp-2Ch]

	v4 = *(_QWORD*)(a1 + 80);
	v9 = 0;
	if (!v4)
		v4 = *(_QWORD*)(a1 + 64) + 156i64;
	v10 = *(_DWORD*)(v4 + 128);
	if (!v10)
		return 4i64;
	v11 = sub_1403ACD90(qword_140C65B70, v10, *(_QWORD*)(qword_140C65898 + 120));
	if (!v11)
		return 4i64;
	v12 = *(_QWORD*)(a1 + 64);
	v13 = (*(_DWORD*)(v12 + 340) & 0x400) == 0 || !*(_DWORD*)(v12 + 384) || *(_DWORD*)(a1 + 32) == 0;
	if ((*(_DWORD*)(v12 + 340) & 0x200) == 0 && !v13)
		return 4i64;
	v15 = qword_140C65898;
	v16 = a3 - 1;
	if (v16)
	{
		if (v16 == 1 && a4)
			v9 = *a4;
	}
	else
	{
		if (*(_DWORD*)(*(_QWORD*)(v11 + 112) + 124i64) != 6)
			return 91i64;
		if (!sub_1403AC780(qword_140C65898 + 160, a4))
			return 90i64;
		v9 = *(_DWORD*)(*(_QWORD*)(v15 + 120) + 8i64);
	}
	v17 = **(_DWORD**)(v11 + 112);
	if (a2)
	{
		v22 = *(_QWORD*)(v15 + 120);
		v23 = sub_14055BDC0(v15, v22, v11, 1, v9);
		return sub_1403986F0(v24, v17, v22, v23, (int*)(v15 + 27920), a1, a2, 0);
	}
	else
	{
		v25[0] = 0i64;
		v27 = 0i64;
		v26 = 0;
		v25[1] = 0i64;
		v18 = *(_QWORD*)(v15 + 120);
		v28 = 96;
		v19 = sub_14055BDC0(v15, v18, v11, 1, v9);
		v21 = sub_1403986F0(v20, v17, v18, v19, (int*)(v15 + 27920), a1, (__int64)v25, 0);
		if (v25[0])
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v25[0] - 16) + 8i64))(v25[0] - 16);
		return v21;
	}
}
// 14056A1E2: variable 'v20' is possibly undefined
// 14056A22D: variable 'v24' is possibly undefined
// 14055BDC0: using guessed type __int64 __fastcall sub_14055BDC0(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

