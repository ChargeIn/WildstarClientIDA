//----- (000000014011BE80) ----------------------------------------------------
__int64 __fastcall sub_14011BE80(__int64 a1)
{
	_DWORD* v1; // rsi
	unsigned __int64* v3; // rdx
	unsigned int v4; // ebx
	int v5; // eax
	int v6; // r15d
	__int64 v7; // rdx
	unsigned __int64 v8; // r8
	_DWORD* v9; // rcx
	int v10; // r14d
	int v11; // eax
	BOOL v12; // eax
	unsigned __int64* v13; // rcx
	bool v14; // r12
	int v15; // eax
	int v16; // r8d
	int v17; // eax
	__int128* v18; // rdx
	__int64 v19; // rcx
	int v20; // eax
	unsigned int v21; // edx
	int v22; // edx
	unsigned __int64 v23; // rcx
	__int64 v24; // r8
	__int64 v25; // rax
	__int64 v26; // r8
	__int64 v27; // rax
	__int64 v28; // rcx
	__int64 v29; // r9
	int v30; // eax
	unsigned __int64 v32; // [rsp+20h] [rbp-A9h] BYREF
	int v33; // [rsp+28h] [rbp-A1h]
	__int128 v34; // [rsp+30h] [rbp-99h]
	__int128 v35; // [rsp+40h] [rbp-89h] BYREF
	__int128 v36[2]; // [rsp+50h] [rbp-79h]
	__int128 v37; // [rsp+70h] [rbp-59h]
	int v38; // [rsp+80h] [rbp-49h]
	__int128 v39[3]; // [rsp+90h] [rbp-39h]
	__int128 v40; // [rsp+C0h] [rbp-9h]
	__int128 v41; // [rsp+D0h] [rbp+7h]
	int v42; // [rsp+E0h] [rbp+17h]

	v1 = dword_140A12138;
	v3 = (unsigned __int64*)dword_140A12138;
	if (*(_QWORD*)(a1 + 24) < *(_QWORD*)(a1 + 16))
		v3 = *(unsigned __int64**)(a1 + 24);
	v4 = 0;
	v5 = *((_DWORD*)v3 + 2);
	if (v5 == 3)
		goto LABEL_7;
	if (v5 == 4 && sub_14005AC80((char*)(*v3 + 32), &v32))
	{
		v33 = 3;
		v3 = &v32;
	LABEL_7:
		v6 = (int)*(double*)v3;
		goto LABEL_8;
	}
	v6 = 0;
LABEL_8:
	v7 = *(_QWORD*)(a1 + 24);
	v8 = *(_QWORD*)(a1 + 16);
	v9 = dword_140A12138;
	v10 = 1;
	if (v7 + 16 < v8)
		v9 = (_DWORD*)(v7 + 16);
	v11 = v9[2];
	v12 = v11 && (v11 != 1 || *v9);
	v13 = (unsigned __int64*)dword_140A12138;
	v14 = v12;
	if (v7 + 32 < v8)
		v13 = (unsigned __int64*)(v7 + 32);
	v15 = *((_DWORD*)v13 + 2);
	if (v15 == 3)
		goto LABEL_22;
	if (v15 == 4 && sub_14005AC80((char*)(*v13 + 32), &v32))
	{
		v33 = 3;
		v13 = &v32;
	LABEL_22:
		v16 = (int)*(double*)v13;
		goto LABEL_23;
	}
	v16 = 0;
LABEL_23:
	if ((unsigned __int64)(*(_QWORD*)(a1 + 24) + 48i64) < *(_QWORD*)(a1 + 16))
		v1 = (_DWORD*)(*(_QWORD*)(a1 + 24) + 48i64);
	v17 = v1[2];
	if (!v17 || v17 == 1 && !*v1)
		v10 = 0;
	v38 = 0;
	v18 = &v35;
	v19 = 0i64;
	do
	{
		v20 = *(_DWORD*)((char*)&unk_140A1EB08 + v19);
		*(_DWORD*)((char*)&v37 + v19) = 0;
		v19 += 4i64;
		*(_DWORD*)((char*)v36 + v19 + 12) = v20;
		*(_QWORD*)v18 = 0i64;
		v18 = (__int128*)((char*)v18 + 8);
	} while (v19 < 16);
	LODWORD(v37) = v6;
	*(_QWORD*)((char*)&v37 + 4) = __PAIR64__(v6, v16);
	HIDWORD(v37) = v16;
	v39[1] = v35;
	v39[2] = v36[0];
	v40 = v36[1];
	v39[0] = v34;
	v41 = v37;
	if (v14)
		v21 = v38 | 0x100;
	else
		v21 = v38 & 0xFFFFFEFF;
	if (v10)
		v22 = v21 | 0x200;
	else
		v22 = v21 & 0xFFFFFDFF;
	v42 = v22;
	v23 = *(_QWORD*)(qword_140C63650 + 768);
	if (v23)
	{
		v24 = *(_QWORD*)(qword_140C63650 + 760);
		v25 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v24 + 8 * v25) + 400i64) != a1)
		{
			v25 = ++v4;
			if (v4 >= v23)
				return 0i64;
		}
		v26 = *(_QWORD*)(v24 + 8i64 * v4);
		if (v26)
		{
			v27 = v35;
			*(_OWORD*)(v26 + 2944) = v34;
			v28 = 64i64;
			*(_QWORD*)(v26 + 2960) = v27;
			v29 = 4i64;
			*(_QWORD*)(v26 + 2968) = *((_QWORD*)&v35 + 1);
			*(_OWORD*)(v26 + 2976) = v36[0];
			*(_OWORD*)(v26 + 2992) = v40;
			do
			{
				v30 = *(_DWORD*)((char*)v39 + v28);
				v28 += 4i64;
				*(_DWORD*)(v28 + v26 + 2940) = v30;
				--v29;
			} while (v29);
			*(_DWORD*)(v26 + 3024) = v22;
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

