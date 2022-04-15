//----- (00000001406AC0F0) ----------------------------------------------------
__int64 __fastcall sub_1406AC0F0(__int64 a1)
{
	_QWORD* v1; // r13
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // edi
	__int64 v6; // rax
	__int64 v7; // rbx
	_QWORD* v8; // rax
	__int64 v9; // rdx
	__int64 v10; // rcx
	int v11; // r8d
	__int64 v12; // r14
	_QWORD* v13; // rax
	unsigned int v14; // ecx
	unsigned __int64 v15; // rdx
	__int64 v16; // r8
	__int64 v17; // rax
	__int64 v18; // rcx
	_QWORD* v19; // rbx
	char* v20; // rdx
	_DWORD* v21; // rax
	int* v22; // rsi
	unsigned __int64 v23; // rdi
	int* v24; // rax
	unsigned __int16* v25; // rbx
	unsigned __int64 v26; // rdi
	__int64 v27; // rax
	__int128 v28; // xmm1
	_QWORD* v29; // rcx
	__int128 v30; // xmm1
	__int128 v31; // xmm1
	__int64 v32; // rax
	__int64 v33; // rcx
	__int64 v34; // rax
	__int64 v35; // rcx
	__int16* v36; // rax
	__int64 v37; // rdx
	__int64 v38; // r8
	int* v39; // r14
	__int64 v40; // rsi
	int* v41; // rax
	int* v42; // rdi
	unsigned __int64 v43; // rsi
	int v44; // eax
	unsigned __int64 v45; // r12
	unsigned __int64 v46; // r15
	unsigned __int64 v47; // r12
	__int64 v48; // r14
	unsigned __int64 v49; // rsi
	_QWORD* v50; // rax
	__int64 v52; // [rsp+20h] [rbp-E0h] BYREF
	__int64 v53; // [rsp+28h] [rbp-D8h]
	__int64 v54; // [rsp+30h] [rbp-D0h]
	__int64 v55; // [rsp+38h] [rbp-C8h]
	__int64(__fastcall * *v56)(); // [rsp+40h] [rbp-C0h] BYREF
	int v57; // [rsp+48h] [rbp-B8h]
	_QWORD* v58; // [rsp+50h] [rbp-B0h]
	int v59; // [rsp+58h] [rbp-A8h]
	__int128 v60; // [rsp+60h] [rbp-A0h]
	__int128 v61; // [rsp+70h] [rbp-90h]
	__int128 v62; // [rsp+80h] [rbp-80h]
	__int128 v63; // [rsp+90h] [rbp-70h]
	__int128 v64; // [rsp+A0h] [rbp-60h]
	__int128 v65; // [rsp+B0h] [rbp-50h]
	__int64 v66; // [rsp+C0h] [rbp-40h]
	__int64 v67; // [rsp+D0h] [rbp-30h] BYREF
	__int64 v68; // [rsp+D8h] [rbp-28h]
	__int64 v69; // [rsp+F0h] [rbp-10h] BYREF
	int* v70; // [rsp+F8h] [rbp-8h]
	__int64 v71; // [rsp+158h] [rbp+58h]
	__int64 v72; // [rsp+160h] [rbp+60h]

	v1 = (_QWORD*)a1;
	v58 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v56 = off_140B569F0;
	v59 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0((__int64)v1);
	v3 = v1[2];
	v4 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	v1[2] += 16i64;
	v5 = sub_1400578C0((__int64)v1);
	v57 = v5;
	v6 = sub_1406A93C0(v1);
	v7 = v6;
	if (!v6)
	{
		v8 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v9 = v1[2];
		*(_QWORD*)v9 = *v8;
		*(_DWORD*)(v9 + 8) = *((_DWORD*)v8 + 2);
		v1[2] += 16i64;
		goto LABEL_62;
	}
	v10 = v6;
	v53 = 0i64;
	v54 = 0i64;
	v55 = 0i64;
	if (qword_140C7DFE0)
	{
		v11 = 6;
	}
	else
	{
		sub_1405ACF20(v6, &v52, 5);
		sub_1405ACF20(v7, &v52, 10);
		v11 = 9;
		v10 = v7;
	}
	sub_1405ACF20(v10, &v52, v11);
	v12 = v53;
	if (v53 == v54)
	{
		v13 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v9 = v1[2];
		*(_QWORD*)v9 = *v13;
		*(_DWORD*)(v9 + 8) = *((_DWORD*)v13 + 2);
		v1[2] += 16i64;
		goto LABEL_60;
	}
	v14 = 0;
	v15 = *(_QWORD*)(qword_140C63650 + 768);
	if (v15)
	{
		v16 = *(_QWORD*)(qword_140C63650 + 760);
		v17 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v16 + 8 * v17) + 400i64) != v1)
		{
			v17 = ++v14;
			if (v14 >= v15)
				goto LABEL_14;
		}
		v18 = *(_QWORD*)(v16 + 8i64 * v14);
	}
	else
	{
	LABEL_14:
		v18 = 0i64;
	}
	v19 = *(_QWORD**)(v18 + 400);
	v20 = (char*)sub_14018F0E0(&v67, word_1409F68B4)[1];
	v21 = (_DWORD*)(v19[3] + 16i64);
	if ((unsigned __int64)v21 < v19[2] && v21 != dword_140A12138 && *(int*)(v19[3] + 24i64) > 0)
		v20 = (char*)sub_140056BB0(v19, 2u, 0i64);
	sub_14018F2D0(&v69, v20);
	if (v68)
		sub_14018B900(v68, 0);
	v22 = v70;
	if (v70)
	{
		v23 = 0i64;
		if (*(_WORD*)v70)
		{
			do
				++v23;
			while (*((_WORD*)v70 + v23));
		}
		v24 = sub_14018B280(2 * v23 + 18, 0);
		if (v24)
		{
			*((_QWORD*)v24 + 1) = v23;
			*(_QWORD*)v24 = off_140B55060;
		}
		else
		{
			v24 = 0i64;
		}
		v25 = (unsigned __int16*)(v24 + 4);
		v26 = v23;
		sub_1407DB590(v24 + 4, v22, v26 * 2);
		v25[v26] = 0;
		sub_14018B900((__int64)v22, 0);
	}
	else
	{
		v25 = 0i64;
	}
	v27 = v12;
	v71 = v12;
	do
	{
		v28 = *(_OWORD*)(v27 + 16);
		v29 = *(_QWORD**)(qword_140C659F0 + 824);
		v60 = *(_OWORD*)v27;
		v61 = v28;
		v30 = *(_OWORD*)(v27 + 48);
		v62 = *(_OWORD*)(v27 + 32);
		v63 = v30;
		v31 = *(_OWORD*)(v27 + 80);
		v64 = *(_OWORD*)(v27 + 64);
		v65 = v31;
		v66 = *(_QWORD*)(v27 + 96);
		v32 = sub_1405B1510(v29);
		if (!v32)
			goto LABEL_57;
		v72 = sub_1404C9E20(v33, *(_DWORD*)(v32 + 188), v61);
		if (!v72)
			goto LABEL_57;
		v34 = sub_140203DA0(HIDWORD(v64));
		if (!v34)
			goto LABEL_57;
		v36 = sub_14034BDD0(v35, *(_DWORD*)(v34 + 12));
		v39 = (int*)v36;
		if (v36)
		{
			v40 = 0i64;
			if (*v36)
			{
				do
					++v40;
				while (v36[v40]);
			}
			v41 = sub_14018B280(2 * v40 + 18, 0);
			if (v41)
			{
				*(_QWORD*)v41 = off_140B55060;
				*((_QWORD*)v41 + 1) = v40;
			}
			else
			{
				v41 = 0i64;
			}
			v42 = v41 + 4;
			v43 = 2 * v40;
			sub_1407DB590(v41 + 4, v39, v43);
			*(_WORD*)((char*)v42 + v43) = 0;
		}
		else
		{
			v42 = 0i64;
		}
		if (v25 == word_1409F686C)
			goto LABEL_53;
		if (v25)
		{
			v37 = *v25;
			v38 = 0i64;
			if (!*v25)
			{
				while ((_WORD)v37)
				{
					v37 = v25[v38 + 1];
					v44 = word_1409F686C[++v38];
					if ((_DWORD)v37 != v44)
						goto LABEL_47;
				}
				goto LABEL_53;
			}
		}
	LABEL_47:
		v45 = *((_QWORD*)v42 - 1);
		v46 = *((_QWORD*)v25 - 1);
		if (v45 >= v46)
		{
			v47 = v45 - v46;
			v48 = (__int64)v42;
			v49 = 0i64;
			while ((unsigned int)sub_14018E3E0(v48, v25, v46) || v25[v46])
			{
				++v49;
				v48 += 2i64;
				if (v49 > v47)
					goto LABEL_55;
			}
		LABEL_53:
			if ((unsigned int)sub_1406AE160(v1, *(_DWORD*)(v72 + 496)))
			{
				sub_1400FB470((__int64)&v56);
				v1 = v58;
				v58[2] -= 16i64;
			}
		}
	LABEL_55:
		if (v42)
			(*(void(__fastcall**)(int*, __int64, __int64))(*((_QWORD*)v42 - 2) + 8i64))(v42 - 4, v37, v38);
	LABEL_57:
		v27 = v71 + 104;
		v71 = v27;
	} while (v27 != v54);
	v5 = v57;
	v50 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v57);
	v9 = v1[2];
	*(_QWORD*)v9 = *v50;
	*(_DWORD*)(v9 + 8) = *((_DWORD*)v50 + 2);
	v1[2] += 16i64;
	if (v25)
		(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)v25 - 2) + 8i64))(v25 - 8);
LABEL_60:
	if (v53)
		sub_14018B900(v53, 0);
LABEL_62:
	sub_1400579E0((__int64)v1, v9, v5);
	return 1i64;
}
// 1406AC3F2: variable 'v33' is possibly undefined
// 1406AC418: variable 'v35' is possibly undefined
// 1406AC522: variable 'v37' is possibly undefined
// 1406AC522: variable 'v38' is possibly undefined
// 1406AC5C2: variable 'v9' is possibly undefined
// 1409F686C: using guessed type unsigned __int16 word_1409F686C[32];
// 1409F68B4: using guessed type unsigned __int16 word_1409F68B4[40];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C7DFE0: using guessed type __int64 qword_140C7DFE0;

