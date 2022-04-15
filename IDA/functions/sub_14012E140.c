#include "../winhttp.h"

//----- (000000014012E140) ----------------------------------------------------
__int64 __fastcall sub_14012E140(__int64 a1, _QWORD* a2)
{
	__int64 v3; // rcx
	__int64 result; // rax
	int v5; // edx
	int v6; // edx
	__int64 v7; // rcx
	unsigned __int64 v8; // rax
	int* v9; // rbx
	__int64* v10; // rax
	int v11; // ecx
	int v12; // ecx
	char* v13; // rdx
	__int64 v14; // rcx
	int v15; // ecx
	__m128d v16; // xmm1
	int v17; // ecx
	double v18; // xmm0_8
	__int64* v19; // rax
	int* v20; // rcx
	int* v21; // rbx
	int* v22; // rdi
	__int64* v23; // rcx
	int v24; // eax
	int v25; // eax
	int v26; // eax
	int v27; // eax
	__int64 v28; // rax
	char* v29; // rdx
	_QWORD* v30; // rbx
	__int64 v31; // rax
	__int64 v32; // rax
	char* v33; // rdx
	__int16* v34; // rax
	int v35; // eax
	__m128d v36; // xmm1
	int v37; // ecx
	double v38; // xmm0_8
	__int64* v39; // rax
	__int64 v40; // rcx
	int v41; // eax
	BOOL v42; // eax
	int* v43; // rdx
	__int64 v44; // rax
	__int64 v45; // rax
	char* v46; // rdx
	__int64 v47; // rax
	__int64 v48; // rax
	__int64 v49; // rax
	__int64 v50; // [rsp+20h] [rbp-69h]
	__int64 v51; // [rsp+28h] [rbp-61h] BYREF
	__int64 v52; // [rsp+30h] [rbp-59h]
	__int64 v53; // [rsp+48h] [rbp-41h]
	__int64 v54; // [rsp+50h] [rbp-39h] BYREF
	__int64 v55; // [rsp+58h] [rbp-31h] BYREF
	__int64 v56; // [rsp+60h] [rbp-29h] BYREF
	int v57; // [rsp+68h] [rbp-21h]
	__int64 v58; // [rsp+70h] [rbp-19h] BYREF
	int v59; // [rsp+78h] [rbp-11h]
	__int64 v60; // [rsp+80h] [rbp-9h] BYREF
	int* v61; // [rsp+88h] [rbp-1h]
	int* v62; // [rsp+90h] [rbp+7h]
	int* v63; // [rsp+98h] [rbp+Fh]
	__int64 v64; // [rsp+A0h] [rbp+17h] BYREF
	int* v65; // [rsp+A8h] [rbp+1Fh]
	int v66; // [rsp+F0h] [rbp+67h]
	int* v68; // [rsp+100h] [rbp+77h]
	int* v69; // [rsp+108h] [rbp+7Fh]

	v3 = *(_QWORD*)(a1 + 16);
	result = ((v3 - *(_QWORD*)(a1 + 24)) >> 4) + 2;
	if (result <= 8000)
	{
		if (*(_QWORD*)(a1 + 56) - v3 <= 32)
		{
			v5 = *(_DWORD*)(a1 + 88);
			if (v5 < 2)
				v6 = v5 + 2;
			else
				v6 = 2 * v5;
			sub_140061210(a1, v6);
		}
		v7 = *(_QWORD*)(a1 + 40);
		v8 = *(_QWORD*)(a1 + 16) + 32i64;
		if (*(_QWORD*)(v7 + 16) < v8)
			*(_QWORD*)(v7 + 16) = v8;
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		for (*(_QWORD*)(a1 + 16) += 16i64; ; *(_QWORD*)(a1 + 16) -= 16i64)
		{
			while (1)
			{
				result = sub_14005BA70(a1, *(_QWORD*)(*(_QWORD*)(a1 + 16) - 32i64), *(_QWORD*)(a1 + 16) - 16i64);
				if (!(_DWORD)result)
				{
					*(_QWORD*)(a1 + 16) -= 16i64;
					return result;
				}
				*(_QWORD*)(a1 + 16) += 16i64;
				v9 = sub_14018B280(16i64, 0);
				if (v9)
					*(_WORD*)v9 = 0;
				v10 = (__int64*)(*(_QWORD*)(a1 + 16) - 32i64);
				v11 = v10 == (__int64*)dword_140A12138 ? -1 : *((_DWORD*)v10 + 2);
				v66 = v11;
				v12 = v11 - 3;
				if (!v12)
					break;
				if (v12 == 1)
				{
					if (*((_DWORD*)v10 + 2) != 4)
					{
						if (!(unsigned int)sub_14005E620(a1, (__int64)v10))
						{
							v13 = 0i64;
						LABEL_27:
							sub_14018F2D0(&v64, v13);
							v68 = v65;
							if (!v9)
								goto LABEL_43;
							v14 = (__int64)v9;
						LABEL_42:
							sub_14018B900(v14, 0);
							goto LABEL_43;
						}
						if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
							sub_14005E2C0(a1);
						v10 = (__int64*)(*(_QWORD*)(a1 + 16) - 32i64);
					}
					v13 = (char*)(*v10 + 32);
					goto LABEL_27;
				}
				if (!v9)
					goto LABEL_104;
				sub_14018B900((__int64)v9, 0);
				*(_QWORD*)(a1 + 16) -= 16i64;
			}
			v15 = *((_DWORD*)v10 + 2);
			if (v15 != 3)
			{
				if (v15 != 4 || !sub_14005AC80((char*)(*v10 + 32), (unsigned __int64*)&v55))
				{
					v16 = 0i64;
					goto LABEL_34;
				}
				v57 = 3;
				v10 = &v56;
				v56 = v55;
			}
			v16 = (__m128d)(unsigned __int64) * v10;
		LABEL_34:
			v17 = (int)v16.m128d_f64[0];
			v18 = v16.m128d_f64[0];
			if ((double)v17 != v16.m128d_f64[0])
				v18 = (double)(v17 - (_mm_movemask_pd(_mm_unpacklo_pd(v16, v16)) & 1));
			if (v18 == v16.m128d_f64[0])
			{
				sub_14018EFA0(&v51, (__int64)L"%.0f", v16.m128d_f64[0]);
				v19 = &v51;
			}
			else
			{
				v19 = sub_14012CE60(&v51, v16.m128d_f64[0]);
			}
			v20 = (int*)v19[1];
			v19[1] = (__int64)v9;
			v19[2] = (__int64)v9;
			v68 = v20;
			v19[3] = (__int64)(v9 + 4);
			v14 = v52;
			if (v52)
				goto LABEL_42;
		LABEL_43:
			v21 = sub_14018B280(16i64, 0);
			v22 = v21;
			v61 = v21;
			v62 = v21;
			v63 = v21 + 4;
			if (v21)
				*(_WORD*)v21 = 0;
			v23 = (__int64*)(*(_QWORD*)(a1 + 16) - 16i64);
			if (v23 == (__int64*)dword_140A12138)
				v24 = -1;
			else
				v24 = *((_DWORD*)v23 + 2);
			v25 = v24 - 1;
			if (!v25)
			{
				v41 = *((_DWORD*)v23 + 2);
				v42 = v41 && (v41 != 1 || *(_DWORD*)v23);
				v43 = (int*)"-";
				if (v42)
					v43 = (int*)&word_1409D8304;
				v44 = 0i64;
				if (*(_WORD*)v43)
				{
					do
						++v44;
					while (*((_WORD*)v43 + v44));
				}
				if ((2 * v44) >> 1)
				{
					sub_14001C310(&v60, v43, (int*)((char*)v43 + 2 * v44));
					v22 = v61;
				}
				else
				{
					sub_1407DB590(v21, v43, 0i64);
				}
				v34 = &word_1409D815C;
			LABEL_93:
				v69 = (int*)v34;
				v50 = a2[1];
				v53 = v50 + 128;
				v45 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v50 + 128) + 16i64))(v50 + 128);
				v30 = (_QWORD*)v45;
				if (v45)
				{
					*(_QWORD*)(v45 + 8) = v50;
					*(_QWORD*)(v45 + 16) = 0i64;
					*(_DWORD*)(v45 + 24) = 0;
					*(_QWORD*)(v45 + 32) = 0i64;
					*(_QWORD*)(v45 + 40) = 0i64;
					*(_QWORD*)(v45 + 48) = 0i64;
					*(_QWORD*)(v45 + 56) = 0i64;
					*(_QWORD*)(v45 + 64) = 0i64;
					*(_QWORD*)(v45 + 72) = 0i64;
					*(_QWORD*)(v45 + 80) = 0i64;
					*(_QWORD*)v45 = off_140B5EBA0;
					*(_DWORD*)(v45 + 88) = 0;
					*(_QWORD*)(v45 + 96) = 0i64;
				}
				else
				{
					v30 = 0i64;
				}
				v30[10] = v53;
				sub_1401A4C50((__int64)(v30 + 3), (int*)"N");
				v46 = "K";
				if (v66 == 3)
					v46 = "F";
				v47 = sub_1401A6C70((__int64)v30, (int*)v46);
				sub_1401A4C50(v47 + 32, v68);
				v48 = sub_1401A6C70((__int64)v30, (int*)"T");
				sub_1401A4C50(v48 + 32, v69);
				v49 = sub_1401A6C70((__int64)v30, (int*)"V");
				sub_1401A4C50(v49 + 32, v22);
			LABEL_99:
				sub_1401A5A70(a2, v30);
				goto LABEL_100;
			}
			v26 = v25 - 2;
			if (!v26)
			{
				v35 = *((_DWORD*)v23 + 2);
				if (v35 == 3)
					goto LABEL_69;
				if (v35 == 4 && sub_14005AC80((char*)(*v23 + 32), (unsigned __int64*)&v54))
				{
					v59 = 3;
					v23 = &v58;
					v58 = v54;
				LABEL_69:
					v36 = (__m128d)(unsigned __int64) * v23;
				}
				else
				{
					v36 = 0i64;
				}
				v37 = (int)v36.m128d_f64[0];
				v38 = v36.m128d_f64[0];
				if ((double)v37 != v36.m128d_f64[0])
					v38 = (double)(v37 - (_mm_movemask_pd(_mm_unpacklo_pd(v36, v36)) & 1));
				if (v38 == v36.m128d_f64[0])
				{
					sub_14018EFA0(&v51, (__int64)L"%.0f", v36.m128d_f64[0]);
					v39 = &v51;
				}
				else
				{
					v39 = sub_14012CE60(&v51, v36.m128d_f64[0]);
				}
				v22 = (int*)v39[1];
				v39[1] = (__int64)v21;
				v40 = (__int64)v63;
				v39[2] = (__int64)v21;
				v39[3] = v40;
				if (v52)
					sub_14018B900(v52, 0);
				v34 = &word_1409D8144;
				goto LABEL_93;
			}
			v27 = v26 - 1;
			if (!v27)
			{
				if (*((_DWORD*)v23 + 2) != 4)
				{
					if (!(unsigned int)sub_14005E620(a1, *(_QWORD*)(a1 + 16) - 16i64))
					{
						v33 = 0i64;
					LABEL_62:
						sub_14018F2D0(&v64, v33);
						v22 = v65;
						if (v21)
							sub_14018B900((__int64)v21, 0);
						v34 = &word_1409D826C;
						goto LABEL_93;
					}
					if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
						sub_14005E2C0(a1);
					v23 = (__int64*)(*(_QWORD*)(a1 + 16) - 16i64);
				}
				v33 = (char*)(*v23 + 32);
				goto LABEL_62;
			}
			if (v27 == 1)
			{
				v28 = sub_1401A7740(a2[1], (int*)"N");
				v29 = "K";
				v30 = (_QWORD*)v28;
				if (v66 == 3)
					v29 = "F";
				v31 = sub_1401A6C70(v28, (int*)v29);
				sub_1401A4C50(v31 + 32, v68);
				v32 = sub_1401A6C70((__int64)v30, (int*)"T");
				sub_1401A4C50(v32 + 32, (int*)&word_1409D819C);
				sub_14012E140(a1, v30);
				goto LABEL_99;
			}
		LABEL_100:
			if (v22)
				sub_14018B900((__int64)v22, 0);
			if (v68)
				sub_14018B900((__int64)v68, 0);
		LABEL_104:
			;
		}
	}
	return result;
}
// 14012E30D: conditional instruction was optimized away because rcx.8<100000000u
// 14012E51A: conditional instruction was optimized away because rcx.8<100000000u
// 1409D8144: using guessed type __int16 word_1409D8144;
// 1409D815C: using guessed type __int16 word_1409D815C;
// 1409D819C: using guessed type __int16 word_1409D819C;
// 1409D826C: using guessed type __int16 word_1409D826C;
// 1409D8304: using guessed type __int16 word_1409D8304;
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A20950: using guessed type wchar_t a0f[5];
// 140B5EBA0: using guessed type __int64 (__fastcall *off_140B5EBA0[17])();

