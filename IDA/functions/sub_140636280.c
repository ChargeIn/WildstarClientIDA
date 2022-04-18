#include "../winhttp.h"

//----- (0000000140636280) ----------------------------------------------------
__int64 __fastcall sub_140636280(__int64 a1, _DWORD* a2)
{
	__int64 v2; // r15
	_DWORD* v3; // rbx
	struct _FILETIME v4; // r13
	__int64 v5; // rax
	__int64 v6; // rsi
	__int64 v7; // rdi
	unsigned int v8; // ebx
	__int64 v9; // r12
	__int64 v10; // rax
	__int64 v11; // r14
	__int64 v12; // r9
	_QWORD* v13; // r8
	_QWORD* v14; // rcx
	__int64 v15; // rax
	__int64* v16; // rax
	__int64 v17; // rax
	__int64* v18; // rbx
	float v19; // xmm6_4
	unsigned __int64 v20; // rax
	float v21; // xmm1_4
	unsigned __int64 v22; // rcx
	unsigned __int64 v23; // rax
	__int64 v24; // r8
	__int64 v25; // rcx
	__int64 v26; // rax
	float v27; // xmm0_4
	unsigned int v28; // eax
	unsigned int v29; // edx
	unsigned __int64 v30; // r8
	unsigned __int64 v31; // rcx
	_DWORD* v32; // rax
	__int64 v33; // rax
	int v34; // r9d
	__int64 v35; // rcx
	__int64 v36; // rax
	unsigned int v37; // eax
	unsigned int v38; // edx
	unsigned __int64 v39; // r8
	unsigned __int64 v40; // rcx
	_DWORD* v41; // rax
	__int64 v42; // rax
	unsigned int v43; // eax
	unsigned int v44; // edx
	unsigned __int64 v45; // r8
	unsigned __int64 v46; // rcx
	_DWORD* v47; // rax
	__int64 v48; // rax
	__int64 v49; // rdx
	int v50; // r8d
	__int64 v51; // rdi
	unsigned int v52; // esi
	__int64* v53; // r12
	_QWORD* v54; // rbx
	_QWORD* v55; // rdi
	unsigned __int64 v56; // rsi
	__int64 v57; // r14
	unsigned __int64 v58; // rsi
	__int64 v59; // r14
	unsigned __int64 v60; // rsi
	__int64 v61; // r14
	__int64 v62; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	int v66; // [rsp+30h] [rbp-79h]
	unsigned int v67; // [rsp+30h] [rbp-79h]
	_QWORD* v68; // [rsp+38h] [rbp-71h] BYREF
	unsigned __int64 v69; // [rsp+40h] [rbp-69h] BYREF
	__int64 v70; // [rsp+48h] [rbp-61h]
	int v71; // [rsp+50h] [rbp-59h]
	__int64 v72; // [rsp+58h] [rbp-51h] BYREF
	_DWORD* v73; // [rsp+60h] [rbp-49h]
	struct _FILETIME SystemTimeAsFileTime; // [rsp+68h] [rbp-41h] BYREF
	struct _FILETIME v75; // [rsp+70h] [rbp-39h] BYREF
	__int64 v76[3]; // [rsp+78h] [rbp-31h] BYREF
	int v77; // [rsp+90h] [rbp-19h]

	v2 = qword_140C65C20;
	v3 = a2;
	v73 = a2;
	memset(v76, 0, sizeof(v76));
	v77 = 0;
	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	v4 = SystemTimeAsFileTime;
	v5 = 0i64;
	v66 = 0;
	if (*v3)
	{
		while (1)
		{
			v6 = *((_QWORD*)v3 + 1);
			v7 = 5 * v5;
			v8 = *(_DWORD*)(v6 + 20 * v5 + 4);
			v9 = v6 + 20 * v5;
			if (qword_140C63840)
			{
				v10 = qword_140C63840(off_140A6CB30, v8, qword_140C63858);
			}
			else
			{
				if (dword_140C64948 || (int)sub_14022F8E0() < 0)
					goto LABEL_54;
				v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C644D0 + 24i64))(qword_140C644D0, v8);
			}
			v11 = v10;
			if (!v10)
				goto LABEL_54;
			v12 = 32i64 * *(int*)(v10 + 4);
			v13 = *(_QWORD**)(v12 + v2 + 8);
			v14 = v13;
			v15 = v13[1];
			while (v15)
			{
				if (*(_DWORD*)(v15 + 32) < *(_DWORD*)(v9 + 4))
				{
					v15 = *(_QWORD*)(v15 + 24);
				}
				else
				{
					v14 = (_QWORD*)v15;
					v15 = *(_QWORD*)(v15 + 16);
				}
			}
			if (v14 == v13 || *(_DWORD*)(v9 + 4) < *((_DWORD*)v14 + 8))
			{
				v72 = *(_QWORD*)(v12 + v2 + 8);
				v16 = &v72;
			}
			else
			{
				v68 = v14;
				v16 = (__int64*)&v68;
			}
			v17 = *v16;
			if ((_QWORD*)v17 == v13 || (v18 = *(__int64**)(v17 + 40)) == 0i64)
			{
				v18 = (__int64*)sub_14018B280(48i64, 0);
				if (v18)
				{
					v18[1] = 0i64;
					*v18 = 0i64;
					v18[3] = 0i64;
					v18[2] = 0i64;
					v18[5] = 0i64;
					v18[4] = 0i64;
				}
				else
				{
					v18 = 0i64;
				}
				*(_QWORD*)sub_140055BE0(v2 + 32i64 * *(int*)(v11 + 4), (_DWORD*)(v9 + 4)) = v18;
				if (!v18)
					goto LABEL_54;
			}
			v19 = *(float*)(v6 + 4 * v7 + 8);
			GetSystemTimeAsFileTime(&v75);
			v20 = 0i64;
			v21 = (float)(v19 - (float)(int)v19) * 8.6400002e11;
			if (v21 >= 9.223372e18)
			{
				v21 = v21 - 9.223372e18;
				if (v21 < 9.223372e18)
					v20 = 0x8000000000000000ui64;
			}
			v22 = v20 + (unsigned int)(int)v21;
			v23 = 0i64;
			if (v19 >= 9.223372e18)
			{
				v19 = v19 - 9.223372e18;
				if (v19 < 9.223372e18)
					v23 = 0x8000000000000000ui64;
			}
			v24 = *(_QWORD*)&v75 + v22 + 864000000000i64 * (v23 + (unsigned int)(int)v19);
			v25 = *(int*)(v11 + 4);
			v26 = *(_QWORD*)(v2 + 8 * v25 + 224);
			if (!v26)
				goto LABEL_34;
			v27 = (float)(int)v26;
			if (v26 < 0)
				v27 = v27 + 1.8446744e19;
			if (v27 > *(float*)(v6 + 4 * v7 + 8) || v26 <= *(unsigned __int64*)&v4)
				LABEL_34:
			*(_QWORD*)(v2 + 8 * v25 + 224) = v24;
			if (*(_BYTE*)(v6 + 4 * v7 + 12) == 1)
				break;
			if (*(_BYTE*)(v6 + 4 * v7 + 12) == 2)
			{
				v37 = *(_DWORD*)(v6 + 4 * v7 + 16);
				v38 = *(_DWORD*)(v6 + 4 * v7);
				v70 = v24;
				v39 = v18[3];
				v40 = 0i64;
				v69 = __PAIR64__(v38, v37);
				v71 = 0;
				if (v39)
				{
					v41 = (_DWORD*)(v18[2] + 4);
					while (*v41 != v38)
					{
						++v40;
						v41 += 6;
						if (v40 >= v39)
							goto LABEL_47;
					}
					goto LABEL_54;
				}
			LABEL_47:
				v42 = sub_14063A590(v18 + 2, &v69);
				v34 = 2;
				v35 = 3 * v42;
				v36 = v18[2];
				goto LABEL_53;
			}
			if (*(_BYTE*)(v6 + 4 * v7 + 12) == 3)
			{
				v28 = *(_DWORD*)(v6 + 4 * v7 + 16);
				v29 = *(_DWORD*)(v6 + 4 * v7);
				v70 = v24;
				v30 = v18[5];
				v71 = 0;
				v31 = 0i64;
				v69 = __PAIR64__(v29, v28);
				if (v30)
				{
					v32 = (_DWORD*)(v18[4] + 4);
					while (*v32 != v29)
					{
						++v31;
						v32 += 6;
						if (v31 >= v30)
							goto LABEL_42;
					}
					goto LABEL_54;
				}
			LABEL_42:
				v33 = sub_14063A590(v18 + 4, &v69);
				v34 = 3;
				v35 = 3 * v33;
				v36 = v18[4];
				goto LABEL_53;
			}
		LABEL_54:
			v3 = v73;
			v5 = (unsigned int)(v66 + 1);
			v66 = v5;
			if ((unsigned int)v5 >= *v73)
				goto LABEL_55;
		}
		v43 = *(_DWORD*)(v6 + 4 * v7 + 16);
		v44 = *(_DWORD*)(v6 + 4 * v7);
		v70 = v24;
		v45 = v18[1];
		v46 = 0i64;
		v69 = __PAIR64__(v44, v43);
		v71 = 0;
		if (v45)
		{
			v47 = (_DWORD*)(*v18 + 4);
			while (*v47 != v44)
			{
				++v46;
				v47 += 6;
				if (v46 >= v45)
					goto LABEL_52;
			}
			goto LABEL_54;
		}
	LABEL_52:
		v48 = sub_14063A590(v18, &v69);
		v34 = 1;
		v35 = 3 * v48;
		v36 = *v18;
	LABEL_53:
		v49 = *(int*)(v11 + 4);
		v50 = *(_DWORD*)(v9 + 4);
		*((_DWORD*)v76 + v49) = 1;
		*(_DWORD*)(v36 + 8 * v35 + 16) = sub_14063AA90(v2, v49, v50, v34, (_DWORD*)(v36 + 8 * v35));
		goto LABEL_54;
	}
LABEL_55:
	v51 = v2 + 8;
	v52 = 0;
	v53 = v76;
	v68 = (_QWORD*)(v2 + 8);
	v67 = 0;
	do
	{
		v54 = *(_QWORD**)(*(_QWORD*)v51 + 16i64);
		if (v54 != *(_QWORD**)v51)
		{
			do
			{
				v55 = (_QWORD*)v54[5];
				v56 = 0i64;
				if (v55[1])
				{
					v57 = 0i64;
					do
					{
						if (*(_QWORD*)(v57 + *v55 + 8) > *(unsigned __int64*)&v4)
						{
							++v56;
							v57 += 24i64;
						}
						else
						{
							sub_14063A640((__int64)v55, v56);
							*(_DWORD*)v53 = 1;
						}
					} while (v56 < v55[1]);
				}
				v58 = 0i64;
				if (v55[3])
				{
					v59 = 0i64;
					do
					{
						if (*(_QWORD*)(v59 + v55[2] + 8) > *(unsigned __int64*)&v4)
						{
							++v58;
							v59 += 24i64;
						}
						else
						{
							sub_14063A640((__int64)(v55 + 2), v58);
							*(_DWORD*)v53 = 1;
						}
					} while (v58 < v55[3]);
				}
				v60 = 0i64;
				if (v55[5])
				{
					v61 = 0i64;
					do
					{
						if (*(_QWORD*)(v61 + v55[4] + 8) > *(unsigned __int64*)&v4)
						{
							++v60;
							v61 += 24i64;
						}
						else
						{
							sub_14063A640((__int64)(v55 + 4), v60);
							*(_DWORD*)v53 = 1;
						}
					} while (v60 < v55[5]);
				}
				v62 = v54[3];
				if (v62)
				{
					v54 = (_QWORD*)v54[3];
					for (i = *(_QWORD**)(v62 + 16); i; i = (_QWORD*)i[2])
						v54 = i;
				}
				else
				{
					for (j = v54[1]; v54 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
						v54 = (_QWORD*)j;
					if (v54[3] != j)
						v54 = (_QWORD*)j;
				}
				v51 = (__int64)v68;
			} while (v54 != (_QWORD*)*v68);
			v52 = v67;
		}
		if (*(_DWORD*)v53)
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "RewardRotationsUpdated", "i", v52);
		++v52;
		v51 += 32i64;
		v53 = (__int64*)((char*)v53 + 4);
		v67 = v52;
		v68 = (_QWORD*)v51;
	} while (v52 < 7);
	return 0i64;
}
// 140A6CB30: using guessed type wchar_t *off_140A6CB30[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C644D0: using guessed type __int64 qword_140C644D0;
// 140C64948: using guessed type int dword_140C64948;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65C20: using guessed type __int64 qword_140C65C20;

