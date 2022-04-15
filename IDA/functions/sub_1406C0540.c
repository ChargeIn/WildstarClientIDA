#include "../winhttp.h"

//----- (00000001406C0540) ----------------------------------------------------
__int64 __fastcall sub_1406C0540(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // r15
	_DWORD* v4; // rsi
	__int128* v5; // rcx
	int v6; // eax
	int v7; // r12d
	double v8; // xmm0_8
	unsigned __int64 v9; // rax
	_DWORD* v10; // rbx
	__int64 v11; // rax
	__int64 v12; // r9
	double v13; // xmm6_8
	__int64 v14; // rcx
	int v15; // eax
	__int64 v16; // rax
	int v17; // ecx
	__int64* v18; // rax
	__int64 v19; // rax
	_DWORD* v20; // rax
	_DWORD* v21; // rbx
	__int64 v22; // rax
	__int64 v23; // r9
	__int64 v24; // rcx
	int v25; // eax
	__int64 v26; // rax
	int v27; // ecx
	__int64* v28; // rax
	__int64 v29; // rax
	_DWORD* v30; // rax
	_DWORD* v31; // rbx
	__int64 v32; // rax
	__int64 v33; // r9
	__int64 v34; // rcx
	int v35; // eax
	__int64 v36; // rax
	int v37; // ecx
	__int64* v38; // rax
	char* v39; // rax
	int v40; // eax
	_DWORD* v41; // rdx
	int v42; // r14d
	int v43; // ecx
	BOOL v44; // ebx
	__int64 v45; // rdx
	unsigned __int64 v46; // rcx
	__int64 v47; // rsi
	int* v48; // rax
	int* v49; // r13
	__m128* v50; // rsi
	int* v51; // rax
	__int64 v52; // rbx
	int* v53; // r12
	int* v54; // rax
	int* v55; // r14
	__int64 v56; // rdx
	__int64 v57; // rcx
	int v58; // eax
	__int64 v59; // rcx
	__m128i v60; // xmm0
	__int64 v61; // rax
	__int64 v62; // rcx
	__int64 v63; // [rsp+50h] [rbp-B0h] BYREF
	int* v64[3]; // [rsp+58h] [rbp-A8h] BYREF
	__int128 v65; // [rsp+70h] [rbp-90h] BYREF
	__int64(__fastcall * *v66)(); // [rsp+80h] [rbp-80h] BYREF
	int v67; // [rsp+88h] [rbp-78h]
	_QWORD* v68; // [rsp+90h] [rbp-70h]
	_QWORD v69[30]; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v70; // [rsp+1D8h] [rbp+D8h] BYREF

	result = sub_1406C01C0(a1);
	v3 = result;
	if (!result)
		return result;
	v4 = dword_140A12138;
	v5 = (__int128*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v5 = (__int128*)(a1[3] + 16i64);
	v6 = *((_DWORD*)v5 + 2);
	if (v6 == 3)
		goto LABEL_8;
	if (v6 == 4 && sub_14005AC80((char*)(*(_QWORD*)v5 + 32i64), (unsigned __int64*)&v70))
	{
		DWORD2(v65) = 3;
		v5 = &v65;
		*(_QWORD*)&v65 = v70;
	LABEL_8:
		v7 = (int)*(double*)v5;
		goto LABEL_9;
	}
	v7 = 0;
LABEL_9:
	v8 = 0.0;
	v9 = a1[3] + 32i64;
	v10 = dword_140A12138;
	v65 = 0i64;
	if (v9 < a1[2])
		v10 = (_DWORD*)v9;
	v11 = sub_140062650((__int64)a1, qword_1409F71FC, 1ui64);
	v12 = a1[2];
	v63 = v11;
	LODWORD(v64[0]) = 4;
	sub_14005E8E0((__int64)a1, (__int64)v10, (int*)&v63, v12);
	v13 = 0.0;
	a1[2] += 16i64;
	v14 = a1[2];
	v15 = *(_DWORD*)(v14 - 8);
	if (v15 == 3 || v15 == 4 && sub_14005AC80((char*)(*(_QWORD*)(v14 - 16) + 32i64), (unsigned __int64*)&v70))
	{
		v16 = a1[2];
		v17 = *(_DWORD*)(v16 - 8);
		v18 = (__int64*)(v16 - 16);
		if (v17 != 3)
		{
			if (v17 != 4 || !sub_14005AC80((char*)(*v18 + 32), (unsigned __int64*)&v70))
			{
				v8 = 0.0;
				goto LABEL_19;
			}
			LODWORD(v64[0]) = 3;
			v18 = &v63;
			v63 = v70;
		}
		v8 = *(double*)v18;
	LABEL_19:
		*(float*)&v8 = v8;
		LODWORD(v65) = LODWORD(v8);
	}
	v19 = a1[3];
	a1[2] -= 16i64;
	v20 = (_DWORD*)(v19 + 32);
	v21 = dword_140A12138;
	if ((unsigned __int64)v20 < a1[2])
		v21 = v20;
	v22 = sub_140062650((__int64)a1, (unsigned __int64*)&unk_1409F71AC, 1ui64);
	v23 = a1[2];
	v63 = v22;
	LODWORD(v64[0]) = 4;
	sub_14005E8E0((__int64)a1, (__int64)v21, (int*)&v63, v23);
	a1[2] += 16i64;
	v24 = a1[2];
	v25 = *(_DWORD*)(v24 - 8);
	if (v25 == 3 || v25 == 4 && sub_14005AC80((char*)(*(_QWORD*)(v24 - 16) + 32i64), (unsigned __int64*)&v70))
	{
		v26 = a1[2];
		v27 = *(_DWORD*)(v26 - 8);
		v28 = (__int64*)(v26 - 16);
		if (v27 != 3)
		{
			if (v27 != 4 || !sub_14005AC80((char*)(*v28 + 32), (unsigned __int64*)&v70))
			{
				v8 = 0.0;
				goto LABEL_30;
			}
			LODWORD(v64[0]) = 3;
			v28 = &v63;
			v63 = v70;
		}
		v8 = *(double*)v28;
	LABEL_30:
		*(float*)&v8 = v8;
		DWORD1(v65) = LODWORD(v8);
	}
	v29 = a1[3];
	a1[2] -= 16i64;
	v30 = (_DWORD*)(v29 + 32);
	v31 = dword_140A12138;
	if ((unsigned __int64)v30 < a1[2])
		v31 = v30;
	v32 = sub_140062650((__int64)a1, qword_1409F71BC, 1ui64);
	v33 = a1[2];
	v63 = v32;
	LODWORD(v64[0]) = 4;
	sub_14005E8E0((__int64)a1, (__int64)v31, (int*)&v63, v33);
	a1[2] += 16i64;
	v34 = a1[2];
	v35 = *(_DWORD*)(v34 - 8);
	if (v35 != 3 && (v35 != 4 || !sub_14005AC80((char*)(*(_QWORD*)(v34 - 16) + 32i64), (unsigned __int64*)&v70)))
		goto LABEL_42;
	v36 = a1[2];
	v37 = *(_DWORD*)(v36 - 8);
	v38 = (__int64*)(v36 - 16);
	if (v37 != 3)
	{
		if (v37 != 4 || !sub_14005AC80((char*)(*v38 + 32), (unsigned __int64*)&v70))
			goto LABEL_41;
		LODWORD(v64[0]) = 3;
		v38 = &v63;
		v63 = v70;
	}
	v13 = *(double*)v38;
LABEL_41:
	v8 = v13;
	DWORD2(v65) = LODWORD(v8);
LABEL_42:
	a1[2] -= 16i64;
	v39 = (char*)sub_140056BB0(a1, 4u, 0i64);
	sub_14018F2D0(&v63, v39);
	sub_140770490((__int64)v69);
	sub_140770630((__int64)v69, a1, 5);
	v40 = sub_140121AC0(a1, 6u, (__int64)off_140B38AC8, 7ui64);
	v41 = dword_140A12138;
	v42 = v40;
	if ((unsigned __int64)(a1[3] + 96i64) < a1[2])
		v41 = (_DWORD*)(a1[3] + 96i64);
	v43 = v41[2];
	v44 = v43 && (v43 != 1 || *v41);
	v68 = a1;
	v67 = -2;
	v66 = off_140B56A08;
	sub_1400579E0((__int64)a1, (__int64)v41, -2);
	v45 = (__int64)v68;
	v46 = v68[2];
	if (v68[3] + 112i64 < v46)
		v4 = (_DWORD*)(v68[3] + 112i64);
	*(_QWORD*)v46 = *(_QWORD*)v4;
	*(_DWORD*)(v46 + 8) = v4[2];
	*(_QWORD*)(v45 + 16) += 16i64;
	v67 = sub_1400578C0((__int64)v68);
	v47 = *(_QWORD*)(*(_QWORD*)(v3 + 696) + 96i64);
	v48 = sub_14018B280(384i64, 0);
	v49 = v64[0];
	if (v48)
		v50 = (__m128*)sub_140770B60((__int64)v48, v7, &v65, word_1409F7164, v47, v64[0], (__int64)v69, v42, (__int64)&v66);
	else
		v50 = 0i64;
	v50[23].m128_i32[2] = v44;
	LODWORD(v63) = 0;
	v51 = sub_14018DB00(0i64, 1ui64, 8i64);
	v64[1] = (int*)1;
	*(_QWORD*)v51 = v50;
	v52 = *(_QWORD*)(v3 + 1080);
	v53 = v51;
	v64[0] = v51;
	v54 = sub_14018B280(40i64, 0);
	v55 = v54;
	if (v54 != (int*)-16i64)
	{
		v54[4] = 0;
		sub_1403FE910((__int64*)v54 + 3, (__int64)v64);
	}
	*(_QWORD*)v55 = v52;
	*((_QWORD*)v55 + 1) = *(_QWORD*)(v52 + 8);
	**(_QWORD**)(v52 + 8) = v55;
	*(_QWORD*)(v52 + 8) = v55;
	(*(void(__fastcall**)(int*))(*((_QWORD*)v53 - 2) + 8i64))(v53 - 4);
	v56 = qword_140C65898;
	v57 = *(_QWORD*)(qword_140C65898 + 25744);
	if (v57)
	{
		v58 = *(_DWORD*)(v3 + 2300);
		if (v58 == 2)
		{
			v59 = *(_QWORD*)(qword_140C65898 + 29096);
			if (!v59)
				v59 = *(_QWORD*)(qword_140C65898 + 29088);
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v59 + 8i64))(v59);
			v56 = qword_140C65898;
		}
		else if (v58 == 1)
		{
			*(_QWORD*)&v8 = *(unsigned int*)(v57 + 4800);
		}
		else
		{
			v8 = 0.0;
		}
		sub_140770FC0(v50, (__m128*)(*(_QWORD*)(v56 + 25744) + 4576i64), v8, *(float*)(v3 + 1872), v3 + 2280);
	}
	v60 = _mm_cvtsi32_si128(v50->m128_u32[2]);
	v61 = a1[2];
	*(_DWORD*)(v61 + 8) = 3;
	*(_QWORD*)v61 = *(_OWORD*)&_mm_cvtepi32_pd(v60);
	v62 = (__int64)v68;
	a1[2] += 16i64;
	v66 = off_140B56A08;
	if (v62)
		sub_1400579E0(v62, v56, v67);
	sub_140532D90(v69);
	if (v49)
		sub_14018B900((__int64)v49, 0);
	return 1i64;
}
// 1406C0B46: variable 'v56' is possibly undefined
// 1409F7164: using guessed type _WORD word_1409F7164[28];
// 1409F71BC: using guessed type unsigned __int64 qword_1409F71BC[6];
// 1409F71FC: using guessed type unsigned __int64 qword_1409F71FC[5];
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B38AC8: using guessed type wchar_t *off_140B38AC8[7];
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 1406C0540: using guessed type _QWORD var_120[30];

