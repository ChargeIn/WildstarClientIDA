#include "../winhttp.h"

//----- (0000000140639060) ----------------------------------------------------
__int64 __fastcall sub_140639060(__int64 a1, unsigned int a2, int a3, __int64 a4, int a5)
{
	__int64 v5; // rsi
	__int64 v6; // rdi
	__int64 v9; // r13
	__int64 v10; // r14
	unsigned __int64 v11; // rbx
	int* v12; // rdx
	__int64 v13; // r14
	__int64 v14; // rdi
	__int64 v15; // rcx
	__int64 v16; // rbx
	__int64 v17; // rax
	int v18; // eax
	int v19; // edx
	int v20; // esi
	__int64 v21; // rcx
	_QWORD* v22; // rax
	__int64 v23; // r10
	__int64 v24; // rdx
	__int64 v25; // rbx
	unsigned __int64* v26; // rdx
	unsigned __int64 v27; // r8
	_DWORD* v28; // rax
	__int64* v29; // rax
	int v30; // esi
	unsigned __int8* v31; // r13
	__int64 v32; // rdi
	__int64 v33; // rcx
	__int64 v34; // rbx
	__int64 v35; // rax
	int v36; // eax
	int v37; // edx
	unsigned int v38; // r8d
	int v39; // r12d
	int v40; // edx
	int v41; // edx
	__int64 v42; // rdx
	__int64 v43; // rax
	int v44; // eax
	__int64 v45; // rax
	__int64 v46; // rax
	unsigned int v47; // edx
	BOOL v48; // ebx
	_QWORD* v49; // rax
	__int64 v50; // rdx
	unsigned __int64* v51; // rdx
	unsigned __int64 v52; // r8
	BOOL* v53; // rcx
	__int64* v54; // rax
	float v55; // xmm6_4
	__int64 v56; // rbx
	__int64 v57; // rsi
	__int64 v58; // rax
	_QWORD* v59; // rax
	__int64 v60; // rdx
	unsigned __int64* v61; // r14
	unsigned __int64 v62; // rsi
	__int64 v63; // rbx
	__int64 v64; // rax
	__int64 v65; // rcx
	__int64 v66; // rax
	__int64* v67; // rax
	unsigned __int64* v68; // rdx
	unsigned __int64 v69; // r15
	_DWORD* v70; // rax
	__int64* v71; // rax
	struct _FILETIME v72; // rcx
	_QWORD* v73; // rax
	__int64 v74; // rdx
	__int64 result; // rax
	__int64 v76; // [rsp+28h] [rbp-61h]
	__int64 v77; // [rsp+30h] [rbp-59h] BYREF
	__int64 v78; // [rsp+38h] [rbp-51h]
	__int64(__fastcall * *v79)(); // [rsp+40h] [rbp-49h] BYREF
	int v80; // [rsp+48h] [rbp-41h]
	__int64 v81; // [rsp+50h] [rbp-39h]
	int v82; // [rsp+58h] [rbp-31h]
	__int64(__fastcall * *v83)(); // [rsp+60h] [rbp-29h] BYREF
	__int64 v84; // [rsp+68h] [rbp-21h]
	__int64 v85; // [rsp+70h] [rbp-19h]
	int v86; // [rsp+78h] [rbp-11h]
	__int64 v87; // [rsp+E8h] [rbp+5Fh]

	v5 = qword_140C65C20;
	v6 = 0i64;
	v9 = 0i64;
	v78 = 0i64;
	v77 = 0i64;
	v10 = sub_14022FB40(a2);
	if (v10)
	{
		v11 = 0i64;
		if (*(_QWORD*)(v5 + 328))
		{
			do
			{
				v12 = (int*)(v6 + *(_QWORD*)(v5 + 320));
				if (*v12 == *(_DWORD*)(v10 + 4) && v12[1] == a3)
					sub_140481060(&v77, v12);
				++v11;
				v6 += 20i64;
			} while (v11 < *(_QWORD*)(v5 + 328));
			v9 = v78;
		}
	}
	v13 = a4;
	v82 = 1;
	v14 = *(_QWORD*)(a4 + 16);
	v79 = off_140B569F0;
	v15 = *(_QWORD*)(v14 + 32);
	v81 = v14;
	if (*(_QWORD*)(v15 + 120) >= *(_QWORD*)(v15 + 112))
		sub_14005E2C0(v14);
	v16 = *(_QWORD*)(v14 + 16);
	v17 = sub_14005C1B0(v14, 0, 0);
	*(_DWORD*)(v16 + 8) = 5;
	*(_QWORD*)v16 = v17;
	*(_QWORD*)(v14 + 16) += 16i64;
	v18 = sub_1400578C0(v14);
	v19 = *(_DWORD*)(a4 + 8);
	v20 = v18;
	v21 = *(_QWORD*)(*(_QWORD*)(a4 + 16) + 32i64);
	v80 = v18;
	v22 = sub_14005C3C0(*(_QWORD*)(v21 + 160), v19);
	v24 = *(_QWORD*)(v23 + 16);
	*(_QWORD*)v24 = *v22;
	*(_DWORD*)(v24 + 8) = *((_DWORD*)v22 + 2);
	*(_QWORD*)(v23 + 16) += 16i64;
	v25 = *(_QWORD*)(a4 + 16);
	if (v9)
	{
		v26 = (unsigned __int64*)sub_14018F0E0(&v83, L"bRewardsLocked")[1];
		if (v26)
		{
			v27 = -1i64;
			do
				++v27;
			while (*((_BYTE*)v26 + v27));
			sub_140058710(v25, v26, v27);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v25 + 16) + 8i64) = 0;
			*(_QWORD*)(v25 + 16) += 16i64;
		}
		if (v84)
			sub_14018B900(v84, 0);
		v28 = *(_DWORD**)(v25 + 16);
		*v28 = 1;
		v28[2] = 1;
		*(_QWORD*)(v25 + 16) += 16i64;
		v29 = (__int64*)sub_1400580E0(v25, -3);
		sub_14005EA50(v25, v29, (int*)(*(_QWORD*)(v25 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v25 + 16) - 16i64));
		*(_QWORD*)(v25 + 16) -= 32i64;
		*(_QWORD*)(*(_QWORD*)(a4 + 16) + 16i64) -= 16i64;
		v30 = a5;
		v76 = v77 + 12;
		v31 = (unsigned __int8*)(v77 + 12);
		v87 = v78;
		while (1)
		{
			v32 = *(_QWORD*)(v13 + 16);
			v86 = 1;
			v33 = *(_QWORD*)(v32 + 32);
			v83 = off_140B569F0;
			v85 = v32;
			if (*(_QWORD*)(v33 + 120) >= *(_QWORD*)(v33 + 112))
				sub_14005E2C0(v32);
			v34 = *(_QWORD*)(v32 + 16);
			v35 = sub_14005C1B0(v32, 0, 0);
			*(_DWORD*)(v34 + 8) = 5;
			*(_QWORD*)v34 = v35;
			*(_QWORD*)(v32 + 16) += 16i64;
			v36 = sub_1400578C0(v32);
			v37 = *v31;
			v38 = *((_DWORD*)v31 - 1);
			v39 = v36;
			LODWORD(v84) = v36;
			v40 = v37 - 1;
			if (v40)
			{
				v41 = v40 - 1;
				if (v41)
				{
					v42 = (unsigned int)(v41 - 1);
					if ((_DWORD)v42)
						goto LABEL_64;
					v43 = sub_140230800(v38);
					if (!v43)
						goto LABEL_64;
					v44 = sub_140639E60(v43, (__int64)&v83, v30);
				}
				else
				{
					v45 = sub_1402303C0(v38);
					if (!v45)
						goto LABEL_64;
					v44 = sub_140639C80(v45, (__int64)&v83, v30);
				}
			}
			else
			{
				v46 = sub_14022FF80(v38);
				if (!v46)
					goto LABEL_64;
				v44 = sub_140639710(v46, (__int64)&v83, v30);
			}
			if (v44)
			{
				v47 = 0;
				switch (*v31)
				{
				case 1u:
					goto LABEL_34;
				case 2u:
					v47 = 0x80000000;
					break;
				case 3u:
				LABEL_34:
					v47 = 1;
					break;
				}
				v48 = (v47 & *((_DWORD*)v31 + 1)) != 0;
				if (*v31 == 2)
					v48 = 0;
				v49 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v32 + 32) + 160i64), v39);
				v50 = *(_QWORD*)(v32 + 16);
				*(_QWORD*)v50 = *v49;
				*(_DWORD*)(v50 + 8) = *((_DWORD*)v49 + 2);
				*(_QWORD*)(v32 + 16) += 16i64;
				v51 = (unsigned __int64*)sub_14018F0E0(&v83, L"bAlreadyGranted")[1];
				if (v51)
				{
					v52 = -1i64;
					do
						++v52;
					while (*((_BYTE*)v51 + v52));
					sub_140058710(v32, v51, v52);
				}
				else
				{
					*(_DWORD*)(*(_QWORD*)(v32 + 16) + 8i64) = 0;
					*(_QWORD*)(v32 + 16) += 16i64;
				}
				if (v84)
					sub_14018B900(v84, 0);
				v53 = *(BOOL**)(v32 + 16);
				v53[2] = 1;
				*v53 = v48;
				*(_QWORD*)(v32 + 16) += 16i64;
				v54 = (__int64*)sub_1400580E0(v32, -3);
				sub_14005EA50(v32, v54, (int*)(*(_QWORD*)(v32 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v32 + 16) - 16i64));
				*(_QWORD*)(v32 + 16) -= 48i64;
				v55 = 1.0;
				if (*v31 == 2)
				{
					v56 = v76;
					v57 = v78;
					do
					{
						if (*(_BYTE*)v56 == 3 && (*(_DWORD*)(v56 + 4) & 1) == 0)
						{
							v58 = sub_140230800(*(_DWORD*)(v56 - 4));
							if (v58)
							{
								if (*(_DWORD*)(v58 + 4) == 38)
									v55 = v55 * *(float*)(v58 + 12);
							}
						}
						v56 += 20i64;
						--v57;
					} while (v57);
					v59 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v32 + 32) + 160i64), v39);
					v60 = *(_QWORD*)(v32 + 16);
					*(_QWORD*)v60 = *v59;
					*(_DWORD*)(v60 + 8) = *((_DWORD*)v59 + 2);
					*(_QWORD*)(v32 + 16) += 16i64;
					v61 = (unsigned __int64*)sub_14018F0E0(&v83, L"nMultiplier")[1];
					if (v61)
					{
						v62 = -1i64;
						do
							++v62;
						while (*((_BYTE*)v61 + v62));
						if (*(_QWORD*)(*(_QWORD*)(v32 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v32 + 32) + 112i64))
							sub_14005E2C0(v32);
						v63 = *(_QWORD*)(v32 + 16);
						v64 = sub_140062650(v32, v61, v62);
						*(_DWORD*)(v63 + 8) = 4;
						*(_QWORD*)v63 = v64;
					}
					else
					{
						*(_DWORD*)(*(_QWORD*)(v32 + 16) + 8i64) = 0;
					}
					v65 = v84;
					*(_QWORD*)(v32 + 16) += 16i64;
					if (v65)
						sub_14018B900(v65, 0);
					v66 = *(_QWORD*)(v32 + 16);
					*(_DWORD*)(v66 + 8) = 3;
					*(double*)v66 = v55;
					*(_QWORD*)(v32 + 16) += 16i64;
					v67 = (__int64*)sub_1400580E0(v32, -3);
					sub_14005EA50(
						v32,
						v67,
						(int*)(*(_QWORD*)(v32 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(v32 + 16) - 16i64));
					*(_QWORD*)(v32 + 16) -= 48i64;
					v13 = a4;
					v30 = a5;
				}
				sub_1400FB1D0((__int64)&v79);
			}
		LABEL_64:
			sub_1400579E0(v32, v42, v39);
			v31 += 20;
			if (!--v87)
				goto LABEL_75;
		}
	}
	v68 = (unsigned __int64*)sub_14018F0E0(&v83, L"bRewardsLocked")[1];
	if (v68)
	{
		v69 = -1i64;
		do
			++v69;
		while (*((_BYTE*)v68 + v69));
		sub_140058710(v25, v68, v69);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v25 + 16) + 8i64) = 0;
		*(_QWORD*)(v25 + 16) += 16i64;
	}
	if (v84)
		sub_14018B900(v84, 0);
	v70 = *(_DWORD**)(v25 + 16);
	*v70 = 0;
	v70[2] = 1;
	*(_QWORD*)(v25 + 16) += 16i64;
	v71 = (__int64*)sub_1400580E0(v25, -3);
	sub_14005EA50(v25, v71, (int*)(*(_QWORD*)(v25 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v25 + 16) - 16i64));
	*(_QWORD*)(v25 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a4 + 16) + 16i64) -= 16i64;
	v73 = (_QWORD*)sub_140636C40(v72, a2);
	if (v73)
	{
		sub_140634870(v73, (__int64)&v79, a5);
	LABEL_75:
		v20 = v80;
		v14 = v81;
	}
	sub_1400FB2A0(v13, (__int64)L"arRewards", v20);
	if (v14)
		sub_1400579E0(v14, v74, v20);
	result = v77;
	if (v77)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v77 - 16) + 8i64))(v77 - 16);
	return result;
}
// 14063923D: conditional instruction was optimized away because r13.8!=0
// 14063947C: conditional instruction was optimized away because ecx.4==1
// 14063917E: variable 'v23' is possibly undefined
// 1406395B1: variable 'v42' is possibly undefined
// 140639674: variable 'v72' is possibly undefined
// 1406396DA: variable 'v74' is possibly undefined
// 140B28928: using guessed type wchar_t aArrewards_7[10];
// 140B28958: using guessed type wchar_t aNmultiplier_0[12];
// 140B28970: using guessed type wchar_t aBrewardslocked_0[15];
// 140B28990: using guessed type wchar_t aBrewardslocked[15];
// 140B289B0: using guessed type wchar_t aBalreadygrante[16];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B79ED0: using guessed type int dword_140B79ED0;
// 140C65C20: using guessed type __int64 qword_140C65C20;

