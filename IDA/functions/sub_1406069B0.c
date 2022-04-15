#include "../winhttp.h"

//----- (00000001406069B0) ----------------------------------------------------
__int64 __fastcall sub_1406069B0(__int64 a1, _QWORD* a2)
{
	__int64 v2; // rbx
	__int64 v5; // rbp
	__int64 v6; // rcx
	unsigned int v7; // r12d
	unsigned __int64 v8; // rax
	int v9; // r14d
	__int64 v10; // rbx
	__int64 v11; // rax
	int v12; // eax
	__int64 v13; // rcx
	int v14; // r10d
	unsigned __int64 v15; // rdi
	__int64 v16; // r11
	_QWORD* v17; // rax
	unsigned __int64 v18; // rcx
	__int64 v19; // rcx
	unsigned int v20; // edx
	int* v21; // r14
	unsigned __int64 v22; // r9
	__int64 v23; // r10
	__int64 v24; // r8
	__int64 v25; // rax
	unsigned int v26; // ecx
	unsigned int v27; // eax
	__int64* v28; // rax
	__int64 v29; // rax
	__int64 v30; // rcx
	unsigned __int64 v31; // rax
	__int64 v32; // rbx
	__int64 v33; // rax
	int v34; // eax
	__int64 v35; // rdx
	_QWORD* v36; // rax
	__int64 v37; // r8
	__int64 v38; // rdx
	int v39; // r10d
	unsigned __int64 v41; // [rsp+20h] [rbp-88h]
	__int64(__fastcall * *v42)(); // [rsp+28h] [rbp-80h] BYREF
	int v43; // [rsp+30h] [rbp-78h]
	_QWORD* v44; // [rsp+38h] [rbp-70h]
	int v45; // [rsp+40h] [rbp-68h]
	__int64(__fastcall * *v46)(); // [rsp+48h] [rbp-60h] BYREF
	int v47; // [rsp+50h] [rbp-58h]
	_QWORD* v48; // [rsp+58h] [rbp-50h]
	int v49; // [rsp+60h] [rbp-48h]
	unsigned __int64 v50; // [rsp+B0h] [rbp+8h] BYREF
	__int64 v51; // [rsp+C0h] [rbp+18h] BYREF
	__int64 v52; // [rsp+C8h] [rbp+20h] BYREF

	v2 = *(_QWORD*)(a1 + 64);
	if (!v2 || !*(_QWORD*)(v2 + 96))
		return 0i64;
	if (!sub_14079EE60(v2, a1 + 80, &v50))
		return 0i64;
	v5 = *(_QWORD*)(*(_QWORD*)(v2 + 88) + 8 * v50);
	if (!v5)
		return 0i64;
	v6 = a2[4];
	v7 = 0;
	v42 = off_140B569F0;
	v8 = *(_QWORD*)(v6 + 112);
	v44 = a2;
	v9 = 0;
	LODWORD(v50) = 0;
	v45 = 1;
	if (*(_QWORD*)(v6 + 120) >= v8)
		sub_14005E2C0((__int64)a2);
	v10 = a2[2];
	v11 = sub_14005C1B0((__int64)a2, 0, 0);
	*(_DWORD*)(v10 + 8) = 5;
	*(_QWORD*)v10 = v11;
	a2[2] += 16i64;
	v12 = sub_1400578C0((__int64)a2);
	v13 = *(_QWORD*)(a1 + 64);
	v14 = v12;
	v43 = v12;
	v15 = 0i64;
	v41 = *(_QWORD*)(v13 + 96);
	if (v41)
	{
		v16 = qword_140C65898;
		while (1)
		{
			v17 = *(_QWORD**)(a1 + 64);
			v18 = v15;
			if (v17 && v15 < v17[12])
			{
				if (v15)
				{
					if (v15 <= v17[13])
						v18 = v15 - 1;
					v19 = *(_QWORD*)(v17[11] + 8 * v18);
				}
				else
				{
					v19 = *(_QWORD*)(v17[11] + 8i64 * v17[13]);
				}
			}
			else
			{
				v19 = 0i64;
			}
			v20 = *(_DWORD*)(v19 + 16);
			v21 = (int*)(v19 + 16);
			if ((v20 != *(_DWORD*)(a1 + 80) || *(_QWORD*)(v19 + 24) != *(_QWORD*)(a1 + 88))
				&& (v20 != *(_DWORD*)(v5 + 272) || *(_QWORD*)(v19 + 24) != *(_QWORD*)(v5 + 280))
				&& *(_DWORD*)(v19 + 120) <= *(_DWORD*)(v5 + 120)
				&& (!*(_DWORD*)(v19 + 272) || !*(_QWORD*)(v19 + 280)))
			{
				if (v20)
				{
					v22 = *(_QWORD*)(v19 + 24);
					if (v22)
					{
						v23 = *(_QWORD*)(v16 + 28512);
						v24 = v23;
						v25 = *(_QWORD*)(v23 + 8);
						while (v25)
						{
							v26 = *(_DWORD*)(v25 + 32);
							if (v26 < v20 || v26 <= v20 && *(_QWORD*)(v25 + 40) < v22)
							{
								v25 = *(_QWORD*)(v25 + 24);
							}
							else
							{
								v24 = v25;
								v25 = *(_QWORD*)(v25 + 16);
							}
						}
						if (v24 == v23 || (v27 = *(_DWORD*)(v24 + 32), v20 < v27) || v20 <= v27 && v22 < *(_QWORD*)(v24 + 40))
						{
							v52 = *(_QWORD*)(v16 + 28512);
							v28 = &v52;
						}
						else
						{
							v51 = v24;
							v28 = &v51;
						}
						v29 = *v28;
						if (v29 != v23)
						{
							if (sub_1403D90D0(v16, *(_DWORD*)(v29 + 48)))
							{
								v30 = a2[4];
								v48 = a2;
								v46 = off_140B569F0;
								v31 = *(_QWORD*)(v30 + 112);
								v49 = 1;
								if (*(_QWORD*)(v30 + 120) >= v31)
									sub_14005E2C0((__int64)a2);
								v32 = a2[2];
								v33 = sub_14005C1B0((__int64)a2, 0, 0);
								*(_DWORD*)(v32 + 8) = 5;
								*(_QWORD*)v32 = v33;
								a2[2] += 16i64;
								LODWORD(v32) = sub_1400578C0((__int64)a2);
								v47 = v32;
								v34 = sub_1403D9500(qword_140C65898, v21);
								sub_140649870(a2, v34);
								sub_1400FB540((__int64)&v46);
								a2[2] -= 16i64;
								sub_1406054D0(a1, (__int64)a2, v15);
								sub_1400FB540((__int64)&v46);
								a2[2] -= 16i64;
								sub_1400FB1D0((__int64)&v42);
								v9 = v50 + 1;
								LODWORD(v50) = v50 + 1;
								sub_1400579E0((__int64)a2, v35, v32);
								v16 = qword_140C65898;
								goto LABEL_46;
							}
							v16 = qword_140C65898;
						}
					}
				}
			}
			v9 = v50;
		LABEL_46:
			if (++v15 >= v41)
			{
				a2 = v44;
				v14 = v43;
				break;
			}
		}
	}
	v36 = sub_14005C3C0(*(_QWORD*)(a2[4] + 160i64), v14);
	v37 = a2[2];
	*(_QWORD*)v37 = *v36;
	v38 = *((unsigned int*)v36 + 2);
	*(_DWORD*)(v37 + 8) = v38;
	a2[2] += 16i64;
	LOBYTE(v7) = v9 != 0;
	sub_1400579E0((__int64)a2, v38, v39);
	return v7;
}
// 140606CD7: variable 'v35' is possibly undefined
// 140606D42: variable 'v39' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

