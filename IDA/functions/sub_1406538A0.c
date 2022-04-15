#include "../winhttp.h"

//----- (00000001406538A0) ----------------------------------------------------
__int64 __fastcall sub_1406538A0(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rsi
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	unsigned __int64 v8; // r12
	int v9; // edx
	int v10; // r13d
	__int64 v11; // rbx
	__int64 v12; // rax
	int v13; // eax
	__int64 v14; // r15
	unsigned __int64 v15; // rbx
	unsigned __int64 v16; // r14
	int v17; // esi
	unsigned int v18; // r12d
	int v19; // r10d
	__int64 v20; // r9
	_DWORD* v21; // rdx
	__int64 v22; // rcx
	__int64 v23; // rcx
	int v24; // eax
	__int64 v25; // rax
	__int64 v26; // r11
	__int64 v27; // r9
	_DWORD* v28; // rcx
	__int64 v29; // r8
	__int64 v30; // rdx
	__int64 v31; // rcx
	__int64 v32; // rdx
	_QWORD* v33; // rax
	__int64 v34; // rdx
	int v35; // r8d
	__int64 v37; // [rsp+20h] [rbp-59h]
	__int64 v38; // [rsp+28h] [rbp-51h] BYREF
	unsigned __int64 v39; // [rsp+30h] [rbp-49h]
	__int64 v40[2]; // [rsp+38h] [rbp-41h]
	__int64(__fastcall * *v41)(); // [rsp+48h] [rbp-31h] BYREF
	int v42; // [rsp+50h] [rbp-29h]
	__int64 v43; // [rsp+58h] [rbp-21h]
	int v44; // [rsp+60h] [rbp-19h]
	__int64(__fastcall * *v45)(); // [rsp+68h] [rbp-11h] BYREF
	int v46; // [rsp+70h] [rbp-9h]
	__int64 v47; // [rsp+78h] [rbp-1h]
	int v48; // [rsp+E8h] [rbp+6Fh]
	int v49; // [rsp+ECh] [rbp+73h]
	double v50; // [rsp+F0h] [rbp+77h]
	unsigned __int64 v51; // [rsp+F8h] [rbp+7Fh]

	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2), (v37 = v3) != 0))
	{
		v4 = *(_QWORD*)(a1 + 32);
		v41 = off_140B569F0;
		v5 = *(_QWORD*)(v4 + 112);
		v43 = a1;
		v44 = 1;
		if (*(_QWORD*)(v4 + 120) >= v5)
			sub_14005E2C0(a1);
		v6 = *(_QWORD*)(a1 + 16);
		v7 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v6 + 8) = 5;
		*(_QWORD*)v6 = v7;
		*(_QWORD*)(a1 + 16) += 16i64;
		v42 = sub_1400578C0(a1);
		v40[0] = (__int64)L"arHarmful";
		v48 = 2;
		v49 = 1;
		v8 = 0i64;
		v51 = 0i64;
		v40[1] = (__int64)L"arBeneficial";
		do
		{
			v9 = *(&v48 + v8);
			v39 = 0i64;
			v38 = 0i64;
			sub_1404692D0(v3, v9, &v38);
			v10 = 1;
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v11 = *(_QWORD*)(a1 + 16);
			v12 = sub_14005C1B0(a1, 0, 0);
			*(_DWORD*)(v11 + 8) = 5;
			*(_QWORD*)v11 = v12;
			*(_QWORD*)(a1 + 16) += 16i64;
			v13 = sub_1400578C0(a1);
			v14 = v38;
			v15 = 0i64;
			v16 = v39;
			v17 = v13;
			if (v39)
			{
				v18 = v13 - 1;
				do
				{
					v19 = *(_DWORD*)(sub_1405BC680((__int64)&v45, a1, *(_QWORD*)(v14 + 8 * v15)) + 8);
					v20 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
					if (v18 >= *(_DWORD*)(v20 + 56))
					{
						v50 = (double)v17;
						if ((double)v17 == 0.0)
							v21 = *(_DWORD**)(v20 + 32);
						else
							v21 = (_DWORD*)(*(_QWORD*)(v20 + 32)
								+ 40
								* ((unsigned int)(LODWORD(v50) + HIDWORD(v50)) % (((1i64 << *(_BYTE*)(v20 + 11)) - 1) | 1)));
						while (v21[6] != 3 || (double)v17 != *((double*)v21 + 2))
						{
							v21 = (_DWORD*)*((_QWORD*)v21 + 4);
							if (!v21)
							{
								v21 = dword_140A12138;
								break;
							}
						}
					}
					else
					{
						v21 = (_DWORD*)(*(_QWORD*)(v20 + 24) + 16i64 * (v17 - 1));
					}
					v22 = *(_QWORD*)(a1 + 16);
					*(_QWORD*)v22 = *(_QWORD*)v21;
					*(_DWORD*)(v22 + 8) = v21[2];
					*(_QWORD*)(a1 + 16) += 16i64;
					v23 = *(_QWORD*)(a1 + 16);
					*(_DWORD*)(v23 + 8) = 3;
					v24 = v10++;
					*(double*)v23 = (double)v24;
					v25 = *(_QWORD*)(a1 + 32);
					v26 = *(_QWORD*)(a1 + 16) + 16i64;
					*(_QWORD*)(a1 + 16) = v26;
					v27 = *(_QWORD*)(v25 + 160);
					if ((unsigned int)(v19 - 1) >= *(_DWORD*)(v27 + 56))
					{
						v50 = (double)v19;
						if ((double)v19 == 0.0)
							v28 = *(_DWORD**)(v27 + 32);
						else
							v28 = (_DWORD*)(*(_QWORD*)(v27 + 32)
								+ 40
								* ((unsigned int)(LODWORD(v50) + HIDWORD(v50)) % (((1i64 << *(_BYTE*)(v27 + 11)) - 1) | 1)));
						while (v28[6] != 3 || (double)v19 != *((double*)v28 + 2))
						{
							v28 = (_DWORD*)*((_QWORD*)v28 + 4);
							if (!v28)
							{
								v28 = dword_140A12138;
								break;
							}
						}
					}
					else
					{
						v28 = (_DWORD*)(*(_QWORD*)(v27 + 24) + 16i64 * (v19 - 1));
					}
					*(_QWORD*)v26 = *(_QWORD*)v28;
					*(_DWORD*)(v26 + 8) = v28[2];
					v29 = *(_QWORD*)(a1 + 16) + 16i64;
					*(_QWORD*)(a1 + 16) = v29;
					sub_14005EA50(a1, (__int64*)(v29 - 48), (int*)(v29 - 32), (unsigned int*)(v29 - 16));
					v31 = v47;
					*(_QWORD*)(a1 + 16) -= 48i64;
					v45 = off_140B56A08;
					if (v31)
						sub_1400579E0(v31, v30, v46);
					++v15;
				} while (v15 < v16);
				v8 = v51;
			}
			sub_1400FB2A0((__int64)&v41, v40[v8], v17);
			sub_1400579E0(a1, v32, v17);
			if (v14)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
			v3 = v37;
			v51 = ++v8;
		} while (v8 < 2);
		v33 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v42);
		v34 = *(_QWORD*)(a1 + 16);
		v35 = v42;
		*(_QWORD*)v34 = *v33;
		*(_DWORD*)(v34 + 8) = *((_DWORD*)v33 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_1400579E0(a1, v34, v35);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
}
// 140653BCE: variable 'v30' is possibly undefined
// 140653BFA: variable 'v32' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B2C6C8: using guessed type wchar_t aArharmful[10];
// 140B2C6E0: using guessed type wchar_t aArbeneficial[13];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C65898: using guessed type __int64 qword_140C65898;

