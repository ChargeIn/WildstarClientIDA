#include "../winhttp.h"

//----- (000000014074E150) ----------------------------------------------------
__int64 __fastcall sub_14074E150(__int64* a1)
{
	unsigned int v1; // r12d
	__int64* v2; // r15
	unsigned __int64 v3; // rdx
	unsigned int v4; // ecx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rcx
	unsigned int v8; // eax
	__int64 v9; // rax
	__int64 v10; // rbp
	int* v11; // rax
	__int64 v12; // rcx
	int v13; // edx
	bool v14; // zf
	int* v15; // rsi
	int* v16; // rbx
	__int64* v17; // rdi
	__int64* v18; // r14
	__int64 v19; // r15
	__int64 v20; // r13
	_DWORD* v21; // rax
	__int64 v22; // rcx
	unsigned int* v23; // rax
	int* v24; // rbp
	unsigned int v25; // edx
	__int64 v26; // rax
	unsigned int v27; // esi
	unsigned int* v28; // rdi
	__int64 v29; // rax
	__int64 v30; // rcx
	unsigned __int64 v31; // rax
	__int64 v32; // rbx
	__int64 v33; // rax
	int v34; // ebp
	__int64 v35; // r8
	unsigned __int64 v36; // rbx
	__int64 v37; // rax
	__int64* v38; // rax
	__int64 v39; // r8
	__int64 v40; // rdx
	int* v41; // rbx
	__int64 v42; // rcx
	__int64 v44; // [rsp+30h] [rbp-78h] BYREF
	int* v45; // [rsp+38h] [rbp-70h]
	char v46[8]; // [rsp+40h] [rbp-68h] BYREF
	int* v47; // [rsp+48h] [rbp-60h]
	__int64(__fastcall * *v48)(); // [rsp+50h] [rbp-58h] BYREF
	__int64* v49; // [rsp+58h] [rbp-50h]
	__int64* v50; // [rsp+60h] [rbp-48h]
	__int64 v51; // [rsp+68h] [rbp-40h]
	__int64 v52; // [rsp+B8h] [rbp+10h]

	v1 = 0;
	v2 = a1;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(__int64**)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != v2)
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
	v8 = sub_1400F26A0(v7 + 384, 1);
	v9 = sub_140242D40(v8);
	v10 = v9;
	v52 = v9;
	if (!v9 || !*(_DWORD*)(v9 + 20))
		return 0i64;
	v11 = sub_14018B280(24i64, 0);
	v13 = 5;
	*(_QWORD*)v11 = v11;
	*((_QWORD*)v11 + 1) = v11;
	v14 = (*(_BYTE*)(v10 + 12) & 1) == 0;
	v15 = v11;
	v47 = v11;
	if (!v14)
		v13 = 46;
	sub_140644610(v12, v13, (__int64)v46, 0, 1, 0);
	v16 = *(int**)v15;
	v17 = 0i64;
	v49 = 0i64;
	v18 = 0i64;
	v50 = 0i64;
	v51 = 0i64;
	if (v16 != v15)
	{
		v19 = 0i64;
		do
		{
			v20 = *(_QWORD*)(*((_QWORD*)v16 + 2) + 40i64);
			if (v20)
			{
				v21 = (_DWORD*)sub_1401E98E0(*(_DWORD*)(*(_QWORD*)v20 + 8i64));
				if (v21)
				{
					v22 = *(unsigned int*)(v10 + 20);
					if (*v21 == (_DWORD)v22 || v21[3] == (_DWORD)v22)
					{
						v23 = *(unsigned int**)v20;
						v44 = v20;
						v24 = 0i64;
						v25 = *v23;
						v45 = 0i64;
						v26 = sub_1405BE1B0(v22, v25);
						if (v26)
						{
							v27 = 0;
							v28 = (unsigned int*)(v26 + 20);
							do
							{
								if (*v28)
								{
									v29 = sub_140245C00(*v28);
									if (v29)
									{
										v24 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v29 + 12), 0i64);
										if (v24)
											break;
									}
								}
								++v27;
								++v28;
							} while (v27 < 8);
							v15 = v47;
							v45 = v24;
						}
						if (v18 == (__int64*)v19)
						{
							sub_14074FFE0(&v48, v18, &v44);
							v18 = v50;
							v19 = v51;
						}
						else
						{
							if (v18)
							{
								*v18 = v20;
								v18[1] = (__int64)v24;
							}
							v18 += 2;
							v50 = v18;
						}
						v10 = v52;
					}
				}
			}
			v16 = *(int**)v16;
		} while (v16 != v15);
		v17 = v49;
		v2 = a1;
	}
	v30 = v2[4];
	v50 = v2;
	v48 = off_140B569F0;
	v31 = *(_QWORD*)(v30 + 112);
	LODWORD(v51) = 1;
	if (*(_QWORD*)(v30 + 120) >= v31)
		sub_14005E2C0((__int64)v2);
	v32 = v2[2];
	v33 = sub_14005C1B0((__int64)v2, 0, 0);
	*(_DWORD*)(v32 + 8) = 5;
	*(_QWORD*)v32 = v33;
	v2[2] += 16i64;
	v34 = sub_1400578C0((__int64)v2);
	LODWORD(v49) = v34;
	v36 = ((char*)v18 - (char*)v17) >> 4;
	if (v36)
	{
		sub_140750170(v17, v18, v35);
		v37 = 0i64;
		do
		{
			if ((unsigned int)sub_1404332A0(v2, v17[2 * v37]))
			{
				sub_1400FB470((__int64)&v48);
				v2 = v50;
				v50[2] -= 16i64;
			}
			v37 = ++v1;
		} while (v1 < v36);
		v34 = (int)v49;
	}
	v38 = sub_14005C3C0(*(_QWORD*)(v2[4] + 160), v34);
	v39 = v2[2];
	v40 = *v38;
	*(_QWORD*)v39 = *v38;
	*(_DWORD*)(v39 + 8) = *((_DWORD*)v38 + 2);
	v2[2] += 16i64;
	sub_1400579E0((__int64)v2, v40, v34);
	if (v17)
		sub_14018B900((__int64)v17, 0);
	v41 = *(int**)v15;
	while (v41 != v15)
	{
		v42 = (__int64)v41;
		v41 = *(int**)v41;
		sub_14018B900(v42, 0);
	}
	*(_QWORD*)v15 = v15;
	*((_QWORD*)v15 + 1) = v15;
	sub_14018B900((__int64)v15, 0);
	return 1i64;
}
// 14074E3F2: conditional instruction was optimized away because rbx.8!=0
// 14074E241: variable 'v12' is possibly undefined
// 14074E3EA: variable 'v35' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 14074E150: using guessed type char var_68[8];

