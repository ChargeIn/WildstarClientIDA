//----- (0000000140522A40) ----------------------------------------------------
__int64 __fastcall sub_140522A40(__int64 a1, _QWORD* a2)
{
	unsigned int v2; // ebx
	__int64* v4; // rsi
	_DWORD* v5; // rcx
	int v7; // r14d
	int v8; // eax
	BOOL v9; // eax
	_DWORD* v10; // rcx
	int v11; // eax
	int v12; // eax
	const char* v14; // r8
	unsigned int v15; // edx
	__int64 v16; // rax
	__int64 v17; // rcx
	unsigned __int64 v18; // rdx
	__int64 v19; // rax
	__int64 v20; // rcx
	int v21; // eax
	__int64 v22; // [rsp+20h] [rbp-28h] BYREF
	int v23; // [rsp+28h] [rbp-20h]
	__int64 v24; // [rsp+50h] [rbp+8h] BYREF

	v2 = 0;
	v4 = (__int64*)dword_140A12138;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_DWORD*)(a1 + 40) = 0;
	v5 = dword_140A12138;
	v7 = 1;
	if ((unsigned __int64)(a2[3] + 32i64) < a2[2])
		v5 = (_DWORD*)(a2[3] + 32i64);
	v8 = v5[2];
	v9 = v8 && (v8 != 1 || *v5);
	*(_DWORD*)(a1 + 16) = v9;
	if (v9)
	{
		v10 = dword_140A12138;
		if ((unsigned __int64)(a2[3] + 80i64) < a2[2])
			v10 = (_DWORD*)(a2[3] + 80i64);
		v11 = v10[2];
		if (!v11 || v11 == 1 && !*v10)
			v7 = 0;
		*(_DWORD*)(a1 + 44) = v7;
		if ((unsigned __int64)(a2[3] + 64i64) < a2[2])
			v4 = (__int64*)(a2[3] + 64i64);
		v12 = *((_DWORD*)v4 + 2);
		if (v12 != 3)
		{
			if (v12 != 4 || !sub_14005AC80((char*)(*v4 + 32), (unsigned __int64*)&v24))
				goto LABEL_22;
			v23 = 3;
			v4 = &v22;
			v22 = v24;
		}
		v2 = (int)*(double*)v4;
	LABEL_22:
		*(_DWORD*)(a1 + 40) = v2;
		if (v2 && sub_1401F4720(v2))
		{
			*(_DWORD*)(a1 + 36) = sub_1400584E0((__int64)a2, 4);
			return 0i64;
		}
		v14 = "not a valid color shift id";
		v15 = 5;
	LABEL_40:
		sub_140056570(a2, v15, v14);
	}
	v16 = sub_140056AB0(a2, 4u);
	if (!v16
		|| !qword_140C659F0
		|| ((v18 = *(_QWORD*)(v16 + 16)) == 0
			? (v19 = sub_1404C9B90(v17, *(_DWORD*)(v16 + 8)))
			: (v19 = sub_1404B6E50(v17, v18)),
			(v20 = v19) == 0))
	{
		v14 = "not a valid decor";
		v15 = 4;
		goto LABEL_40;
	}
	if ((unsigned __int64)(a2[3] + 64i64) < a2[2])
		v4 = (__int64*)(a2[3] + 64i64);
	v21 = *((_DWORD*)v4 + 2);
	if (!v21 || v21 == 1 && !*(_DWORD*)v4)
		v7 = 0;
	*(_DWORD*)(a1 + 44) = v7;
	*(_QWORD*)(a1 + 24) = *(_QWORD*)(v20 + 88);
	*(_DWORD*)(a1 + 32) = *(_DWORD*)(v20 + 496);
	*(_DWORD*)(a1 + 40) = *(_DWORD*)(v20 + 672);
	*(_DWORD*)(a1 + 36) = *(_DWORD*)(v20 + 96);
	return 0i64;
}
// 140522B84: variable 'v17' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C659F0: using guessed type __int64 qword_140C659F0;

