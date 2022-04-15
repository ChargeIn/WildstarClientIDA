#include "../winhttp.h"

//----- (000000014065C020) ----------------------------------------------------
__int64 __fastcall sub_14065C020(__int64 a1)
{
	_QWORD* v1; // r14
	int* v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rax
	unsigned int v5; // edx
	__int64 v6; // rax
	_QWORD* v7; // rsi
	__int64 v8; // rcx
	unsigned __int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	int v12; // r10d
	_QWORD* v13; // rax
	_QWORD* v14; // rbx
	_DWORD* v15; // r13
	int v16; // edi
	int* v17; // rax
	__int64 v18; // rcx
	__int64 v19; // rdi
	int v20; // esi
	unsigned __int64 v21; // r12
	unsigned __int64 v22; // rsi
	__int64 v23; // rbx
	__int64 v24; // rcx
	unsigned __int64 v25; // rax
	__int64 v26; // rdi
	__int64 v27; // rax
	int v28; // eax
	__int64 v29; // rcx
	int v30; // edi
	_QWORD* v31; // rax
	__int64 v32; // rcx
	__int64 v33; // rdx
	int v34; // r11d
	_QWORD* v35; // rax
	__int64 v36; // r11
	__int64 v37; // rdx
	__int64 v38; // rdx
	__int64 v39; // rdi
	__int64 v40; // r12
	unsigned __int64 v41; // rsi
	int v42; // ebx
	__int64 v43; // rdx
	__int64 v44; // rcx
	__int64 v45; // rax
	int v46; // r8d
	__int64 v47; // rcx
	__int64 v48; // rdx
	unsigned int* v49; // r8
	__int64 v50; // rcx
	unsigned __int64 v51; // rax
	__int64 v52; // rdi
	__int64 v53; // rax
	int v54; // eax
	__int64 v55; // rcx
	int v56; // edi
	_QWORD* v57; // rax
	__int64 v58; // rcx
	__int64 v59; // rdx
	int v60; // r11d
	_QWORD* v61; // rax
	__int64 v62; // r11
	__int64 v63; // rdx
	__int64 v64; // rdx
	_QWORD* v65; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	_QWORD* v68; // rax
	__int64 v69; // r8
	__int64 v70; // rdx
	int v71; // r10d
	__int64 v73; // [rsp+20h] [rbp-79h] BYREF
	unsigned __int64 v74; // [rsp+28h] [rbp-71h]
	__int64 v75; // [rsp+30h] [rbp-69h] BYREF
	unsigned __int64 v76; // [rsp+38h] [rbp-61h]
	__int64(__fastcall * *v77)(); // [rsp+40h] [rbp-59h] BYREF
	int v78; // [rsp+48h] [rbp-51h]
	_QWORD* v79; // [rsp+50h] [rbp-49h]
	int v80; // [rsp+58h] [rbp-41h]
	__int64(__fastcall * *v81)(); // [rsp+60h] [rbp-39h] BYREF
	int v82; // [rsp+68h] [rbp-31h]
	_QWORD* v83; // [rsp+70h] [rbp-29h]
	int v84; // [rsp+78h] [rbp-21h]
	__int64 v85; // [rsp+80h] [rbp-19h]
	__int64 v86[5]; // [rsp+88h] [rbp-11h] BYREF
	int v87; // [rsp+B0h] [rbp+17h]
	int v88; // [rsp+B4h] [rbp+1Bh]
	int v89; // [rsp+B8h] [rbp+1Fh]
	_QWORD* v90; // [rsp+108h] [rbp+6Fh]
	int v91; // [rsp+110h] [rbp+77h]
	_QWORD* v92; // [rsp+118h] [rbp+7Fh]

	v1 = (_QWORD*)a1;
	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2
		&& (v3 = sub_1403D90D0(qword_140C65898, *v2)) != 0
		&& *(_QWORD*)(qword_140C65898 + 120)
		&& (v4 = *(_QWORD*)(v3 + 24)) != 0
		&& (v5 = *(_DWORD*)(v4 + 112)) != 0)
	{
		v6 = sub_1403AC530(v3, v5);
		v7 = (_QWORD*)v6;
		v92 = (_QWORD*)v6;
		if (v6 && (*(_BYTE*)(*(_QWORD*)v6 + 4i64) & 4) != 0)
		{
			v8 = v1[4];
			v81 = off_140B569F0;
			v9 = *(_QWORD*)(v8 + 112);
			v83 = v1;
			v84 = 1;
			if (*(_QWORD*)(v8 + 120) >= v9)
				sub_14005E2C0((__int64)v1);
			v10 = v1[2];
			v11 = sub_14005C1B0((__int64)v1, 0, 0);
			*(_DWORD*)(v10 + 8) = 5;
			*(_QWORD*)v10 = v11;
			v1[2] += 16i64;
			v12 = sub_1400578C0((__int64)v1);
			v82 = v12;
			v13 = (_QWORD*)v7[2];
			v14 = (_QWORD*)v13[2];
			v90 = v14;
			if (v14 != v13)
			{
				do
				{
					v85 = v14[5];
					v15 = *(_DWORD**)v85;
					if (*(_QWORD*)v85)
					{
						v16 = v15[5];
						v91 = v16;
						if (v15[1] <= 1u)
						{
							if ((*(_BYTE*)(*v7 + 4i64) & 2) != 0)
							{
								v17 = sub_1400B5DF0(qword_140C658F0, v15[2], 0i64);
								v91 = (int)(float)(sub_140648120(v18, (unsigned int*)v17, 0i64).m128_f32[0] * (float)v16);
							}
							v19 = qword_140C65898;
							v20 = v15[2];
							v76 = 0i64;
							v75 = 0i64;
							sub_1405CABD0(qword_140C65898 + 160, v20, &v75);
							sub_1405CABD0(v19 + 184, v20, &v75);
							sub_1405CABD0(v19 + 280, v20, &v75);
							sub_1405CABD0(v19 + 304, v20, &v75);
							v21 = v76;
							v22 = 0i64;
							if (v76)
							{
								v23 = v75;
								do
								{
									v24 = v1[4];
									v79 = v1;
									v77 = off_140B569F0;
									v25 = *(_QWORD*)(v24 + 112);
									v80 = 1;
									if (*(_QWORD*)(v24 + 120) >= v25)
										sub_14005E2C0((__int64)v1);
									v26 = v1[2];
									v27 = sub_14005C1B0((__int64)v1, 0, 0);
									*(_DWORD*)(v26 + 8) = 5;
									*(_QWORD*)v26 = v27;
									v1[2] += 16i64;
									v28 = sub_1400578C0((__int64)v1);
									v29 = *(_QWORD*)(v1[4] + 160i64);
									v30 = v28;
									v78 = v28;
									v31 = sub_14005C3C0(v29, v28);
									v32 = v1[2];
									*(_QWORD*)v32 = *v31;
									*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
									v1[2] += 16i64;
									sub_1400F06F0((__int64)v1, v33, L"idRep", v34);
									v1[2] -= 16i64;
									v35 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v30);
									*(_QWORD*)v36 = *v35;
									*(_DWORD*)(v36 + 8) = *((_DWORD*)v35 + 2);
									v1[2] += 16i64;
									sub_1400F06F0((__int64)v1, v37, L"nRepAmount", v91);
									v1[2] -= 16i64;
									if ((unsigned int)sub_140415D60(v1, *(void(__fastcall****)(_QWORD))(v23 + 8 * v22)))
									{
										sub_1400FB540((__int64)&v77);
										v1[2] -= 16i64;
									}
									sub_1400FB1D0((__int64)&v81);
									sub_1400579E0((__int64)v1, v38, v30);
									++v22;
								} while (v22 < v21);
								v14 = v90;
							}
							if (v75)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v75 - 16) + 8i64))(v75 - 16);
						}
						if (*(_DWORD*)(*(_QWORD*)v85 + 4i64) == 2)
						{
							v39 = qword_140C65898;
							v74 = 0i64;
							v73 = 0i64;
							sub_1403D6710(qword_140C65898 + 160, &v73);
							sub_1403D6710(v39 + 184, &v73);
							sub_1403D6710(v39 + 280, &v73);
							sub_1403D6710(v39 + 304, &v73);
							v40 = v73;
							v41 = 0i64;
							if (v74)
							{
								v42 = v91;
								do
								{
									v43 = *(_QWORD*)(v40 + 8 * v41);
									if (*(_QWORD*)(qword_140C65898 + 120))
									{
										v44 = *(_QWORD*)(v43 + 64);
										v86[0] = *(_QWORD*)(qword_140C65898 + 120);
										v45 = *(_QWORD*)(v43 + 72);
										v86[1] = 0i64;
										v86[4] = 8i64;
										v87 = 0;
										v89 = -1;
										v86[2] = v44;
										if (!v45)
											v45 = v44 + 8;
										v46 = v15[2];
										v86[3] = v45;
										v88 = 0;
										if (sub_1404A1CA0(qword_140C659A0, v86, v46))
										{
											if ((*(_BYTE*)(*v92 + 4i64) & 2) != 0)
											{
												v48 = *(_QWORD*)(v40 + 8 * v41);
												v49 = *(unsigned int**)(v48 + 72);
												if (!v49)
													v49 = (unsigned int*)(*(_QWORD*)(v48 + 64) + 8i64);
												v42 = (int)(float)(sub_140648120(v47, (unsigned int*)*(_QWORD*)(v48 + 64), v49).m128_f32[0]
													* (float)v42);
											}
											v50 = v1[4];
											v79 = v1;
											v77 = off_140B569F0;
											v51 = *(_QWORD*)(v50 + 112);
											v80 = 1;
											if (*(_QWORD*)(v50 + 120) >= v51)
												sub_14005E2C0((__int64)v1);
											v52 = v1[2];
											v53 = sub_14005C1B0((__int64)v1, 0, 0);
											*(_DWORD*)(v52 + 8) = 5;
											*(_QWORD*)v52 = v53;
											v1[2] += 16i64;
											v54 = sub_1400578C0((__int64)v1);
											v55 = *(_QWORD*)(v1[4] + 160i64);
											v56 = v54;
											v78 = v54;
											v57 = sub_14005C3C0(v55, v54);
											v58 = v1[2];
											*(_QWORD*)v58 = *v57;
											*(_DWORD*)(v58 + 8) = *((_DWORD*)v57 + 2);
											v1[2] += 16i64;
											sub_1400F06F0((__int64)v1, v59, L"idRep", v60);
											v1[2] -= 16i64;
											v61 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v56);
											*(_QWORD*)v62 = *v61;
											*(_DWORD*)(v62 + 8) = *((_DWORD*)v61 + 2);
											v1[2] += 16i64;
											sub_1400F06F0((__int64)v1, v63, L"nRepAmount", v42);
											v1[2] -= 16i64;
											if ((unsigned int)sub_140415D60(v1, *(void(__fastcall****)(_QWORD))(v40 + 8 * v41)))
											{
												sub_1400FB540((__int64)&v77);
												v1[2] -= 16i64;
											}
											sub_1400FB1D0((__int64)&v81);
											sub_1400579E0((__int64)v1, v64, v56);
										}
									}
									++v41;
								} while (v41 < v74);
								v14 = v90;
							}
							if (v40)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v40 - 16) + 8i64))(v40 - 16);
						}
					}
					v65 = (_QWORD*)v14[3];
					if (v65)
					{
						v14 = (_QWORD*)v14[3];
						v90 = v65;
						for (i = (_QWORD*)v65[2]; i; i = (_QWORD*)i[2])
						{
							v14 = i;
							v90 = i;
						}
					}
					else
					{
						for (j = v14[1]; v14 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
							v14 = (_QWORD*)j;
						if (v14[3] != j)
							v14 = (_QWORD*)j;
						v90 = v14;
					}
					v7 = v92;
				} while (v14 != (_QWORD*)v92[2]);
				v1 = v83;
				v12 = v82;
			}
			v68 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v12);
			v69 = v1[2];
			*(_QWORD*)v69 = *v68;
			v70 = *((unsigned int*)v68 + 2);
			*(_DWORD*)(v69 + 8) = v70;
			v1[2] += 16i64;
			sub_1400579E0((__int64)v1, v70, v71);
			return 1i64;
		}
		else
		{
			*(_DWORD*)(v1[2] + 8i64) = 0;
			v1[2] += 16i64;
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(v1[2] + 8i64) = 0;
		v1[2] += 16i64;
		return 1i64;
	}
}
// 14065C199: variable 'v18' is possibly undefined
// 14065C2C5: variable 'v33' is possibly undefined
// 14065C2C5: variable 'v34' is possibly undefined
// 14065C2F8: variable 'v36' is possibly undefined
// 14065C308: variable 'v37' is possibly undefined
// 14065C348: variable 'v38' is possibly undefined
// 14065C487: variable 'v47' is possibly undefined
// 14065C534: variable 'v59' is possibly undefined
// 14065C534: variable 'v60' is possibly undefined
// 14065C567: variable 'v62' is possibly undefined
// 14065C577: variable 'v63' is possibly undefined
// 14065C5B7: variable 'v64' is possibly undefined
// 14065C696: variable 'v71' is possibly undefined
// 140B2D6A8: using guessed type wchar_t aNrepamount_0[11];
// 140B2D700: using guessed type wchar_t aIdrep_0[6];
// 140B2D710: using guessed type wchar_t aIdrep[6];
// 140B2D720: using guessed type wchar_t aNrepamount[11];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C659A0: using guessed type __int64 qword_140C659A0;

