#include "../winhttp.h"

//----- (00000001404762C0) ----------------------------------------------------
void __fastcall sub_1404762C0(__int64 a1)
{
	int v1; // r15d
	int v2; // r8d
	int v3; // eax
	__int64 v4; // rdi
	__int64 v5; // rbx
	__int64 v6; // rdx
	int v7; // eax
	int v8; // ecx
	int v9; // eax
	int v10; // ecx
	float v11; // xmm1_4
	int v12; // eax
	float v13; // xmm1_4
	int v14; // r8d
	float v15; // xmm10_4
	int v16; // r9d
	__int64 v17; // rax
	float v18; // xmm2_4
	int v19; // eax
	float v20; // xmm0_4
	int v21; // eax
	int v22; // edx
	int v23; // eax
	__int64 v24; // rcx
	int v25; // eax
	int v26; // edx
	__int64 v27; // rcx
	_QWORD* v28; // rcx
	__int64 v29; // rcx
	int* v30; // rax
	__int64 v31; // rcx
	__int64 v32; // rax
	__int64 v33; // rsi
	_QWORD** v34; // rdx
	void(__fastcall * v35)(__int64*, int, __int64, double); // r9
	__int64 v36; // rax
	__int64 v37; // rbp
	__int64 i; // rax
	__int64 j; // rax
	_QWORD* v40; // rax
	__int64 v41; // r8
	_QWORD* v42; // r14
	__int64 v43; // rcx
	_DWORD* v44; // r13
	_QWORD* v45; // rcx
	_QWORD* v46; // rax
	_QWORD* v47; // rbx
	_QWORD* v48; // rax
	_QWORD** v49; // rax
	_QWORD* v50; // rcx
	_QWORD* v51; // rbx
	_QWORD* v52; // rax
	_QWORD** v53; // rdi
	_QWORD* v54; // rbx
	_QWORD* v55; // r12
	_QWORD* v56; // rax
	__int64 v57; // rcx
	__int64 v58; // rcx
	__int64 v59; // rcx
	__int64 v60; // rcx
	__int64 v61; // rcx
	int v62; // eax
	_QWORD* v63; // rcx
	_QWORD* v64; // rax
	_QWORD* v65; // rbx
	_QWORD* v66; // rax
	_QWORD** v67; // rax
	_QWORD* v68; // rcx
	_QWORD* v69; // rbx
	_QWORD* v70; // rax
	_QWORD** v71; // rdi
	_QWORD* v72; // rbx
	_QWORD* v73; // r12
	_QWORD* v74; // rax
	__int64 v75; // rcx
	__int64 v76; // rcx
	__int64 v77; // rcx
	__int64 v78; // rcx
	__int64 v79; // rcx
	__int64 v80; // rcx
	int v82; // [rsp+C8h] [rbp+10h]
	__int64 v83; // [rsp+D0h] [rbp+18h] BYREF

	v1 = dword_140C636A8;
	v2 = *(_DWORD*)qword_140C63750;
	v3 = dword_140C473C0;
	v4 = a1;
	v5 = *(_QWORD*)(a1 + 6184);
	v82 = dword_140C636A8;
	if (*(_DWORD*)qword_140C63750 < dword_140C473C0)
		v3 = *(_DWORD*)qword_140C63750;
	v6 = v3;
	v7 = dword_140C47420;
	if (v2 < dword_140C47420)
		v7 = *(_DWORD*)qword_140C63750;
	v8 = dword_140C47430[v7];
	v9 = dword_140C474E0;
	v10 = v8 - dword_140C473D0[v6];
	if (v2 < dword_140C474E0)
		v9 = *(_DWORD*)qword_140C63750;
	v11 = (float)dword_140C474F0[v9];
	v12 = dword_140C47480;
	if (v2 < dword_140C47480)
		v12 = *(_DWORD*)qword_140C63750;
	v13 = v11 - (float)dword_140C47490[v12];
	if (v5)
	{
		v14 = dword_140C475A0;
		v15 = (float)v10;
		while (1)
		{
			v16 = *(_DWORD*)qword_140C63750;
			v17 = *(_QWORD*)(v5 + 8);
			v18 = (float)(int)v17;
			if (v17 < 0)
				v18 = v18 + 1.8446744e19;
			v19 = dword_140C47480;
			if (v16 < dword_140C47480)
				v19 = *(_DWORD*)qword_140C63750;
			v20 = (float)dword_140C47490[v19];
			v21 = dword_140C473C0;
			if (v16 < dword_140C473C0)
				v21 = *(_DWORD*)qword_140C63750;
			v22 = v1
				- (int)(float)((float)dword_140C473D0[v21]
					+ (float)(v15 * fmaxf(0.0, fminf((float)(v18 - v20) * (float)(1.0 / v13), 1.0))));
			v23 = v14;
			if (v16 < v14)
				v23 = *(_DWORD*)qword_140C63750;
			v24 = v23;
			v25 = v14;
			v26 = v22 - dword_140C475B0[v24];
			if (v16 < v14)
				v25 = *(_DWORD*)qword_140C63750;
			if (v26 - dword_140C475B0[v25] - *(_DWORD*)v5 <= 0)
				goto LABEL_34;
			v27 = *(_QWORD*)(v5 + 32);
			if (v27)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v27 + 8i64))(v27);
				*(_QWORD*)(v5 + 32) = 0i64;
			}
			v28 = *(_QWORD**)(v5 + 40);
			if (v28)
				*v28 = *(_QWORD*)(v5 + 48);
			v29 = *(_QWORD*)(v5 + 48);
			if (v29)
				*(_QWORD*)(v29 + 40) = *(_QWORD*)(v5 + 40);
			*(_QWORD*)(v5 + 40) = 0i64;
			*(_QWORD*)(v5 + 48) = 0i64;
			sub_14018B900(v5, 0);
			v14 = dword_140C475A0;
			v30 = *(int**)(v4 + 6184);
			if (v30)
				break;
			v31 = *(_QWORD*)(v4 + 5864);
			if (v31)
			{
				(*(void(__fastcall**)(__int64, __int64, __int64, __int64(__fastcall*)(__int64*, __int64, __m128*), void(__fastcall*)(__int64*, __int64, __int64), __int64))(*(_QWORD*)v31 + 1024i64))(
					v31,
					1i64,
					25i64,
					sub_140476A20,
					sub_140476BC0,
					v4);
				Apollo_LUAEvent(
					*(_QWORD*)(qword_140C65898 + 29504),
					"UnitTextBubblesDestroyed",
					byte_1409EDCF4,
					*(unsigned int*)(v4 + 8));
				goto LABEL_32;
			}
		LABEL_33:
			v5 = *(_QWORD*)(v4 + 6184);
			if (!v5)
				goto LABEL_34;
		}
		*v30 = v1;
	LABEL_32:
		v14 = dword_140C475A0;
		goto LABEL_33;
	}
LABEL_34:
	v32 = *(_QWORD*)(v4 + 6208);
	v33 = *(_QWORD*)(v32 + 16);
	if (v33 != v32)
	{
		v34 = (_QWORD**)qword_140C7CF68;
		v35 = sub_140477A10;
		while (1)
		{
			v36 = *(_QWORD*)(v33 + 24);
			v37 = v33;
			if (v36)
			{
				v33 = *(_QWORD*)(v33 + 24);
				for (i = *(_QWORD*)(v36 + 16); i; i = *(_QWORD*)(i + 16))
					v33 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v33 + 8); v33 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v33 = j;
				if (*(_QWORD*)(v33 + 24) != j)
					v33 = j;
			}
			v40 = *(_QWORD**)(v37 + 48);
			v41 = *(unsigned int*)(v37 + 32);
			v42 = (_QWORD*)*v40;
			LODWORD(v83) = *(_DWORD*)(v37 + 32);
			if (v42 != v40)
				break;
		LABEL_100:
			if (**(_QWORD**)(v37 + 48) == *(_QWORD*)(v37 + 48))
			{
				v80 = *(_QWORD*)(v4 + 5864);
				if (v80)
					(*(void(__fastcall**)(__int64, __int64, __int64, _BOOL8(__fastcall*)(__int64*, unsigned int, __m128*), void(__fastcall*)(__int64*, int, __int64, double), __int64))(*(_QWORD*)v80 + 1024i64))(
						v80,
						1i64,
						v41,
						sub_140477460,
						sub_140477A10,
						v4);
				v83 = v37;
				sub_1404817B0(v4 + 6200, &v83);
				v34 = (_QWORD**)qword_140C7CF68;
			}
			v35 = sub_140477A10;
			if (v33 == *(_QWORD*)(v4 + 6208))
				return;
		}
		while (1)
		{
			v43 = v42[10];
			v44 = v42 + 2;
			v42 = (_QWORD*)*v42;
			if (!v43)
				break;
			v62 = (*(__int64(__fastcall**)(__int64, _QWORD**, __int64, void(__fastcall*)(__int64*, int, __int64, double)))(*(_QWORD*)v43 + 48i64))(
				v43,
				v34,
				v41,
				v35);
			v34 = (_QWORD**)qword_140C7CF68;
			if (v1 - *v44 - v62 > 0)
			{
				v63 = *(_QWORD**)qword_140C7CF68;
				v64 = *(_QWORD**)qword_140C7CF68;
				if (*(_QWORD*)qword_140C7CF68 != qword_140C7CF68)
				{
					do
						v64 = (_QWORD*)*v64;
					while (v64 != (_QWORD*)qword_140C7CF68);
					if (v63 != (_QWORD*)qword_140C7CF68)
					{
						do
						{
							v65 = (_QWORD*)*v63;
							if (v44 == (_DWORD*)v63[2])
							{
								v66 = (_QWORD*)v63[1];
								*v66 = v65;
								v65[1] = v66;
								sub_14018B900((__int64)v63, 0);
								v34 = (_QWORD**)qword_140C7CF68;
							}
							v63 = v65;
						} while (v65 != v34);
					}
				}
				v67 = *(_QWORD***)(v4 + 6248);
				v68 = *v67;
				if (*v67 != v67)
				{
					do
					{
						v69 = (_QWORD*)*v68;
						if (v44 == (_DWORD*)v68[2])
						{
							v70 = (_QWORD*)v68[1];
							*v70 = v69;
							v69[1] = v70;
							sub_14018B900((__int64)v68, 0);
						}
						v68 = v69;
					} while (v69 != *(_QWORD**)(v4 + 6248));
					v34 = (_QWORD**)qword_140C7CF68;
				}
				v71 = *(_QWORD***)(v37 + 48);
				v72 = *v71;
				if (*v71 != v71)
				{
					do
					{
						v73 = (_QWORD*)*v72;
						if (v72 + 2 == (_QWORD*)v44)
						{
							v74 = (_QWORD*)v72[1];
							v75 = qword_140C65898;
							*v74 = v73;
							v73[1] = v74;
							if (v75)
							{
								v76 = *(_QWORD*)(v75 + 29504);
								if (v76)
									Apollo_LUAEvent(v76, "MessageFinished", byte_1409EB834, v72 + 2);
							}
							v77 = v72[9];
							if (v77)
							{
								(*(void(__fastcall**)(__int64, _QWORD**))(*(_QWORD*)v77 + 8i64))(v77, v34);
								v72[9] = 0i64;
							}
							v78 = v72[10];
							if (v78)
							{
								(*(void(__fastcall**)(__int64, _QWORD**))(*(_QWORD*)v78 + 8i64))(v78, v34);
								v72[10] = 0i64;
							}
							v79 = v72[4];
							if (v79)
								sub_14018B900(v79, 0);
							sub_14018B900((__int64)v72, 0);
						}
						v72 = v73;
					} while (v73 != v71);
				LABEL_96:
					v1 = v82;
					v34 = (_QWORD**)qword_140C7CF68;
				}
			LABEL_97:
				v4 = a1;
			}
			if (v42 == *(_QWORD**)(v37 + 48))
			{
				v41 = (unsigned int)v83;
				goto LABEL_100;
			}
		}
		v45 = *v34;
		v46 = *v34;
		if (*v34 != v34)
		{
			do
				v46 = (_QWORD*)*v46;
			while (v46 != v34);
			if (v45 != v34)
			{
				do
				{
					v47 = (_QWORD*)*v45;
					if (v44 == (_DWORD*)v45[2])
					{
						v48 = (_QWORD*)v45[1];
						*v48 = v47;
						v47[1] = v48;
						sub_14018B900((__int64)v45, 0);
						v34 = (_QWORD**)qword_140C7CF68;
					}
					v45 = v47;
				} while (v47 != v34);
			}
		}
		v49 = *(_QWORD***)(v4 + 6248);
		v50 = *v49;
		if (*v49 != v49)
		{
			do
			{
				v51 = (_QWORD*)*v50;
				if (v44 == (_DWORD*)v50[2])
				{
					v52 = (_QWORD*)v50[1];
					*v52 = v51;
					v51[1] = v52;
					sub_14018B900((__int64)v50, 0);
				}
				v50 = v51;
			} while (v51 != *(_QWORD**)(v4 + 6248));
			v34 = (_QWORD**)qword_140C7CF68;
		}
		v53 = *(_QWORD***)(v37 + 48);
		v54 = *v53;
		if (*v53 != v53)
		{
			do
			{
				v55 = (_QWORD*)*v54;
				if (v54 + 2 == (_QWORD*)v44)
				{
					v56 = (_QWORD*)v54[1];
					v57 = qword_140C65898;
					*v56 = v55;
					v55[1] = v56;
					if (v57)
					{
						v58 = *(_QWORD*)(v57 + 29504);
						if (v58)
							Apollo_LUAEvent(v58, "MessageFinished", byte_1409EB834, v54 + 2);
					}
					v59 = v54[9];
					if (v59)
					{
						(*(void(__fastcall**)(__int64, _QWORD**, __int64, void(__fastcall*)(__int64*, int, __int64, double)))(*(_QWORD*)v59 + 8i64))(
							v59,
							v34,
							v41,
							v35);
						v54[9] = 0i64;
					}
					v60 = v54[10];
					if (v60)
					{
						(*(void(__fastcall**)(__int64, _QWORD**, __int64, void(__fastcall*)(__int64*, int, __int64, double)))(*(_QWORD*)v60 + 8i64))(
							v60,
							v34,
							v41,
							v35);
						v54[10] = 0i64;
					}
					v61 = v54[4];
					if (v61)
						sub_14018B900(v61, 0);
					sub_14018B900((__int64)v54, 0);
				}
				v54 = v55;
			} while (v55 != v53);
			goto LABEL_96;
		}
		goto LABEL_97;
	}
}
// 140476492: conditional instruction was optimized away because rbx.8!=0
// 140476726: variable 'v34' is possibly undefined
// 140476726: variable 'v41' is possibly undefined
// 140476726: variable 'v35' is possibly undefined
// 1409EB834: using guessed type _BYTE byte_1409EB834[64];
// 1409EDCF4: using guessed type _BYTE byte_1409EDCF4[4];
// 140C473C0: using guessed type int dword_140C473C0;
// 140C473D0: using guessed type int dword_140C473D0[16];
// 140C47420: using guessed type int dword_140C47420;
// 140C47430: using guessed type int dword_140C47430[16];
// 140C47480: using guessed type int dword_140C47480;
// 140C47490: using guessed type int dword_140C47490[16];
// 140C474E0: using guessed type int dword_140C474E0;
// 140C474F0: using guessed type int dword_140C474F0[16];
// 140C475A0: using guessed type int dword_140C475A0;
// 140C475B0: using guessed type int dword_140C475B0[28];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7CF68: using guessed type __int64 qword_140C7CF68;

