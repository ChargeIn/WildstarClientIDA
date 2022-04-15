//----- (000000014078BBB0) ----------------------------------------------------
__int64 __fastcall sub_14078BBB0(_QWORD* a1)
{
	_DWORD* v1; // rax
	unsigned __int64 v2; // rdx
	_DWORD* v4; // rcx
	int v5; // edi
	__int64 v6; // r14
	unsigned int v7; // r15d
	_DWORD* v8; // rax
	char* v9; // rsi
	unsigned int v10; // edi
	_DWORD* v11; // rax
	int v12; // ecx
	_DWORD* v13; // rax
	__int64 v14; // rax
	_DWORD* v15; // rax
	__int64 v16; // rcx
	unsigned __int64* v17; // rax
	int v18; // ecx
	int v19; // edx
	unsigned __int64 v20; // r8
	bool v21; // zf
	unsigned __int64 v22; // rax
	__int64 v23; // rdx
	unsigned __int64 v24; // rdi
	unsigned __int64 v25; // r8
	__int64 v26; // r15
	unsigned __int64 v27; // r8
	__int64 v28; // rax
	unsigned int* v29; // r9
	__m128i v30; // xmm0
	__int64 v31; // rax
	unsigned __int64 v32; // r8
	__int64 v33; // r15
	__int64 v34; // rax
	unsigned int* v35; // r9
	__m128i v36; // xmm0
	__int64 v37; // rax
	unsigned __int64 v38; // r8
	__int64 v39; // r15
	__int64 v40; // rax
	unsigned int* v41; // r9
	unsigned __int64* v42; // r8
	__m128i v43; // xmm0
	__int64 v44; // rax
	unsigned __int64 v45; // r8
	__int64 v46; // r15
	__int64 v47; // rax
	unsigned int* v48; // r9
	__m128i v49; // xmm0
	__int64 v50; // rax
	__int64 v51; // r15
	__int64 v52; // rax
	unsigned int* v53; // r9
	__int64 v55; // [rsp+20h] [rbp-69h] BYREF
	int v56; // [rsp+28h] [rbp-61h]
	char v57[8]; // [rsp+30h] [rbp-59h] BYREF
	unsigned __int64* v58; // [rsp+38h] [rbp-51h]
	unsigned __int64* v59; // [rsp+40h] [rbp-49h]
	unsigned __int64* v60; // [rsp+48h] [rbp-41h]
	unsigned __int64* v61; // [rsp+50h] [rbp-39h]
	unsigned int v62; // [rsp+58h] [rbp-31h]
	unsigned int v63; // [rsp+5Ch] [rbp-2Dh]
	unsigned int v64; // [rsp+60h] [rbp-29h]
	unsigned int v65; // [rsp+64h] [rbp-25h]
	unsigned __int64 v66[7]; // [rsp+68h] [rbp-21h] BYREF
	int v67; // [rsp+A4h] [rbp+1Bh]

	v1 = (_DWORD*)a1[3];
	v2 = a1[2];
	if ((unsigned __int64)v1 >= v2 || v1 == dword_140A12138 || v1[2] != 8)
	{
		v5 = 0;
		v6 = (__int64)a1;
	}
	else
	{
		v4 = dword_140A12138;
		v5 = 1;
		if ((unsigned __int64)v1 < v2)
			v4 = v1;
		if (v4[2] == 8)
			v6 = *(_QWORD*)v4;
		else
			v6 = 0i64;
	}
	v7 = v5 + 2;
	v8 = sub_1400580E0((__int64)a1, v5 + 2);
	if (v8 == dword_140A12138 || (int)v8[2] <= 0)
		v9 = aFlnsu;
	else
		v9 = (char*)sub_140056BB0(a1, v7, 0i64);
	v10 = v5 + 1;
	v11 = sub_1400580E0((__int64)a1, v10);
	v12 = v11[2];
	if (v12 == 3 || v12 == 4 && sub_14005AC80((char*)(*(_QWORD*)v11 + 32i64), (unsigned __int64*)&v55))
	{
		v17 = (unsigned __int64*)sub_1400580E0((__int64)a1, v10);
		v18 = *((_DWORD*)v17 + 2);
		if (v18 != 3)
		{
			if (v18 != 4 || !sub_14005AC80((char*)(*v17 + 32), (unsigned __int64*)&v55))
			{
				v19 = 0;
			LABEL_33:
				v20 = *(_QWORD*)(v6 + 40);
				v21 = v19 == 0;
				if (v19 > 0)
				{
					do
					{
						if (v20 <= *(_QWORD*)(v6 + 80))
							break;
						--v19;
						if (!*(_BYTE*)(**(_QWORD**)(v20 + 8) + 10i64))
							v19 -= *(_DWORD*)(v20 + 36);
						v20 -= 40i64;
					} while (v19 > 0);
					v21 = v19 == 0;
				}
				if (v21)
				{
					v22 = *(_QWORD*)(v6 + 80);
					if (v20 > v22)
					{
						v67 = (__int64)(v20 - v22) / 40;
						goto LABEL_45;
					}
				}
				else if (v19 < 0)
				{
					v67 = 0;
					goto LABEL_45;
				}
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
				return 1i64;
			}
			v56 = 3;
			v17 = (unsigned __int64*)&v55;
		}
		v19 = (int)*(double*)v17;
		goto LABEL_33;
	}
	v13 = sub_1400580E0((__int64)a1, v10);
	if (v13 == dword_140A12138 || v13[2] != 6)
		sub_140056570(a1, v10, aFunctionOrLeve);
	sub_140058780((__int64)a1, (unsigned __int64*)">%s", v9);
	v14 = a1[2] - 16i64;
	if (*(_DWORD*)(v14 + 8) == 4)
		goto LABEL_25;
	if ((unsigned int)sub_14005E620((__int64)a1, a1[2] - 16i64))
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v14 = a1[2] - 16i64;
	LABEL_25:
		v9 = (char*)(*(_QWORD*)v14 + 32i64);
		goto LABEL_26;
	}
	v9 = 0i64;
LABEL_26:
	v15 = sub_1400580E0((__int64)a1, v10);
	v16 = a1[2];
	*(_QWORD*)v16 = *(_QWORD*)v15;
	*(_DWORD*)(v16 + 8) = v15[2];
	a1[2] += 16i64;
	sub_140058240((__int64)a1, v6, 1);
LABEL_45:
	if (!(unsigned int)sub_140059EF0(v6, v9, (__int64)v57))
		sub_140056570(a1, v7, aInvalidOption);
	sub_140058900((__int64)a1, v23, 2);
	v24 = -1i64;
	if (sub_1407DE0B4((__int64)v9, 0x53u))
	{
		sub_14078BA20((__int64)a1, (unsigned __int64*)aSource, v61);
		v25 = -1i64;
		do
			++v25;
		while (*((_BYTE*)v66 + v25));
		sub_140058710((__int64)a1, v66, v25);
		v26 = a1[2];
		v27 = -1i64;
		do
			++v27;
		while (aShortSrc[v27]);
		v28 = sub_140062650((__int64)a1, (unsigned __int64*)aShortSrc, v27);
		v29 = (unsigned int*)(a1[2] - 16i64);
		v55 = v28;
		v56 = 4;
		sub_14005EA50((__int64)a1, (__int64*)(v26 - 32), (int*)&v55, v29);
		v30 = _mm_cvtsi32_si128(v64);
		a1[2] -= 16i64;
		v31 = a1[2];
		*(_DWORD*)(v31 + 8) = 3;
		v32 = -1i64;
		*(_QWORD*)v31 = *(_OWORD*)&_mm_cvtepi32_pd(v30);
		a1[2] += 16i64;
		v33 = a1[2];
		do
			++v32;
		while (aLinedefined[v32]);
		v34 = sub_140062650((__int64)a1, (unsigned __int64*)aLinedefined, v32);
		v35 = (unsigned int*)(a1[2] - 16i64);
		v55 = v34;
		v56 = 4;
		sub_14005EA50((__int64)a1, (__int64*)(v33 - 32), (int*)&v55, v35);
		v36 = _mm_cvtsi32_si128(v65);
		a1[2] -= 16i64;
		v37 = a1[2];
		*(_DWORD*)(v37 + 8) = 3;
		v38 = -1i64;
		*(_QWORD*)v37 = *(_OWORD*)&_mm_cvtepi32_pd(v36);
		a1[2] += 16i64;
		v39 = a1[2];
		do
			++v38;
		while (aLastlinedefine[v38]);
		v40 = sub_140062650((__int64)a1, (unsigned __int64*)aLastlinedefine, v38);
		v41 = (unsigned int*)(a1[2] - 16i64);
		v55 = v40;
		v56 = 4;
		sub_14005EA50((__int64)a1, (__int64*)(v39 - 32), (int*)&v55, v41);
		v42 = v60;
		a1[2] -= 16i64;
		sub_14078BA20((__int64)a1, (unsigned __int64*)aWhat, v42);
	}
	if (sub_1407DE0B4((__int64)v9, 0x6Cu))
	{
		v43 = _mm_cvtsi32_si128(v62);
		v44 = a1[2];
		*(_DWORD*)(v44 + 8) = 3;
		v45 = -1i64;
		*(_QWORD*)v44 = *(_OWORD*)&_mm_cvtepi32_pd(v43);
		a1[2] += 16i64;
		v46 = a1[2];
		do
			++v45;
		while (aCurrentline[v45]);
		v47 = sub_140062650((__int64)a1, (unsigned __int64*)aCurrentline, v45);
		v48 = (unsigned int*)(a1[2] - 16i64);
		v55 = v47;
		v56 = 4;
		sub_14005EA50((__int64)a1, (__int64*)(v46 - 32), (int*)&v55, v48);
		a1[2] -= 16i64;
	}
	if (sub_1407DE0B4((__int64)v9, 0x75u))
	{
		v49 = _mm_cvtsi32_si128(v63);
		v50 = a1[2];
		*(_DWORD*)(v50 + 8) = 3;
		*(_QWORD*)v50 = *(_OWORD*)&_mm_cvtepi32_pd(v49);
		a1[2] += 16i64;
		v51 = a1[2];
		do
			++v24;
		while (aNups[v24]);
		v52 = sub_140062650((__int64)a1, (unsigned __int64*)aNups, v24);
		v53 = (unsigned int*)(a1[2] - 16i64);
		v55 = v52;
		v56 = 4;
		sub_14005EA50((__int64)a1, (__int64*)(v51 - 32), (int*)&v55, v53);
		a1[2] -= 16i64;
	}
	if (sub_1407DE0B4((__int64)v9, 0x6Eu))
	{
		sub_14078BA20((__int64)a1, (unsigned __int64*)aName_36, v58);
		sub_14078BA20((__int64)a1, (unsigned __int64*)aNamewhat, v59);
	}
	if (sub_1407DE0B4((__int64)v9, 0x4Cu))
		sub_14078BAD0((__int64)a1, v6, (unsigned __int64*)aActivelines);
	if (sub_1407DE0B4((__int64)v9, 0x66u))
		sub_14078BAD0((__int64)a1, v6, (unsigned __int64*)aFunc);
	return 1i64;
}
// 14078BE3D: variable 'v23' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 14078BBB0: using guessed type char var_B0[8];

