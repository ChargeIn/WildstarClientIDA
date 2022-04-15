//----- (000000014013B140) ----------------------------------------------------
__int64 __fastcall sub_14013B140(_QWORD* a1)
{
	__int64 v1; // r12
	unsigned __int64 v3; // rcx
	unsigned int v4; // edx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // r13
	__int64 v8; // r14
	_DWORD* v9; // rax
	unsigned __int64 v10; // rdx
	_DWORD* v11; // rdi
	_DWORD* v12; // rcx
	int v13; // eax
	_DWORD* v14; // rdx
	int v15; // r15d
	int v16; // ecx
	BOOL v17; // esi
	char* v18; // rdx
	_DWORD* v19; // rax
	__int64 v20; // rdx
	_DWORD* v21; // rax
	__int64 v22; // rdx
	unsigned __int64 v23; // rcx
	int* v24; // rdi
	__int64 v25; // rax
	int* v26; // rsi
	__int64 v27; // rbx
	unsigned __int64 v28; // rbx
	_WORD* v29; // r15
	__int64 v30; // rax
	__int64 v31; // r13
	_QWORD* v32; // rbx
	__int64 v33; // rdi
	int v34; // eax
	__int64 v35; // rbx
	int* v36; // rax
	int* v37; // rdi
	__int64 v38; // rax
	int* v39; // rsi
	__int64 v40; // r14
	_WORD* v41; // rax
	__int64 v42; // r13
	__int64 v43; // rcx
	__int64 v44; // rdx
	int* v45; // rdi
	int* v46; // r14
	__int64 v47; // rax
	__int64 v48; // rbx
	unsigned __int64 v49; // rbx
	_WORD* v50; // r15
	__int64 v51; // r13
	__int64 v52; // rsi
	_QWORD* v53; // rbx
	__int64* v54; // rbx
	__int64 v55; // rbx
	int* v56; // rax
	__int64 v57; // r15
	bool v58; // zf
	int* v59; // rsi
	__int64 v60; // rax
	__int64 v61; // r14
	_WORD* v62; // rax
	__int64 v64; // [rsp+30h] [rbp-69h] BYREF
	int* v65; // [rsp+38h] [rbp-61h]
	_WORD* v66; // [rsp+40h] [rbp-59h]
	__int64 v67; // [rsp+48h] [rbp-51h]
	__int64(__fastcall * *v68)(); // [rsp+50h] [rbp-49h] BYREF
	int v69; // [rsp+58h] [rbp-41h]
	_QWORD* v70; // [rsp+60h] [rbp-39h]
	int v71; // [rsp+68h] [rbp-31h]
	__int64(__fastcall * *v72)(); // [rsp+70h] [rbp-29h] BYREF
	int v73; // [rsp+78h] [rbp-21h]
	_QWORD* v74; // [rsp+80h] [rbp-19h]
	__int64(__fastcall * **v75)(); // [rsp+88h] [rbp-11h]
	__int64 v76; // [rsp+90h] [rbp-9h] BYREF
	__int64 v77; // [rsp+98h] [rbp-1h] BYREF
	int* v78; // [rsp+A0h] [rbp+7h]
	__int64 v79; // [rsp+108h] [rbp+6Fh]
	__int64 v80; // [rsp+110h] [rbp+77h]
	__int64 v81; // [rsp+118h] [rbp+7Fh] BYREF

	v1 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = *(_QWORD*)(v7 + 2528);
	v80 = v7;
	if (v8)
	{
		v9 = (_DWORD*)a1[3];
		v10 = a1[2];
		if ((unsigned __int64)v9 < v10)
		{
			v11 = dword_140A12138;
			if (v9 != dword_140A12138 && v9[2] == 5)
			{
				v12 = dword_140A12138;
				if ((unsigned __int64)v9 < v10)
					v12 = (_DWORD*)a1[3];
				*(_QWORD*)v10 = *(_QWORD*)v12;
				*(_DWORD*)(v10 + 8) = v12[2];
				a1[2] += 16i64;
				v13 = sub_1400578C0((__int64)a1);
				v14 = dword_140A12138;
				v15 = v13;
				if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
					v14 = (_DWORD*)(a1[3] + 16i64);
				v16 = v14[2];
				v17 = v16 && (v16 != 1 || *v14);
				v18 = (char*)sub_14018F0E0(&v64, *(unsigned __int16**)(v8 + 24))[1];
				v19 = (_DWORD*)(a1[3] + 32i64);
				if ((unsigned __int64)v19 < a1[2] && v19 != dword_140A12138 && *(int*)(a1[3] + 40i64) > 0)
					v18 = (char*)sub_140056BB0(a1, 3u, 0i64);
				sub_14018F2D0(&v77, v18);
				if (v65)
					sub_14018B900((__int64)v65, 0);
				sub_140137C20((__int64*)v8, v15, 1, v17, v78);
				v68 = off_140B569F0;
				v70 = a1;
				v71 = 1;
				v69 = -2;
				v21 = (_DWORD*)(a1[3] + 48i64);
				if ((unsigned __int64)v21 < a1[2] && v21 != dword_140A12138 && *(_DWORD*)(a1[3] + 56i64) == 5)
				{
					sub_1400579E0((__int64)a1, v20, -2);
					v22 = (__int64)v70;
					v23 = v70[2];
					if (v70[3] + 48i64 < v23)
						v11 = (_DWORD*)(v70[3] + 48i64);
					*(_QWORD*)v23 = *(_QWORD*)v11;
					*(_DWORD*)(v23 + 8) = v11[2];
					*(_QWORD*)(v22 + 16) += 16i64;
					v69 = sub_1400578C0((__int64)v70);
				}
				v24 = *(int**)(v8 + 24);
				v25 = 0i64;
				v26 = 0i64;
				if (*(_WORD*)v24)
				{
					do
						++v25;
					while (*((_WORD*)v24 + v25));
				}
				v27 = (2 * v25) >> 1;
				if ((unsigned __int64)(v27 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					v26 = sub_14018B280(2 * (v27 + 1), 0);
				v28 = 2 * v27;
				sub_1407DB590(v26, v24, v28);
				v29 = (_WORD*)((char*)v26 + v28);
				if ((int*)((char*)v26 + v28))
					*v29 = 0;
				v30 = v7 + 2536;
				v31 = *(_QWORD*)(v7 + 2544);
				v32 = *(_QWORD**)(v31 + 8);
				v79 = v30;
				v33 = v31;
				while (v32)
				{
					if ((int)sub_1400454D0(v32[5], v32[6], (unsigned __int16*)v26, (__int64)v29) < 0)
					{
						v32 = (_QWORD*)v32[3];
					}
					else
					{
						v33 = (__int64)v32;
						v32 = (_QWORD*)v32[2];
					}
				}
				if (v33 == v31
					|| (v34 = sub_1400454D0((__int64)v26, (__int64)v29, *(unsigned __int16**)(v33 + 40), *(_QWORD*)(v33 + 48)),
						v81 = v33,
						v34 < 0))
				{
					v81 = v31;
				}
				v35 = v81;
				if (v26)
					sub_14018B900((__int64)v26, 0);
				if (v35 == *(_QWORD*)(v80 + 2544))
				{
					v36 = sub_14018B280(232i64, 0);
					if (v36)
						v1 = sub_140133E40((__int64)v36, v80, *(int**)(v8 + 24));
					*(_QWORD*)(v1 + 88) = v8;
					*(_DWORD*)(v1 + 48) = *(_DWORD*)(v8 + 80);
					v37 = *(int**)(v8 + 24);
					v38 = 0i64;
					v39 = 0i64;
					v65 = 0i64;
					v67 = 0i64;
					if (*(_WORD*)v37)
					{
						do
							++v38;
						while (*((_WORD*)v37 + v38));
					}
					v40 = (2 * v38) >> 1;
					if ((unsigned __int64)(v40 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					{
						v39 = sub_14018B280(2 * (v40 + 1), 0);
						v65 = v39;
						v67 = (__int64)v39 + 2 * v40 + 2;
					}
					sub_1407DB590(v39, v37, 2 * v40);
					v41 = (_WORD*)v39 + v40;
					v66 = v41;
					if (v41)
						*v41 = 0;
					v42 = v79;
					*(_QWORD*)sub_1400EDA60(v79, (__int64)&v64) = v1;
					if (v39)
						sub_14018B900((__int64)v39, 0);
				}
				else
				{
					v1 = *(_QWORD*)(v35 + 64);
					v42 = v79;
					*(_QWORD*)(v1 + 88) = v8;
					*(_DWORD*)(v1 + 48) = *(_DWORD*)(v8 + 80);
				}
				v43 = (__int64)v70;
				v73 = -2;
				v75 = &v68;
				v74 = v70;
				v72 = off_140B56A08;
				*(_DWORD*)(v70[2] + 8i64) = 0;
				*(_QWORD*)(v43 + 16) += 16i64;
				((void(__fastcall*)(__int64(__fastcall***)(), __int64))v72[2])(&v72, 0xFFFFFFFFi64);
				v70[2] -= 16i64;
				while (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v75)[1])(v75)
					&& (unsigned int)sub_1400FCBA0((__int64)&v72))
				{
					sub_1400FC540((__int64)&v72, &v64);
					v45 = v65;
					v46 = 0i64;
					v47 = 0i64;
					if (*(_WORD*)v65)
					{
						do
							++v47;
						while (*((_WORD*)v65 + v47));
					}
					v48 = (2 * v47) >> 1;
					if ((unsigned __int64)(v48 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
						v46 = sub_14018B280(2 * (v48 + 1), 0);
					v49 = 2 * v48;
					sub_1407DB590(v46, v45, v49);
					v50 = (_WORD*)((char*)v46 + v49);
					if ((int*)((char*)v46 + v49))
						*v50 = 0;
					v51 = *(_QWORD*)(v42 + 8);
					v52 = v51;
					v53 = *(_QWORD**)(v51 + 8);
					while (v53)
					{
						if ((int)sub_1400454D0(v53[5], v53[6], (unsigned __int16*)v46, (__int64)v50) < 0)
						{
							v53 = (_QWORD*)v53[3];
						}
						else
						{
							v52 = (__int64)v53;
							v53 = (_QWORD*)v53[2];
						}
					}
					if (v52 == v51
						|| (int)sub_1400454D0((__int64)v46, (__int64)v50, *(unsigned __int16**)(v52 + 40), *(_QWORD*)(v52 + 48)) < 0)
					{
						v76 = v51;
						v54 = &v76;
					}
					else
					{
						v81 = v52;
						v54 = &v81;
					}
					v55 = *v54;
					if (v46)
						sub_14018B900((__int64)v46, 0);
					if (v55 == *(_QWORD*)(v80 + 2544))
					{
						v56 = sub_14018B280(232i64, 0);
						if (v56)
							v57 = sub_140133E40((__int64)v56, v80, v45);
						else
							v57 = 0i64;
						v58 = *(_WORD*)v45 == 0;
						v59 = 0i64;
						v65 = 0i64;
						v67 = 0i64;
						v60 = 0i64;
						if (!v58)
						{
							do
								++v60;
							while (*((_WORD*)v45 + v60));
						}
						v61 = (2 * v60) >> 1;
						if ((unsigned __int64)(v61 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
						{
							v59 = sub_14018B280(2 * (v61 + 1), 0);
							v65 = v59;
							v67 = (__int64)v59 + 2 * v61 + 2;
						}
						sub_1407DB590(v59, v45, 2 * v61);
						v62 = (_WORD*)v59 + v61;
						v66 = v62;
						if (v62)
							*v62 = 0;
						v42 = v79;
						*(_QWORD*)sub_1400EDA60(v79, (__int64)&v64) = v57;
						if (v59)
							sub_14018B900((__int64)v59, 0);
						sub_140185980(v1, v57);
						sub_14018B900((__int64)v45, 0);
					}
					else
					{
						sub_140185980(v1, *(_QWORD*)(v55 + 64));
						v42 = v79;
						sub_14018B900((__int64)v45, 0);
					}
				}
				v72 = off_140B56A08;
				if (v74)
					sub_1400579E0((__int64)v74, v44, v73);
				v68 = off_140B56A08;
				if (v70)
					sub_1400579E0((__int64)v70, v44, v69);
				if (v78)
					sub_14018B900((__int64)v78, 0);
			}
		}
	}
	return 0i64;
}
// 14013B304: variable 'v20' is possibly undefined
// 14013B7BC: variable 'v44' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C63650: using guessed type __int64 qword_140C63650;

