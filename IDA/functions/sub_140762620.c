#include "../winhttp.h"

//----- (0000000140762620) ----------------------------------------------------
__int64 __fastcall sub_140762620(_QWORD* a1)
{
	__int64 v1; // rdx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // esi
	__int64 v7; // r14
	__int64 v8; // r15
	__int64 v9; // rcx
	_QWORD* v10; // rdi
	unsigned __int64 v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rax
	unsigned __int64 v14; // rbx
	unsigned int v15; // r15d
	__int64 v16; // r12
	__int64 v17; // rcx
	unsigned __int64 v18; // rsi
	__int64 v19; // r14
	int v20; // r12d
	__int64 v21; // r9
	_DWORD* v22; // rdx
	__int64 v23; // rcx
	int v24; // ebx
	int v25; // eax
	int v26; // edx
	__int64 v27; // rcx
	__int64 v28; // rax
	__int64 v29; // r10
	__int64 v30; // r9
	_DWORD* v31; // rcx
	__int64 v32; // r8
	__int64 v33; // rdx
	__int64 v34; // r9
	_DWORD* v35; // r8
	__int64 v36; // rdx
	unsigned int v38; // [rsp+20h] [rbp-49h]
	__int64 v39; // [rsp+28h] [rbp-41h]
	__int64 v40; // [rsp+30h] [rbp-39h]
	__int64 v41; // [rsp+38h] [rbp-31h] BYREF
	unsigned __int64 v42; // [rsp+40h] [rbp-29h]
	__int64(__fastcall * *v43)(); // [rsp+48h] [rbp-21h] BYREF
	int v44; // [rsp+50h] [rbp-19h]
	_QWORD* v45; // [rsp+58h] [rbp-11h]
	int v46; // [rsp+60h] [rbp-9h]
	int v47; // [rsp+D0h] [rbp+67h]
	double v48; // [rsp+D0h] [rbp+67h]
	double v49; // [rsp+D0h] [rbp+67h]
	double v50; // [rsp+D0h] [rbp+67h]
	int v51; // [rsp+D8h] [rbp+6Fh] BYREF
	int v52; // [rsp+E0h] [rbp+77h]
	int v53; // [rsp+E8h] [rbp+7Fh]

	v1 = a1[4];
	v3 = *(_QWORD*)(v1 + 112);
	v53 = 1;
	if (*(_QWORD*)(v1 + 120) >= v3)
		sub_14005E2C0((__int64)a1);
	v4 = a1[2];
	v5 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	a1[2] += 16i64;
	v52 = sub_1400578C0((__int64)a1);
	v6 = 1;
	v7 = 22i64;
	v8 = 292i64;
	v47 = 1;
	v39 = 22i64;
	v38 = v52 - 1;
	v40 = 292i64;
	do
	{
		v43 = off_140B569F0;
		v9 = a1[4];
		v10 = a1;
		v11 = *(_QWORD*)(v9 + 112);
		v45 = a1;
		v46 = 1;
		if (*(_QWORD*)(v9 + 120) >= v11)
			sub_14005E2C0((__int64)a1);
		v12 = a1[2];
		v13 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v12 + 8) = 5;
		*(_QWORD*)v12 = v13;
		a1[2] += 16i64;
		v14 = 0i64;
		v44 = sub_1400578C0((__int64)a1);
		v51 = *(_DWORD*)(v8 + qword_140C65930);
		if ((unsigned int)sub_140433830(a1, &v51))
		{
			sub_1400FB470((__int64)&v43);
			v10 = v45;
			v45[2] -= 16i64;
		}
		v15 = 2;
		v16 = 2i64;
		do
		{
			if (v6 < 3)
			{
				v17 = *(_QWORD*)(qword_140C65930 + 8 * (v16 + v7));
				if (v17)
				{
					v42 = 0i64;
					v41 = 0i64;
					if ((int)sub_14048AE40(v17, &v41) >= 0)
					{
						v18 = v42;
						v19 = v41;
						if (v42)
						{
							do
							{
								v51 = **(_DWORD**)(v19 + 8 * v14);
								if ((unsigned int)sub_140433830(v10, &v51))
								{
									sub_1400FB470((__int64)&v43);
									v10 = v45;
									v45[2] -= 16i64;
								}
								++v14;
							} while (v14 < v18);
						}
						if (v19)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v19 - 16) + 8i64))(v19 - 16);
						v7 = v39;
						v6 = v47;
					}
					else if (v41)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v41 - 16) + 8i64))(v41 - 16);
					}
				}
			}
			++v15;
			++v16;
			v14 = 0i64;
		} while (v15 < 4);
		v20 = v52;
		v21 = *(_QWORD*)(a1[4] + 160i64);
		if (v38 >= *(_DWORD*)(v21 + 56))
		{
			if ((double)v52 == 0.0)
			{
				v22 = *(_DWORD**)(v21 + 32);
			}
			else
			{
				v48 = (double)v52;
				v22 = (_DWORD*)(*(_QWORD*)(v21 + 32)
					+ 40 * ((unsigned int)(LODWORD(v48) + HIDWORD(v48)) % (((1i64 << *(_BYTE*)(v21 + 11)) - 1) | 1)));
			}
			while (v22[6] != 3 || (double)v52 != *((double*)v22 + 2))
			{
				v22 = (_DWORD*)*((_QWORD*)v22 + 4);
				if (!v22)
				{
					v22 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v22 = (_DWORD*)(*(_QWORD*)(v21 + 24) + 16i64 * (v52 - 1));
		}
		v23 = a1[2];
		v24 = v44;
		*(_QWORD*)v23 = *(_QWORD*)v22;
		v25 = v22[2];
		v26 = v53;
		*(_DWORD*)(v23 + 8) = v25;
		a1[2] += 16i64;
		v27 = a1[2];
		*(_DWORD*)(v27 + 8) = 3;
		v53 = v26 + 1;
		*(double*)v27 = (double)v26;
		v28 = a1[4];
		v29 = a1[2] + 16i64;
		a1[2] = v29;
		v30 = *(_QWORD*)(v28 + 160);
		if ((unsigned int)(v24 - 1) >= *(_DWORD*)(v30 + 56))
		{
			if ((double)v24 == 0.0)
			{
				v31 = *(_DWORD**)(v30 + 32);
			}
			else
			{
				v49 = (double)v24;
				v31 = (_DWORD*)(*(_QWORD*)(v30 + 32)
					+ 40 * ((unsigned int)(LODWORD(v49) + HIDWORD(v49)) % (((1i64 << *(_BYTE*)(v30 + 11)) - 1) | 1)));
			}
			while (v31[6] != 3 || (double)v24 != *((double*)v31 + 2))
			{
				v31 = (_DWORD*)*((_QWORD*)v31 + 4);
				if (!v31)
				{
					v31 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v31 = (_DWORD*)(*(_QWORD*)(v30 + 24) + 16i64 * (v24 - 1));
		}
		*(_QWORD*)v29 = *(_QWORD*)v31;
		*(_DWORD*)(v29 + 8) = v31[2];
		v32 = a1[2] + 16i64;
		a1[2] = v32;
		sub_14005EA50((__int64)a1, (__int64*)(v32 - 48), (int*)(v32 - 32), (unsigned int*)(v32 - 16));
		a1[2] -= 48i64;
		if (v10)
			sub_1400579E0((__int64)v10, v33, v24);
		++v6;
		v7 += 5i64;
		v8 = v40 + 4;
		v47 = v6;
		v39 = v7;
		v40 += 4i64;
	} while ((unsigned int)v6 < 3);
	v34 = *(_QWORD*)(a1[4] + 160i64);
	if ((unsigned int)(v20 - 1) >= *(_DWORD*)(v34 + 56))
	{
		if ((double)v20 == 0.0)
		{
			v35 = *(_DWORD**)(v34 + 32);
		}
		else
		{
			v50 = (double)v20;
			v35 = (_DWORD*)(*(_QWORD*)(v34 + 32)
				+ 40 * ((unsigned int)(LODWORD(v50) + HIDWORD(v50)) % (((1i64 << *(_BYTE*)(v34 + 11)) - 1) | 1)));
		}
		while (v35[6] != 3 || (double)v20 != *((double*)v35 + 2))
		{
			v35 = (_DWORD*)*((_QWORD*)v35 + 4);
			if (!v35)
			{
				v35 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v35 = (_DWORD*)(*(_QWORD*)(v34 + 24) + 16i64 * (v20 - 1));
	}
	v36 = a1[2];
	*(_QWORD*)v36 = *(_QWORD*)v35;
	*(_DWORD*)(v36 + 8) = v35[2];
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v36, v20);
	return 1i64;
}
// 140762709: conditional instruction was optimized away because esi.4<3u
// 14076275D: conditional instruction was optimized away because r15d.4<4u
// 1407629BA: variable 'v33' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65930: using guessed type __int64 qword_140C65930;

