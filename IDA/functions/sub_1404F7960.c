//----- (00000001404F7960) ----------------------------------------------------
__int64 __fastcall sub_1404F7960(__int64 a1, int a2)
{
	__int64 v3; // rcx
	__int64 v5; // rax
	__int64 v6; // rdi
	__int64 v7; // rax
	int* v8; // rax
	__int64 v9; // rbp
	__int64 v10; // rdi
	__int64 v11; // rax
	int* v12; // rax
	__int64 v13; // r14
	unsigned __int64 v15; // r12
	__int64 v16; // r13
	int* v17; // rdi
	int* v18; // rsi
	int v19; // r15d
	int* v20; // r14
	int* v21; // rax
	int* v22; // rbx
	__int64 v23; // rax
	int v24; // ebx
	int* v25; // rax
	int* v26; // rbp
	int* v27; // r14
	int* v28; // rax
	int* v29; // rbx
	__int64(__fastcall * v30)(wchar_t**, _QWORD, __int64); // rax
	unsigned int v31; // ebx
	__int64 v32; // rax
	unsigned int v33; // ebx
	__int64 v34; // rax
	int v35; // ebx
	int* v36; // rax
	int* v37; // rbp
	_QWORD* v38; // rcx
	__int64 v39; // rcx
	__int64 v40; // rcx
	_QWORD* v41; // rbx
	int* v42; // rax
	int* v43; // r14
	unsigned __int64 v44; // rax
	__int64 v45; // r15
	unsigned __int64 v46; // r13
	unsigned __int64 v47; // rbp
	int* v48; // rax
	__int64 v49; // rcx
	unsigned __int64 v50; // [rsp+30h] [rbp-158h]
	int v51; // [rsp+30h] [rbp-158h]
	__int64 v52; // [rsp+38h] [rbp-150h]
	__int64 v54; // [rsp+48h] [rbp-140h]
	char v55[240]; // [rsp+50h] [rbp-138h] BYREF

	v3 = *(_QWORD*)(a1 + 2328);
	if (v3 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v3 + 24i64))(v3) > 0)
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2328) + 112i64))(*(_QWORD*)(a1 + 2328));
	v5 = sub_1404835C0(qword_140C65918, a2);
	v6 = qword_140C65918;
	v54 = v5;
	v7 = sub_1404835C0(qword_140C65918, a2);
	if (v7 && *(_DWORD*)(v7 + 348))
	{
		v8 = sub_140484600(v6 + 80, (int*)(v7 + 348));
		v9 = sub_1404846C0((__int64)v8);
	}
	else
	{
		v9 = 0i64;
	}
	v10 = qword_140C65918;
	v52 = v9;
	v11 = sub_1404835C0(qword_140C65918, a2);
	if (v11 && *(_DWORD*)(v11 + 352))
	{
		v12 = sub_140484600(v10 + 112, (int*)(v11 + 352));
		v13 = sub_1404846C0((__int64)v12);
	}
	else
	{
		v13 = 0i64;
	}
	if (!v9)
		return 2147500037i64;
	sub_1401DAB50((__int64)v55, v9, 1.0);
	v15 = 0i64;
	v16 = 0i64;
	v17 = 0i64;
	v18 = 0i64;
	v50 = 0i64;
	if (v13)
	{
		v19 = 0;
		v20 = (int*)(v13 + 4);
		do
		{
			if (!*v20)
				break;
			v21 = sub_14018DB00((__int64)v17, v16 + 1, 4i64);
			v22 = v21;
			v21[v16] = *v20;
			if (v17 != v21)
			{
				sub_1407DB590(v21, v17, 4 * v16);
				if (v17)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v17 - 2) + 8i64))(v17 - 4);
				v17 = v22;
			}
			++v16;
			v23 = sub_14020B8E0(v20[6]);
			++v15;
			v24 = sub_1401DC0D0(v23);
			v25 = sub_14018DB00((__int64)v18, v15, 4i64);
			v26 = v25;
			v25[v50] = v24;
			if (v18 != v25)
			{
				sub_1407DB590(v25, v18, 4 * v50);
				if (v18)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v18 - 2) + 8i64))(v18 - 4);
				v18 = v26;
			}
			++v19;
			++v20;
			v50 = v15;
		} while ((unsigned __int64)v19 < 6);
		v9 = v52;
	}
	v51 = 0;
	v27 = (int*)(v9 + 192);
	while (*v27)
	{
		v28 = sub_14018DB00((__int64)v17, v16 + 1, 4i64);
		v29 = v28;
		v28[v16] = *v27;
		if (v17 != v28)
		{
			sub_1407DB590(v28, v17, 4 * v16);
			if (v17)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v17 - 2) + 8i64))(v17 - 4);
			v17 = v29;
		}
		v30 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
		v31 = *v27;
		++v16;
		if (qword_140C63840)
		{
			v32 = qword_140C63840(off_140A6ADA8, v31, qword_140C63858);
		}
		else
		{
			if (dword_140C64F64)
				goto LABEL_41;
			if ((int)sub_14020BAC0() < 0)
			{
			LABEL_40:
				v30 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
			LABEL_41:
				v33 = 0;
				goto LABEL_42;
			}
			v32 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C654E8 + 24i64))(qword_140C654E8, v31);
		}
		if (!v32)
			goto LABEL_40;
		v33 = *(_DWORD*)(v32 + 244);
		v30 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63840;
	LABEL_42:
		if (v30)
		{
			v34 = v30(off_140A6AD70, v33, qword_140C63858);
		}
		else if (dword_140C63DA4)
		{
			v34 = 0i64;
		}
		else if ((int)sub_14020B680() >= 0)
		{
			v34 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64BA8 + 24i64))(qword_140C64BA8, v33);
		}
		else
		{
			v34 = 0i64;
		}
		v35 = sub_1401DC0D0(v34);
		v36 = sub_14018DB00((__int64)v18, v15 + 1, 4i64);
		v36[v15] = v35;
		v37 = v36;
		if (v18 != v36)
		{
			sub_1407DB590(v36, v18, 4 * v15);
			if (v18)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v18 - 2) + 8i64))(v18 - 4);
			v18 = v37;
		}
		++v15;
		++v27;
		if ((unsigned __int64)++v51 >= 0x14)
			break;
	}
	sub_1404F75D0(a1, (__int64)v55, (__int64)v17, v18, v16, 0i64);
	if (*(_DWORD*)(v54 + 360))
	{
		v38 = *(_QWORD**)(a1 + 1024);
		if (v38)
			*v38 = *(_QWORD*)(a1 + 1032);
		v39 = *(_QWORD*)(a1 + 1032);
		if (v39)
			*(_QWORD*)(v39 + 1024) = *(_QWORD*)(a1 + 1024);
		v40 = *(_QWORD*)(a1 + 2328);
		*(_QWORD*)(a1 + 1024) = 0i64;
		*(_QWORD*)(a1 + 1032) = 0i64;
		if (v40 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v40 + 24i64))(v40) > 0)
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 2328) + 112i64))(*(_QWORD*)(a1 + 2328));
		v41 = (_QWORD*)(a1 + 2232);
		sub_1405005B0(a1 + 2232);
		sub_140019490((_QWORD*)(a1 + 2232));
		v42 = sub_14018B280(8i64, 0);
		v43 = v42;
		if (v42)
			*(_QWORD*)v42 = 0i64;
		else
			v43 = 0i64;
		if (*(_QWORD*)(a1 + 2232) == *(_QWORD*)(a1 + 2240))
			sub_1400290D0((__int64)v41);
		v44 = (*(__int64(__fastcall**)(__int64))(a1 + 2256))(v54 + 360);
		v45 = *(_QWORD*)(a1 + 2248);
		v46 = v44;
		v47 = v44 % *(_QWORD*)(a1 + 2240);
		v48 = sub_14018B280(32i64, 0);
		if (v48)
		{
			v49 = *(_QWORD*)(v45 + 8 * v47);
			*(_QWORD*)v48 = v46;
			*((_QWORD*)v48 + 1) = v49;
			LODWORD(v49) = *(_DWORD*)(v54 + 360);
			*((_QWORD*)v48 + 3) = v43;
			v48[4] = v49;
		}
		*(_QWORD*)(v45 + 8 * v47) = v48;
		++* v41;
	}
	if (v18)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v18 - 2) + 8i64))(v18 - 4);
	if (v17)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v17 - 2) + 8i64))(v17 - 4);
	return 0i64;
}
// 140A6AD70: using guessed type wchar_t *off_140A6AD70[2];
// 140A6ADA8: using guessed type wchar_t *off_140A6ADA8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63DA4: using guessed type int dword_140C63DA4;
// 140C64BA8: using guessed type __int64 qword_140C64BA8;
// 140C64F64: using guessed type int dword_140C64F64;
// 140C654E8: using guessed type __int64 qword_140C654E8;
// 140C65918: using guessed type __int64 qword_140C65918;

