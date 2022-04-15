//----- (00000001400DCBA0) ----------------------------------------------------
__int64 __fastcall sub_1400DCBA0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64* v3; // rsi
	_DWORD* v4; // rax
	int v5; // ecx
	unsigned int v7; // eax
	unsigned __int64 v8; // r8
	unsigned __int64 v9; // rdx
	unsigned __int64 v10; // rcx
	unsigned __int64 v11; // rbx
	__int64 v12; // rax
	_DWORD* v13; // rax
	unsigned __int64 v14; // r15
	unsigned int* v15; // rdi
	__int64 v16; // rax
	__int64 v17; // rdx
	__int64 v18; // rcx
	int v19; // r8d
	__m128i* v20; // rdi
	__int64 v21; // rdx
	int v22; // xmm1_4
	unsigned __int8 v23; // r8
	__int64 v24; // rcx
	__int64 v25; // rax
	int v26; // xmm0_4
	__int64 v27; // rax
	int v28; // xmm1_4
	__int64 v29; // rax
	int v30; // xmm0_4
	__int64 v31; // rax
	__int64 v32; // rax
	__int64 v33; // rcx
	_QWORD* v34; // rdx
	__int64 v35; // rdx
	__int64 v36; // rdx
	__int64 v37; // rcx
	bool v38; // zf
	__int64* v39; // rcx
	int* v40; // r14
	__int64 v41; // rax
	_WORD* v42; // rsi
	char v43[8]; // [rsp+30h] [rbp-D0h] BYREF
	unsigned __int64 v44; // [rsp+38h] [rbp-C8h] BYREF
	char v45[16]; // [rsp+40h] [rbp-C0h] BYREF
	__m128i* v46; // [rsp+50h] [rbp-B0h]
	__m128i* v47; // [rsp+58h] [rbp-A8h]
	int v48[2]; // [rsp+68h] [rbp-98h] BYREF
	__int128 v49; // [rsp+70h] [rbp-90h]
	__int64 v50; // [rsp+80h] [rbp-80h]
	__int64 v51; // [rsp+88h] [rbp-78h]
	__int64 v52; // [rsp+90h] [rbp-70h]
	__int64 v53; // [rsp+98h] [rbp-68h]
	int v54; // [rsp+A0h] [rbp-60h]
	int v55; // [rsp+A4h] [rbp-5Ch]
	int v56; // [rsp+A8h] [rbp-58h]
	int v57; // [rsp+ACh] [rbp-54h]
	int v58; // [rsp+B0h] [rbp-50h]
	int v59; // [rsp+B4h] [rbp-4Ch]
	int v60; // [rsp+B8h] [rbp-48h]
	int v61; // [rsp+BCh] [rbp-44h]
	int v62; // [rsp+C0h] [rbp-40h]
	int v63; // [rsp+D0h] [rbp-30h]
	_WORD* v64; // [rsp+E0h] [rbp-20h]
	int* v65; // [rsp+100h] [rbp+0h]
	int v66; // [rsp+118h] [rbp+18h]

	v2 = sub_1400D66A0(a1, 1u);
	v3 = (__int64*)v2;
	if (!v2 || !*(_QWORD*)(v2 + 344))
		return 0i64;
	v4 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v4 = (_DWORD*)(a1[3] + 16i64);
	v5 = v4[2];
	if (v5 != 3 && (v5 != 4 || !sub_14005AC80((char*)(*(_QWORD*)v4 + 32i64), &v44)))
		return 0i64;
	v7 = sub_1400584E0((__int64)a1, 2);
	v8 = *(_QWORD*)(v3[43] + 8);
	v9 = v8;
	v10 = *(_QWORD*)(v8 + 8);
	while (v10)
	{
		if (*(_DWORD*)(v10 + 32) < v7)
		{
			v10 = *(_QWORD*)(v10 + 24);
		}
		else
		{
			v9 = v10;
			v10 = *(_QWORD*)(v10 + 16);
		}
	}
	if (v9 == v8 || (v44 = v9, v7 < *(_DWORD*)(v9 + 32)))
		v44 = v8;
	v11 = v44;
	if (v44 != v8)
	{
		sub_1400C32C0((__int64)v45);
		v12 = a1[3];
		v43[0] = 0;
		v13 = (_DWORD*)(v12 + 32);
		if ((unsigned __int64)v13 < a1[2]
			&& v13 != dword_140A12138
			&& v13[2] == 5
			&& (unsigned __int8)sub_1400DBBB0((__int64)a1, 3, (__int64)v45, v43))
		{
			v14 = (unsigned int)v48[0];
			v15 = (unsigned int*)(*(_QWORD*)(v11 + 40) + 12i64);
			if (v15 != (unsigned int*)v48)
			{
				sub_1401429A0(qword_140C63678, *v15);
				v16 = qword_140C63678;
				*v15 = v14;
				if (v14 < *(_QWORD*)(v16 + 48))
				{
					v17 = *(_QWORD*)(v16 + 40);
					v18 = 32i64 * (unsigned int)v14;
					v19 = *(_DWORD*)(v18 + v17 + 16);
					if ((unsigned int)(v19 - 1) <= 0xFFFFFFFD)
						*(_DWORD*)(v18 + v17 + 16) = v19 + 1;
				}
			}
			v20 = v46;
			if (!v45[1] || v46 != v47)
			{
				v21 = v3[4];
				if (v21)
					sub_140109710((__int64*)(*(_QWORD*)(v11 + 40) + 136i64), v21 + 240, v46, 0);
				if (v43[0])
					*(_DWORD*)(*(_QWORD*)(v11 + 40) + 144i64) = dword_140C63664;
			}
			v22 = v55;
			v23 = v45[0];
			*(_DWORD*)(*(_QWORD*)(v11 + 40) + 128i64) = v63;
			v24 = *(_QWORD*)(v11 + 40);
			v25 = v50;
			*(_OWORD*)(v24 + 32) = v49;
			v26 = v54;
			*(_QWORD*)(v24 + 48) = v25;
			v27 = v51;
			*(_DWORD*)(v24 + 84) = v22;
			v28 = v57;
			*(_QWORD*)(v24 + 56) = v27;
			v29 = v52;
			*(_DWORD*)(v24 + 80) = v26;
			v30 = v56;
			*(_DWORD*)(v24 + 92) = v28;
			*(_QWORD*)(v24 + 64) = v29;
			v31 = v53;
			*(_DWORD*)(v24 + 88) = v30;
			*(_QWORD*)(v24 + 72) = v31;
			*(_DWORD*)(v24 + 96) = v58;
			*(_DWORD*)(v24 + 100) = v59;
			*(_DWORD*)(v24 + 104) = v60;
			*(_DWORD*)(v24 + 108) = v61;
			*(_DWORD*)(v24 + 112) = v62;
			v32 = *(_QWORD*)(v11 + 40);
			if (v23 != *(_BYTE*)(v32 + 8))
			{
				*(_BYTE*)(v32 + 8) = v23;
				v33 = *(_QWORD*)(v11 + 40);
				v34 = *(_QWORD**)(v33 + 200);
				if (v34)
					*v34 = *(_QWORD*)(v33 + 208);
				v35 = *(_QWORD*)(v33 + 208);
				if (v35)
					*(_QWORD*)(v35 + 200) = *(_QWORD*)(v33 + 200);
				*(_QWORD*)(v33 + 200) = 0i64;
				*(_QWORD*)(v33 + 208) = 0i64;
				v36 = *(_QWORD*)(v11 + 40);
				if (!*(_QWORD*)(v36 + 200))
				{
					v37 = v23 + 40i64;
					v38 = v3[v37] == 0;
					v39 = &v3[v37];
					if (!v38)
					{
						do
							v39 = (__int64*)(*v39 + 208);
						while (*v39);
					}
					*(_QWORD*)(v36 + 200) = v39;
					*(_QWORD*)(v36 + 208) = 0i64;
					*v39 = v36;
				}
			}
			v40 = v65;
			v41 = sub_1400E58C0(v3[4], v65);
			if (!v41)
				v41 = v3[87];
			v42 = v64;
			sub_1401507C0(*(_QWORD*)(v11 + 40), v64, v41, v66);
		}
		else
		{
			v40 = v65;
			v42 = v64;
			LODWORD(v14) = v48[0];
			v20 = v46;
		}
		if (v40)
			sub_14018B900((__int64)v40, 0);
		if (v42)
			sub_14018B900((__int64)v42, 0);
		sub_1401429A0(qword_140C63678, v48[1]);
		sub_1401429A0(qword_140C63678, v14);
		if (v20)
			sub_14018B900((__int64)v20, 0);
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;
// 1400DCBA0: using guessed type char var_110[8];

