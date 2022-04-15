#include "../winhttp.h"

//----- (000000014041B190) ----------------------------------------------------
__int64 __fastcall sub_14041B190(__int64 a1)
{
	unsigned __int64 v1; // rbx
	unsigned __int64 v2; // r12
	int* v3; // rsi
	int* v4; // r14
	int* v5; // r15
	__int64* v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rdi
	__int64 v9; // r13
	unsigned int v10; // ebx
	__int64 v11; // rax
	int* v12; // rbx
	int* v13; // rbx
	int* v14; // rbx
	__int64 v15; // rcx
	__int64 v16; // rbx
	char* v17; // r13
	unsigned int v18; // edi
	__int64 v19; // rax
	int* v20; // rax
	int* v21; // rbx
	int* v22; // rax
	int* v23; // rbx
	int* v24; // rax
	int* v25; // rbx
	__int64 v26; // r13
	__int64 v27; // rcx
	__int64 v28; // rbx
	__int64 v29; // rax
	int v30; // r9d
	__int64 v31; // rdi
	unsigned int v32; // ebx
	__int64 v33; // rax
	__int64 v34; // rcx
	unsigned __int64 v35; // rax
	__int64 v36; // rbx
	__int64 v37; // rax
	int v38; // eax
	unsigned int v39; // r9d
	unsigned int v40; // r8d
	int v41; // eax
	__int64 v42; // rdx
	int v43; // ebx
	__int64 v44; // r10
	_DWORD* v45; // rcx
	__int64 v46; // rdx
	unsigned __int64 v48; // [rsp+38h] [rbp-D0h]
	__int64 v49; // [rsp+40h] [rbp-C8h]
	__int64 v50; // [rsp+48h] [rbp-C0h]
	unsigned int v51; // [rsp+50h] [rbp-B8h]
	double v52; // [rsp+50h] [rbp-B8h]
	__int64(__fastcall * *v53)(); // [rsp+58h] [rbp-B0h] BYREF
	unsigned __int64 v54; // [rsp+60h] [rbp-A8h]
	__int64 v55; // [rsp+68h] [rbp-A0h]
	__int64 v56; // [rsp+70h] [rbp-98h]
	unsigned __int64 v57; // [rsp+78h] [rbp-90h]
	__int64 v58; // [rsp+80h] [rbp-88h]
	__int64 v59; // [rsp+88h] [rbp-80h]
	__int64(__fastcall * *v60)(); // [rsp+90h] [rbp-78h] BYREF
	int v61; // [rsp+98h] [rbp-70h]
	__int64 v62; // [rsp+A0h] [rbp-68h]
	int v63; // [rsp+A8h] [rbp-60h]
	__int64 v64[7]; // [rsp+B8h] [rbp-50h] BYREF
	int v65; // [rsp+F0h] [rbp-18h]
	char v66; // [rsp+148h] [rbp+40h] BYREF

	v1 = 0i64;
	v59 = a1;
	v51 = 0;
	v2 = 0i64;
	v48 = 0i64;
	v3 = 0i64;
	v50 = 0i64;
	v4 = 0i64;
	v49 = 0i64;
	v5 = 0i64;
	v6 = (__int64*)sub_140417660(a1, 1);
	if (v6)
	{
		v7 = *v6;
		if (*v6)
		{
			if (*(_DWORD*)(v7 + 1180) && v7 != -344 && *(_DWORD*)(v7 + 1180))
			{
				v8 = v7 + 488;
				v9 = 8i64;
				while (1)
				{
					v10 = *(_DWORD*)v8;
					if (qword_140C63840)
						break;
					if (!dword_140C63F84 && (int)sub_14020D000() >= 0)
					{
						v11 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64608 + 24i64))(
							qword_140C64608,
							v10);
					LABEL_12:
						if (v11)
						{
							v12 = sub_14018DB00((__int64)v3, ++v2, 4i64);
							v12[v48] = *(_DWORD*)v8;
							if (v3 != v12)
							{
								sub_1407DB590(v12, v3, 4 * v48);
								if (v3)
									(*(void(__fastcall**)(int*))(*((_QWORD*)v3 - 2) + 8i64))(v3 - 4);
								v3 = v12;
							}
							v48 = v2;
							v13 = sub_14018DB00((__int64)v4, v50 + 1, 4i64);
							v13[v50] = *(_DWORD*)(v8 + 4);
							if (v4 != v13)
							{
								sub_1407DB590(v13, v4, 4 * v50);
								if (v4)
									(*(void(__fastcall**)(int*))(*((_QWORD*)v4 - 2) + 8i64))(v4 - 4);
								v4 = v13;
							}
							++v50;
							v14 = sub_14018DB00((__int64)v5, v49 + 1, 8i64);
							*(_QWORD*)&v14[2 * v49] = *(_QWORD*)(v8 + 64);
							if (v5 != v14)
							{
								sub_1407DB590(v14, v5, 8 * v49);
								if (v5)
									(*(void(__fastcall**)(int*))(*((_QWORD*)v5 - 2) + 8i64))(v5 - 4);
								v5 = v14;
							}
							++v49;
						}
					}
					v8 += 8i64;
					if (!--v9)
						goto LABEL_53;
				}
				v11 = qword_140C63840(off_140A6AEC0, v10, qword_140C63858);
				goto LABEL_12;
			}
		}
	}
	v54 = 0i64;
	v53 = 0i64;
	sub_1403D6710(qword_140C65898 + 160, (__int64*)&v53);
	v57 = 0i64;
	if (!v54)
		goto LABEL_51;
	do
	{
		sub_1407E4830((int*)v64, 0i64, 0x190ui64);
		sub_1407E4830((int*)v64, 0i64, 0x90ui64);
		v15 = (__int64)v53[v1];
		v64[0] = 0xC5000000C5i64;
		v64[1] = 0xC5000000C5i64;
		v64[2] = 0xC5000000C5i64;
		v64[3] = 0xC5000000C5i64;
		v64[4] = 0xC5000000C5i64;
		v64[5] = 0xC5000000C5i64;
		v64[6] = 0xC5000000C5i64;
		v65 = 197;
		sub_14041FBA0(v15, (int*)v64);
		v16 = 8i64;
		v17 = &v66;
		v58 = 8i64;
		do
		{
			v18 = *(_DWORD*)v17;
			if (qword_140C63840)
			{
				v19 = qword_140C63840(off_140A6AEC0, v18, qword_140C63858);
			}
			else
			{
				if (dword_140C63F84 || (int)sub_14020D000() < 0)
					goto LABEL_49;
				v19 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64608 + 24i64))(qword_140C64608, v18);
			}
			if (v19)
			{
				v20 = sub_14018DB00((__int64)v3, ++v2, 4i64);
				v21 = v20;
				v20[v48] = v18;
				if (v3 != v20)
				{
					sub_1407DB590(v20, v3, 4 * v48);
					if (v3)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v3 - 2) + 8i64))(v3 - 4);
					v3 = v21;
				}
				v48 = v2;
				v22 = sub_14018DB00((__int64)v4, v50 + 1, 4i64);
				v23 = v22;
				v22[v50] = *((_DWORD*)v17 + 1);
				if (v4 != v22)
				{
					sub_1407DB590(v22, v4, 4 * v50);
					if (v4)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v4 - 2) + 8i64))(v4 - 4);
					v4 = v23;
				}
				++v50;
				v24 = sub_14018DB00((__int64)v5, v49 + 1, 8i64);
				v25 = v24;
				*(_QWORD*)&v24[2 * v49] = *((_QWORD*)v17 + 8);
				if (v5 != v24)
				{
					sub_1407DB590(v24, v5, 8 * v49);
					if (v5)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v5 - 2) + 8i64))(v5 - 4);
					v5 = v25;
				}
				v16 = v58;
				++v49;
			}
		LABEL_49:
			v17 += 8;
			v58 = --v16;
		} while (v16);
		v1 = v57 + 1;
		v57 = v1;
	} while (v1 < v54);
LABEL_51:
	if (v53)
		(*((void(__fastcall**)(__int64(__fastcall**)())) * (v53 - 2) + 1))(v53 - 2);
LABEL_53:
	v26 = v59;
	v63 = 1;
	v27 = *(_QWORD*)(v59 + 32);
	v60 = off_140B569F0;
	v62 = v59;
	if (*(_QWORD*)(v27 + 120) >= *(_QWORD*)(v27 + 112))
		sub_14005E2C0(v59);
	v28 = *(_QWORD*)(v26 + 16);
	v29 = sub_14005C1B0(v26, 0, 0);
	*(_DWORD*)(v28 + 8) = 5;
	*(_QWORD*)v28 = v29;
	*(_QWORD*)(v26 + 16) += 16i64;
	v30 = sub_1400578C0(v26);
	v61 = v30;
	if (v2)
	{
		v31 = 0i64;
		while (1)
		{
			v32 = v3[v31];
			if (qword_140C63840)
				break;
			if (!dword_140C63F84 && (int)sub_14020D000() >= 0)
			{
				v33 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64608 + 24i64))(qword_140C64608, v32);
			LABEL_62:
				if (v33)
				{
					v34 = *(_QWORD*)(v26 + 32);
					v55 = v26;
					v53 = off_140B569F0;
					v35 = *(_QWORD*)(v34 + 112);
					LODWORD(v56) = 1;
					if (*(_QWORD*)(v34 + 120) >= v35)
						sub_14005E2C0(v26);
					v36 = *(_QWORD*)(v26 + 16);
					v37 = sub_14005C1B0(v26, 0, 0);
					*(_DWORD*)(v36 + 8) = 5;
					*(_QWORD*)v36 = v37;
					*(_QWORD*)(v26 + 16) += 16i64;
					v38 = sub_1400578C0(v26);
					v39 = v4[v31];
					v40 = v3[v31];
					LODWORD(v54) = v38;
					v41 = sub_140677210(v26, (__int64)&v53, v40, v39, 1, (__int64)&v5[2 * v31]);
					v43 = v54;
					if (v41)
						sub_1400FB1D0((__int64)&v60);
					if (v55)
						sub_1400579E0(v55, v42, v43);
				}
			}
			v31 = ++v51;
			if (v51 >= v2)
			{
				v26 = v62;
				v30 = v61;
				goto LABEL_71;
			}
		}
		v33 = qword_140C63840(off_140A6AEC0, v32, qword_140C63858);
		goto LABEL_62;
	}
LABEL_71:
	v44 = *(_QWORD*)(*(_QWORD*)(v26 + 32) + 160i64);
	if ((unsigned int)(v30 - 1) >= *(_DWORD*)(v44 + 56))
	{
		if ((double)v30 == 0.0)
		{
			v45 = *(_DWORD**)(v44 + 32);
		}
		else
		{
			v52 = (double)v30;
			v45 = (_DWORD*)(*(_QWORD*)(v44 + 32)
				+ 40 * ((unsigned int)(LODWORD(v52) + HIDWORD(v52)) % (((1i64 << *(_BYTE*)(v44 + 11)) - 1) | 1)));
		}
		while (v45[6] != 3 || (double)v30 != *((double*)v45 + 2))
		{
			v45 = (_DWORD*)*((_QWORD*)v45 + 4);
			if (!v45)
			{
				v45 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v45 = (_DWORD*)(*(_QWORD*)(v44 + 24) + 16i64 * (v30 - 1));
	}
	v46 = *(_QWORD*)(v26 + 16);
	*(_QWORD*)v46 = *(_QWORD*)v45;
	*(_DWORD*)(v46 + 8) = v45[2];
	*(_QWORD*)(v26 + 16) += 16i64;
	sub_1400579E0(v26, v46, v30);
	if (v5)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v5 - 2) + 8i64))(v5 - 4);
	if (v4)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v4 - 2) + 8i64))(v4 - 4);
	if (v3)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v3 - 2) + 8i64))(v3 - 4);
	return 1i64;
}
// 14041B240: conditional instruction was optimized away because rcx.8!=FFFFFFFFFFFFFEA8
// 14041B776: variable 'v42' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6AEC0: using guessed type wchar_t *off_140A6AEC0[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F84: using guessed type int dword_140C63F84;
// 140C64608: using guessed type __int64 qword_140C64608;
// 140C65898: using guessed type __int64 qword_140C65898;

