#include "../winhttp.h"

//----- (00000001404FC390) ----------------------------------------------------
__int64 __fastcall sub_1404FC390(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v5; // rcx
	signed int v6; // eax
	unsigned int v7; // r13d
	int v8; // esi
	int v9; // r9d
	__int64 v10; // r8
	__int64 v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // rcx
	unsigned __int64 v14; // rax
	__int64 v15; // rbx
	__int64 v16; // rax
	int v17; // eax
	__int64 v18; // rdx
	unsigned __int64 v19; // rcx
	__int64 v20; // rsi
	__int64 v21; // rbx
	__int64 v22; // rax
	int v23; // ebx
	int v24; // ecx
	__int64 v25; // r14
	__int64 v26; // rdi
	__int64 v27; // rsi
	__int64 v28; // rbx
	__int64 v29; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v32; // rax
	__int64 k; // rax
	__int64 m; // rax
	int v35; // edi
	_QWORD* v36; // rax
	__int64 v37; // rdx
	_QWORD* v38; // rax
	__int64 v39; // r10
	__int64 v40; // rdx
	_QWORD* v41; // rax
	__int64 v42; // r10
	__int64 v43; // rdx
	_QWORD* v44; // rax
	__int64 v45; // r10
	unsigned __int64* v46; // rdx
	unsigned __int64 v47; // r8
	BOOL* v48; // rcx
	__int64* v49; // rax
	_QWORD* v50; // rax
	__int64 v51; // rdx
	__int64 v52; // rdx
	__int64(__fastcall * *v53)(); // [rsp+20h] [rbp-79h] BYREF
	__int64 v54; // [rsp+28h] [rbp-71h]
	_QWORD* v55; // [rsp+30h] [rbp-69h]
	int v56; // [rsp+38h] [rbp-61h]
	int v57; // [rsp+40h] [rbp-59h]
	int v58; // [rsp+44h] [rbp-55h]
	int v59; // [rsp+48h] [rbp-51h]
	__int64 v60; // [rsp+50h] [rbp-49h]
	char v61[8]; // [rsp+58h] [rbp-41h] BYREF
	__int64 v62; // [rsp+60h] [rbp-39h]
	char v63[8]; // [rsp+78h] [rbp-21h] BYREF
	__int64 v64; // [rsp+80h] [rbp-19h]
	__int64 v65; // [rsp+88h] [rbp-11h]
	__int64(__fastcall * *v66)(); // [rsp+A0h] [rbp+7h] BYREF
	int v67; // [rsp+A8h] [rbp+Fh]
	_QWORD* v68; // [rsp+B0h] [rbp+17h]
	int v69; // [rsp+B8h] [rbp+1Fh]
	int v70; // [rsp+108h] [rbp+6Fh]
	BOOL v71; // [rsp+110h] [rbp+77h]
	__int64 v72; // [rsp+110h] [rbp+77h]
	int v73; // [rsp+118h] [rbp+7Fh]

	v2 = sub_1404F87C0(a1, 1u);
	v3 = v2;
	if (v2)
	{
		v5 = *(_QWORD*)(v2 + 2328);
		if (v5 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v5 + 24i64))(v5) > 0)
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 2328) + 112i64))(*(_QWORD*)(v3 + 2328));
		if (*(_QWORD*)(v3 + 2168))
		{
			v6 = sub_140056D60(a1, 2u);
			v7 = v6;
			if (v6 >= 0)
			{
				v8 = 0;
				v70 = 0;
				v71 = 0;
				v9 = sub_14002F530(v3 + 2336, v6);
				v73 = v9;
				if (*(_DWORD*)(v3 + 7304) == *(_DWORD*)(v3 + 7188) && *(_DWORD*)(v3 + 7308) == *(_DWORD*)(v3 + 7192))
				{
					v10 = *(_QWORD*)(v3 + 7248);
					v11 = v10;
					v12 = *(_QWORD*)(v10 + 8);
					while (v12)
					{
						if (*(_DWORD*)(v12 + 32) < v7)
						{
							v12 = *(_QWORD*)(v12 + 24);
						}
						else
						{
							v11 = v12;
							v12 = *(_QWORD*)(v12 + 16);
						}
					}
					if (v11 == v10 || (v72 = v11, v7 < *(_DWORD*)(v11 + 32)))
						v72 = *(_QWORD*)(v3 + 7248);
					if (v72 != v10)
					{
						v8 = *(_DWORD*)(v72 + 36);
						v70 = v8;
					}
					v71 = v8 != v9;
				}
				v13 = a1[4];
				v68 = a1;
				v14 = *(_QWORD*)(v13 + 112);
				v66 = off_140B569F0;
				v69 = 1;
				if (*(_QWORD*)(v13 + 120) >= v14)
					sub_14005E2C0((__int64)a1);
				v15 = a1[2];
				v16 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v15 + 8) = 5;
				*(_QWORD*)v15 = v16;
				a1[2] += 16i64;
				v17 = sub_1400578C0((__int64)a1);
				v18 = a1[4];
				v53 = off_140B569F0;
				v67 = v17;
				v19 = *(_QWORD*)(v18 + 112);
				v20 = (__int64)a1;
				v55 = a1;
				v56 = 1;
				if (*(_QWORD*)(v18 + 120) >= v19)
					sub_14005E2C0((__int64)a1);
				v21 = a1[2];
				v22 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v21 + 8) = 5;
				*(_QWORD*)v21 = v22;
				a1[2] += 16i64;
				v23 = sub_1400578C0((__int64)a1);
				v57 = *(_DWORD*)(v3 + 7032);
				v24 = *(_DWORD*)(v3 + 7036);
				LODWORD(v54) = v23;
				v58 = v24;
				v59 = *(_DWORD*)(v3 + 7040);
				v60 = *(_QWORD*)(v3 + 7048);
				sub_140030C70((__int64)v61, v3 + 7056);
				sub_140500630((__int64)v63, v3 + 7088);
				v25 = *(_QWORD*)(v60 + 8);
				v26 = *(_QWORD*)(v25 + 16);
				if (v26 != v25)
				{
					do
					{
						if (*(_DWORD*)(v26 + 32) == v7)
						{
							v27 = *(_QWORD*)(v26 + 48);
							v28 = *(_QWORD*)(v27 + 16);
							while (v28 != v27)
							{
								sub_1400FA9E0((__int64)&v53);
								v29 = *(_QWORD*)(v28 + 24);
								if (v29)
								{
									v28 = *(_QWORD*)(v28 + 24);
									for (i = *(_QWORD*)(v29 + 16); i; i = *(_QWORD*)(i + 16))
										v28 = i;
								}
								else
								{
									for (j = *(_QWORD*)(v28 + 8); v28 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
										v28 = j;
									if (*(_QWORD*)(v28 + 24) != j)
										v28 = j;
								}
							}
						}
						v32 = *(_QWORD*)(v26 + 24);
						if (v32)
						{
							v26 = *(_QWORD*)(v26 + 24);
							for (k = *(_QWORD*)(v32 + 16); k; k = *(_QWORD*)(k + 16))
								v26 = k;
						}
						else
						{
							for (m = *(_QWORD*)(v26 + 8); v26 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
								v26 = m;
							if (*(_QWORD*)(v26 + 24) != m)
								v26 = m;
						}
					} while (v26 != v25);
					v20 = (__int64)v55;
					v23 = v54;
				}
				v35 = v67;
				v36 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v67);
				v37 = a1[2];
				*(_QWORD*)v37 = *v36;
				*(_DWORD*)(v37 + 8) = *((_DWORD*)v36 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v37, L"idSlider", v7);
				a1[2] -= 16i64;
				v38 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v35);
				*(_QWORD*)v39 = *v38;
				*(_DWORD*)(v39 + 8) = *((_DWORD*)v38 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v40, L"nOriginalValue", v70);
				a1[2] -= 16i64;
				v41 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v35);
				*(_QWORD*)v42 = *v41;
				*(_DWORD*)(v42 + 8) = *((_DWORD*)v41 + 2);
				a1[2] += 16i64;
				sub_1400F06F0((__int64)a1, v43, L"nCurrentValue", v73);
				a1[2] -= 16i64;
				v44 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v35);
				*(_QWORD*)v45 = *v44;
				*(_DWORD*)(v45 + 8) = *((_DWORD*)v44 + 2);
				a1[2] += 16i64;
				v46 = (unsigned __int64*)sub_14018F0E0(&v53, L"bChanged")[1];
				if (v46)
				{
					v47 = -1i64;
					do
						++v47;
					while (*((_BYTE*)v46 + v47));
					sub_140058710((__int64)a1, v46, v47);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v54)
					sub_14018B900(v54, 0);
				v48 = (BOOL*)a1[2];
				v48[2] = 1;
				*v48 = v71;
				a1[2] += 16i64;
				v49 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v49, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				sub_1400FB2A0((__int64)&v66, (__int64)L"arValues", v23);
				v50 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v35);
				v51 = a1[2];
				*(_QWORD*)v51 = *v50;
				*(_DWORD*)(v51 + 8) = *((_DWORD*)v50 + 2);
				a1[2] += 16i64;
				if (v65)
				{
					sub_140032150((__int64)v63, *(_QWORD**)(v64 + 8));
					*(_QWORD*)(v64 + 16) = v64;
					*(_QWORD*)(v64 + 8) = 0i64;
					*(_QWORD*)(v64 + 24) = v64;
					v65 = 0i64;
				}
				sub_14018B900(v64, 0);
				sub_140008410((__int64)v61);
				sub_14018B900(v62, 0);
				if (v20)
					sub_1400579E0(v20, v52, v23);
				sub_1400579E0((__int64)a1, v52, v35);
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
				a1[2] += 16i64;
			}
			return 1i64;
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 1404FC73A: variable 'v39' is possibly undefined
// 1404FC74C: variable 'v40' is possibly undefined
// 1404FC77A: variable 'v42' is possibly undefined
// 1404FC78C: variable 'v43' is possibly undefined
// 1404FC7B6: variable 'v45' is possibly undefined
// 1404FC8F6: variable 'v52' is possibly undefined
// 140B0F1F8: using guessed type wchar_t aArvalues[9];
// 140B0F240: using guessed type wchar_t aNoriginalvalue[15];
// 140B0F260: using guessed type wchar_t aIdslider_1[9];
// 140B0F278: using guessed type wchar_t aBchanged_0[9];
// 140B0F290: using guessed type wchar_t aNcurrentvalue[14];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 1404FC390: using guessed type char var_98[8];
// 1404FC390: using guessed type char var_78[8];

