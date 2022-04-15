//----- (0000000140798B50) ----------------------------------------------------
__int64 __fastcall sub_140798B50(__int64 a1, int a2, int a3)
{
	__int64 v3; // rax
	unsigned __int64 v5; // rcx
	_DWORD* v6; // rax
	_DWORD* v8; // r10
	bool v9; // cf
	void* v10; // rax
	void* v11; // r10
	__int64 v12; // r11
	_DWORD* v14; // rax
	__int64 v15; // rdx
	_DWORD* v16; // rax
	__int64 v17; // rdx
	unsigned int v18; // edi
	__int64 v19; // rax
	int v20; // ecx
	_DWORD* v21; // rax

	v3 = *(_QWORD*)(a1 + 24);
	v5 = *(_QWORD*)(a1 + 16);
	v6 = (_DWORD*)(v3 + 16);
	v8 = dword_140A12138;
	v9 = (unsigned __int64)v6 < v5;
	if ((unsigned __int64)v6 < v5)
	{
		if (v6 != dword_140A12138 && !v6[2])
		{
			sub_1400580E0(a1, a2);
			v10 = sub_1400580E0(a1, a3);
			if ((void*)v12 == v11 || v10 == v11)
				return 0i64;
			else
				return sub_14005EEA0(a1, v12, (__int64)v10);
		}
		v9 = (unsigned __int64)v6 < v5;
	}
	if (v9)
		v8 = v6;
	*(_QWORD*)v5 = *(_QWORD*)v8;
	*(_DWORD*)(v5 + 8) = v8[2];
	*(_QWORD*)(a1 + 16) += 16i64;
	v14 = sub_1400580E0(a1, a2 - 1);
	v15 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v15 = *(_QWORD*)v14;
	*(_DWORD*)(v15 + 8) = v14[2];
	*(_QWORD*)(a1 + 16) += 16i64;
	v16 = sub_1400580E0(a1, a3 - 2);
	v17 = *(_QWORD*)(a1 + 16);
	v18 = 1;
	*(_QWORD*)v17 = *(_QWORD*)v16;
	*(_DWORD*)(v17 + 8) = v16[2];
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_140061D30(a1, (char*)(*(_QWORD*)(a1 + 16) - 48i64), 1);
	v19 = *(_QWORD*)(a1 + 16);
	v20 = *(_DWORD*)(v19 - 8);
	v21 = (_DWORD*)(v19 - 16);
	if (!v20 || v20 == 1 && !*v21)
		v18 = 0;
	*(_QWORD*)(a1 + 16) = v21;
	return v18;
}
// 140798B9B: variable 'v12' is possibly undefined
// 140798B9B: variable 'v11' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

