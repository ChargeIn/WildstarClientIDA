//----- (000000014012CF90) ----------------------------------------------------
__int64* __fastcall sub_14012CF90(__int64* a1, __int64 a2, _QWORD* a3)
{
	__int64 v4; // rdi
	int* v5; // rax
	int* v6; // rax
	__int64 v7; // rbx
	int* v8; // rdi
	__int64* v9; // rcx
	int v10; // edx
	int v11; // edx
	char* v12; // rdx
	__int64 v13; // rcx
	int v14; // eax
	__m128d v15; // xmm1
	double v16; // xmm0_8
	__int64* v17; // rax
	int* v18; // rcx
	__int64 v19; // rcx
	int* v20; // rax
	int* v21; // rbx
	int* v22; // rsi
	__int64* v23; // rcx
	int v24; // edx
	int v25; // edx
	int v26; // edx
	int v27; // edx
	__int64 v28; // rdi
	__int64 v29; // rbx
	_QWORD* v30; // rax
	char* v31; // rdx
	__int64 v32; // rdx
	__int64 v33; // rcx
	int v34; // eax
	__m128d v35; // xmm1
	double v36; // xmm0_8
	__int64* v37; // rax
	int* v38; // rcx
	int v39; // eax
	BOOL v40; // eax
	wchar_t* v41; // rdx
	__int64 v42; // rax
	__int64 i; // rax
	__int64 v44; // rbx
	__int64* v45; // rax
	__int64 v46; // r11
	__int64 v47; // rcx
	wchar_t v48; // dx
	wchar_t v49; // r8
	int v50; // eax
	__int64 v51; // rbx
	__int64 j; // rax
	__int64 v53; // rax
	__int64 v54; // rax
	int* v56; // [rsp+20h] [rbp-79h]
	__int64 v57; // [rsp+28h] [rbp-71h]
	__int64 v58; // [rsp+30h] [rbp-69h] BYREF
	int* v59; // [rsp+38h] [rbp-61h]
	int* v60; // [rsp+40h] [rbp-59h]
	int* v61; // [rsp+48h] [rbp-51h]
	__int64 v62; // [rsp+50h] [rbp-49h] BYREF
	__int64 v63; // [rsp+58h] [rbp-41h] BYREF
	__int64 v64; // [rsp+60h] [rbp-39h] BYREF
	__int64 v65; // [rsp+68h] [rbp-31h] BYREF
	__int64 v66; // [rsp+70h] [rbp-29h]
	__int64 v67; // [rsp+88h] [rbp-11h] BYREF
	__int64 v68; // [rsp+90h] [rbp-9h] BYREF
	int v69; // [rsp+98h] [rbp-1h]
	__int64 v70; // [rsp+A0h] [rbp+7h] BYREF
	int v71; // [rsp+A8h] [rbp+Fh]
	__int64 v72; // [rsp+B0h] [rbp+17h] BYREF
	int* v73; // [rsp+B8h] [rbp+1Fh]
	__int64 v74; // [rsp+C0h] [rbp+27h]
	int* v78; // [rsp+118h] [rbp+7Fh]

	v4 = a2;
	a1[1] = 0i64;
	a1[2] = 0i64;
	a1[3] = 0i64;
	v5 = sub_14018B280(16i64, 0);
	a1[1] = (__int64)v5;
	a1[2] = (__int64)v5;
	a1[3] = (__int64)(v5 + 4);
	if (v5)
		*(_WORD*)v5 = 0;
	*(_DWORD*)(*(_QWORD*)(v4 + 16) + 8i64) = 0;
	*(_QWORD*)(v4 + 16) += 16i64;
	while ((unsigned int)sub_14005BA70(v4, *(_QWORD*)(*(_QWORD*)(v4 + 16) - 32i64), *(_QWORD*)(v4 + 16) - 16i64))
	{
		*(_QWORD*)(v4 + 16) += 16i64;
		v6 = sub_14018B280(16i64, 0);
		v7 = (__int64)v6;
		v8 = v6 + 4;
		if (v6)
			*(_WORD*)v6 = 0;
		v9 = (__int64*)(*(_QWORD*)(a2 + 16) - 32i64);
		if (v9 == (__int64*)dword_140A12138)
			v10 = -1;
		else
			v10 = *((_DWORD*)v9 + 2);
		v11 = v10 - 3;
		if (!v11)
		{
			v14 = *((_DWORD*)v9 + 2);
			if (v14 == 3)
				goto LABEL_29;
			if (v14 == 4 && sub_14005AC80((char*)(*v9 + 32), (unsigned __int64*)&v63))
			{
				v71 = 3;
				v9 = &v70;
				v70 = v63;
			LABEL_29:
				v15 = (__m128d)(unsigned __int64) * v9;
			}
			else
			{
				v15 = 0i64;
			}
			v16 = v15.m128d_f64[0];
			if ((double)(int)v15.m128d_f64[0] != v15.m128d_f64[0])
				v16 = (double)((int)v15.m128d_f64[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v15, v15)) & 1));
			if (v16 == v15.m128d_f64[0])
			{
				sub_14018EFA0(&v65, (__int64)L"%.0f", v15.m128d_f64[0]);
				v17 = &v65;
			}
			else
			{
				v17 = sub_14012CE60(&v65, v15.m128d_f64[0]);
			}
			v18 = (int*)v17[1];
			v17[1] = v7;
			v78 = v18;
			v19 = v17[2];
			v17[2] = v7;
			v57 = v19;
			v17[3] = (__int64)v8;
			v13 = v66;
			if (!v66)
				goto LABEL_38;
		LABEL_37:
			sub_14018B900(v13, 0);
			goto LABEL_38;
		}
		if (v11 != 1)
			goto LABEL_12;
		if (*((_DWORD*)v9 + 2) != 4)
		{
			if (!(unsigned int)sub_14005E620(a2, *(_QWORD*)(a2 + 16) - 32i64))
			{
				v12 = 0i64;
				goto LABEL_23;
			}
			if (*(_QWORD*)(*(_QWORD*)(a2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a2 + 32) + 112i64))
				sub_14005E2C0(a2);
			v9 = (__int64*)(*(_QWORD*)(a2 + 16) - 32i64);
		}
		v12 = (char*)(*v9 + 32);
	LABEL_23:
		sub_14018F2D0(&v72, v12);
		v78 = v73;
		v57 = v74;
		if (v7)
		{
			v13 = v7;
			goto LABEL_37;
		}
	LABEL_38:
		v20 = sub_14018B280(16i64, 0);
		v21 = v20 + 4;
		v22 = v20;
		v59 = v20;
		v56 = v20;
		v60 = v20;
		v61 = v20 + 4;
		if (v20)
			*(_WORD*)v20 = 0;
		v4 = a2;
		v23 = (__int64*)(*(_QWORD*)(a2 + 16) - 16i64);
		if (v23 == (__int64*)dword_140A12138)
			v24 = -1;
		else
			v24 = *((_DWORD*)v23 + 2);
		v25 = v24 - 1;
		if (v25)
		{
			v26 = v25 - 2;
			if (!v26)
			{
				v34 = *((_DWORD*)v23 + 2);
				if (v34 == 3)
					goto LABEL_74;
				if (v34 == 4 && sub_14005AC80((char*)(*v23 + 32), (unsigned __int64*)&v67))
				{
					v69 = 3;
					v23 = &v68;
					v68 = v67;
				LABEL_74:
					v35 = (__m128d)(unsigned __int64) * v23;
				}
				else
				{
					v35 = 0i64;
				}
				v36 = v35.m128d_f64[0];
				if ((double)(int)v35.m128d_f64[0] != v35.m128d_f64[0])
					v36 = (double)((int)v35.m128d_f64[0] - (_mm_movemask_pd(_mm_unpacklo_pd(v35, v35)) & 1));
				if (v36 == v35.m128d_f64[0])
				{
					sub_14018EFA0(&v65, (__int64)L"%.0f", v35.m128d_f64[0]);
					v37 = &v65;
				}
				else
				{
					v37 = sub_14012CE60(&v65, v35.m128d_f64[0]);
				}
				v38 = v22;
				v22 = (int*)v37[1];
				v37[1] = (__int64)v38;
				v32 = v37[2];
				v37[2] = (__int64)v56;
				v37[3] = (__int64)v21;
				v33 = v66;
				goto LABEL_68;
			}
			v27 = v26 - 1;
			if (!v27)
			{
				if (*((_DWORD*)v23 + 2) != 4)
				{
					if (!(unsigned int)sub_14005E620(a2, *(_QWORD*)(a2 + 16) - 16i64))
					{
						v31 = 0i64;
						goto LABEL_67;
					}
					if (*(_QWORD*)(*(_QWORD*)(a2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a2 + 32) + 112i64))
						sub_14005E2C0(a2);
					v23 = (__int64*)(*(_QWORD*)(a2 + 16) - 16i64);
				}
				v31 = (char*)(*v23 + 32);
			LABEL_67:
				sub_14018F2D0(&v72, v31);
				v32 = v74;
				v33 = (__int64)v22;
				v22 = v73;
			LABEL_68:
				v56 = (int*)v32;
				if (v33)
					sub_14018B900(v33, 0);
				goto LABEL_94;
			}
			if (v27 == 1)
			{
				v7 = (__int64)v78;
				v28 = sub_1401A7740(a3[1], v78);
				sub_14012CF90(&v58, a2, v28);
				if (v59 == v60)
				{
					sub_1401A5A70(a3, (_QWORD*)v28);
				}
				else
				{
					if (!*(_QWORD*)(v28 + 16))
						(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v28 + 80) + 32i64))(*(_QWORD*)(v28 + 80));
					v29 = *(_QWORD*)(v28 + 80);
					(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v28 + 120i64))(v28, 0i64);
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v29 + 24i64))(v29, v28);
					v30 = (_QWORD*)sub_1401A7880(a3[1], v59);
					sub_1401A5A70(a3, v30);
					v7 = (__int64)v78;
				}
				if (v59)
					sub_14018B900((__int64)v59, 0);
				if (v22)
					sub_14018B900((__int64)v22, 0);
			LABEL_12:
				if (v7)
					sub_14018B900(v7, 0);
				v4 = a2;
				goto LABEL_15;
			}
			if (v20)
				sub_14018B900((__int64)v20, 0);
			if (v78)
			{
				sub_14018B900((__int64)v78, 0);
				*(_QWORD*)(a2 + 16) -= 16i64;
			}
			else
			{
			LABEL_15:
				*(_QWORD*)(v4 + 16) -= 16i64;
			}
		}
		else
		{
			v39 = *((_DWORD*)v23 + 2);
			v40 = v39 && (v39 != 1 || *(_DWORD*)v23);
			v41 = L"false";
			if (v40)
				v41 = L"true";
			v42 = 0i64;
			if (*v41)
			{
				do
					++v42;
				while (v41[v42]);
			}
			if ((2 * v42) >> 1)
			{
				sub_14001C310(&v58, (int*)v41, (int*)&v41[v42]);
				v22 = v59;
				v56 = v60;
			}
			else
			{
				sub_1407DB590(v22, (int*)v41, 0i64);
			}
		LABEL_94:
			for (i = 0i64; aXmlnode[i]; ++i)
				;
			v44 = (2 * i) >> 1;
			v45 = &v64;
			v46 = (v57 - (__int64)v78) >> 1;
			v64 = v44;
			v62 = v46;
			v47 = 0i64;
			if (v44 >= v46)
				v45 = &v62;
			if (*v45)
			{
				while (1)
				{
					v48 = *((_WORD*)v78 + v47);
					v49 = aXmlnode[v47];
					if (v48 != v49)
						break;
					if (++v47 >= (unsigned __int64)*v45)
						goto LABEL_101;
				}
				v50 = 1;
				if (v48 < v49)
					v50 = -1;
			}
			else
			{
			LABEL_101:
				if (v46 < v44)
					goto LABEL_108;
				v50 = v46 > v44;
			}
			if (!v50)
			{
				sub_1401A4C50((__int64)(a3 + 3), v22);
				v51 = (__int64)v78;
				goto LABEL_115;
			}
		LABEL_108:
			for (j = 0i64; aXmltext[j]; ++j)
				;
			v51 = (__int64)v78;
			if ((unsigned int)sub_1400454D0((__int64)v78, v57, L"__XmlText", (__int64)&aXmltext[j]))
			{
				v53 = (*(__int64(__fastcall**)(_QWORD*))(*a3 + 8i64))(a3);
				if (v53)
				{
					v54 = sub_1401A6C70(v53, v78);
					sub_1401A4C50(v54 + 32, v22);
				}
			}
			else if (&v58 != a1)
			{
				sub_14001C480((__int64)a1, v22, v56);
			}
		LABEL_115:
			if (v22)
				sub_14018B900((__int64)v22, 0);
			if (!v51)
				goto LABEL_15;
			sub_14018B900(v51, 0);
			*(_QWORD*)(a2 + 16) -= 16i64;
		}
	}
	*(_QWORD*)(v4 + 16) -= 16i64;
	return a1;
}
// 14012D135: conditional instruction was optimized away because rcx.8<100000000u
// 14012D3C6: conditional instruction was optimized away because rcx.8<100000000u
// 14012D5B1: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A204D8: using guessed type wchar_t aXmlnode[10];
// 140A204F0: using guessed type wchar_t aXmltext[10];
// 140A20950: using guessed type wchar_t a0f[5];
// 140A20970: using guessed type wchar_t aTrue[5];
// 140A20980: using guessed type wchar_t aFalse[6];

