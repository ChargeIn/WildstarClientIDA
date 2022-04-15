//----- (00000001400493B0) ----------------------------------------------------
void** __fastcall sub_1400493B0(__int64 a1)
{
	void** result; // rax
	__int64 v3; // rcx
	int v4; // eax
	__int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	__int128 v8; // xmm0
	__int128 v9; // xmm1
	__int64 v10; // rcx
	__int128 v11; // xmm0
	__int128 v12; // xmm1
	__int64 v13; // r15
	unsigned int v14; // r14d
	__int64 v15; // rdi
	int v16; // ebx
	int v17; // eax
	int* v18; // r8
	double v19; // xmm0_8
	int v20; // eax
	int v21; // eax
	int v22; // ecx
	__int64 v23; // rdx
	int v24; // ebx
	int v25; // eax
	__int64 v26; // rbx
	__int64 v27; // r14
	__int64 v28; // rcx
	__int64 v29; // r8
	__int64 v30; // rax
	__int64 v31; // rax
	__int64 v32; // rcx
	__int64 v33; // [rsp+28h] [rbp-89h] BYREF
	int v34; // [rsp+30h] [rbp-81h]
	int v35[5]; // [rsp+38h] [rbp-79h] BYREF
	__int64 v36; // [rsp+4Ch] [rbp-65h]
	int v37; // [rsp+54h] [rbp-5Dh]
	int v38[2]; // [rsp+58h] [rbp-59h] BYREF
	__int64 v39; // [rsp+60h] [rbp-51h]
	__int64 v40; // [rsp+68h] [rbp-49h]
	__int64 v41; // [rsp+70h] [rbp-41h]
	int v42[2]; // [rsp+78h] [rbp-39h] BYREF
	__int64 v43; // [rsp+80h] [rbp-31h]
	__int64 v44; // [rsp+88h] [rbp-29h]
	__int64 v45; // [rsp+90h] [rbp-21h]
	__int128 v46[4]; // [rsp+98h] [rbp-19h] BYREF
	__int64 v47; // [rsp+D8h] [rbp+27h]
	void* retaddr; // [rsp+110h] [rbp+5Fh] BYREF

	result = &retaddr;
	v3 = *(_QWORD*)(a1 + 16);
	if (!v3)
		return result;
	LODWORD(v33) = -1;
	v4 = (*(__int64(__fastcall**)(__int64, __int64*))(*(_QWORD*)v3 + 256i64))(v3, &v33) - 537526274;
	if (!v4)
	{
		v30 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 16) + 272i64))(*(_QWORD*)(a1 + 16), 0i64);
		v31 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v30 + 1168i64))(v30);
		*(_OWORD*)(a1 + 5008) = *(_OWORD*)(v31 + 32);
		*(_DWORD*)(a1 + 5024) = *(_DWORD*)(v31 + 48);
		goto LABEL_29;
	}
	if (v4 != 2)
		goto LABEL_29;
	v5 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 328i64))(*(_QWORD*)(a1 + 24));
	v6 = v5;
	if (v5)
	{
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v5 + 648i64))(v5, 0i64, 0i64);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 936i64))(v6);
	}
	v7 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 16) + 280i64))(*(_QWORD*)(a1 + 16), 0i64);
	(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 24) + 336i64))(*(_QWORD*)(a1 + 24), v7);
	if (!*(_QWORD*)(a1 + 5040) || *(_DWORD*)(a1 + 5080))
	{
		v8 = *(_OWORD*)(a1 + 4944);
		v9 = *(_OWORD*)(a1 + 4960);
		v10 = *(_QWORD*)(a1 + 24);
		v47 = 0i64;
		v46[0] = v8;
		v11 = *(_OWORD*)(a1 + 4976);
		v46[1] = v9;
		v12 = *(_OWORD*)(a1 + 4992);
		v46[2] = v11;
		v46[3] = v12;
		(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v10 + 320i64))(v10, v46);
	}
	else
	{
		*(_DWORD*)(a1 + 5076) = 1;
	}
	v13 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 24) + 328i64))(*(_QWORD*)(a1 + 24));
	(*(void(__fastcall**)(__int64, void(__fastcall*)(__int64*, unsigned int, __int64, int, int, __int64), __int64))(*(_QWORD*)v13 + 648i64))(
		v13,
		sub_140048710,
		a1);
	v14 = 0;
	v15 = a1 + 5104;
	do
	{
		if (!*(_DWORD*)v15)
		{
			if (v14)
				goto LABEL_20;
			v24 = (int)((*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890) * 65536.0);
			v25 = sub_140048880(a1);
			v38[1] = v24;
			v39 = 1065353216i64;
			v40 = 1i64;
			v41 = 0i64;
			v38[0] = v25;
			v18 = v38;
			goto LABEL_18;
		}
		if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v13 + 408i64))(v13))
		{
			*(_QWORD*)(v15 + 8) = 0i64;
			*(_QWORD*)v15 = 0i64;
			*(_DWORD*)(v15 + 16) = 1065353216;
			if (v14)
				goto LABEL_20;
			v16 = sub_1401AE6A0(0, 0xFFFF);
			v17 = sub_140048880(a1);
			v42[1] = v16;
			v43 = 1065353216i64;
			v44 = 1i64;
			v45 = 0i64;
			v42[0] = v17;
			v18 = v42;
		LABEL_18:
			v23 = 0i64;
			goto LABEL_19;
		}
		v19 = (*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890);
		v20 = *(_DWORD*)v15;
		v35[3] = 0;
		v35[0] = v20;
		v21 = *(_DWORD*)(v15 + 4);
		v22 = (int)(v19 * 65536.0);
		LODWORD(v19) = *(_DWORD*)(v15 + 16);
		v36 = 0i64;
		v37 = 0;
		v18 = v35;
		v35[2] = LODWORD(v19);
		v35[1] = v22;
		v35[4] = v21;
		v23 = v14;
	LABEL_19:
		(*(void(__fastcall**)(__int64, __int64, int*))(*(_QWORD*)v13 + 584i64))(v13, v23, v18);
	LABEL_20:
		++v14;
		v15 += 24i64;
	} while (v14 < 4);
	if (((*(_QWORD*)(a1 + 4920) - *(_QWORD*)(a1 + 4912)) & 0xFFFFFFFFFFFFFFFCui64) != 0)
	{
		v26 = *(_QWORD*)(a1 + 16);
		v27 = *(int*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v26 + 16i64))(v26) + 16);
		v28 = *(int*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v26 + 16i64))(v26) + 12);
		if ((unsigned int)v28 > 0x10 || (unsigned int)v27 > 2)
			v29 = qword_140C658E8;
		else
			v29 = *(_QWORD*)(32 * v28 + *(_QWORD*)(qword_140C658E8 + 88) + 8) + 80 * v27;
		(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 16) + 312i64))(
			*(_QWORD*)(a1 + 16),
			a1 + 4904,
			v29);
	}
	else
	{
		sub_14002FE90(a1 + 32, *(_QWORD*)(a1 + 16));
		sub_140030080(a1 + 32, *(_QWORD*)(a1 + 16));
	}
LABEL_29:
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 344i64))(*(_QWORD*)(a1 + 16));
	(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 16) + 352i64))(*(_QWORD*)(a1 + 16), 0i64);
	v32 = *(_QWORD*)(a1 + 16);
	v33 = 0i64;
	v34 = 0;
	return (void**)(*(__int64(__fastcall**)(__int64, __int64*))(*(_QWORD*)v32 + 56i64))(v32, &v33);
}
// 140C658E8: using guessed type __int64 qword_140C658E8;
// 140C77890: using guessed type __int64 qword_140C77890;

