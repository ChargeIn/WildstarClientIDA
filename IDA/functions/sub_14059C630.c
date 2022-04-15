#include "../winhttp.h"

//----- (000000014059C630) ----------------------------------------------------
__int64 __fastcall sub_14059C630(_QWORD* a1)
{
	_QWORD* v1; // rdi
	unsigned int v2; // eax
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // r10
	__int64 v6; // rbx
	int* v7; // rax
	int* v8; // rbp
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	int v13; // eax
	__int64 v14; // rbx
	unsigned int v15; // esi
	int v16; // r14d
	unsigned __int64 v17; // r15
	__int64 v18; // r12
	unsigned __int64 v19; // rbx
	__int64 v20; // r14
	int* v21; // rax
	int v22; // eax
	unsigned int v23; // r15d
	unsigned int* v24; // rax
	unsigned int* v25; // rbx
	unsigned int v26; // eax
	unsigned int v27; // r14d
	int* v28; // rax
	int v29; // eax
	_QWORD* v30; // rax
	__int64 v31; // r8
	__int64 v32; // rdx
	__int64 v34; // [rsp+20h] [rbp-58h] BYREF
	unsigned __int64 v35; // [rsp+28h] [rbp-50h]
	__int64(__fastcall * *v36)(); // [rsp+30h] [rbp-48h] BYREF
	int v37; // [rsp+38h] [rbp-40h]
	_QWORD* v38; // [rsp+40h] [rbp-38h]
	int v39; // [rsp+48h] [rbp-30h]
	unsigned __int64 v40; // [rsp+90h] [rbp+18h] BYREF

	v1 = a1;
	v2 = sub_1405925D0(a1, 1u);
	if (!v2)
		v2 = *(_DWORD*)(qword_140C65898 + 6864);
	v3 = sub_140245C00(v2);
	if (v3
		&& (v6 = sub_1405BE150(v4, *(_DWORD*)(v3 + 8)),
			v7 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v5 + 12), 0i64),
			v8 = v7,
			v6)
		&& v7
		&& (*(_BYTE*)(v6 + 16) & 4) != 0)
	{
		v9 = v1[4];
		v36 = off_140B569F0;
		v10 = *(_QWORD*)(v9 + 112);
		v38 = v1;
		v39 = 1;
		if (*(_QWORD*)(v9 + 120) >= v10)
			sub_14005E2C0((__int64)v1);
		v11 = v1[2];
		v12 = sub_14005C1B0((__int64)v1, 0, 0);
		*(_DWORD*)(v11 + 8) = 5;
		*(_QWORD*)v11 = v12;
		v1[2] += 16i64;
		v13 = sub_1400578C0((__int64)v1);
		v14 = qword_140C65898;
		v15 = 0;
		v16 = v13;
		v37 = v13;
		v35 = 0i64;
		v34 = 0i64;
		sub_1403D6710(qword_140C65898 + 184, &v34);
		sub_1403D6710(v14 + 208, &v34);
		sub_1403D6710(v14 + 232, &v34);
		v17 = v35;
		v18 = v34;
		v19 = 0i64;
		if (v35)
		{
			do
			{
				v20 = *(_QWORD*)(v18 + 8 * v19);
				v21 = sub_1400B5DF0(qword_140C658F0, **(_DWORD**)(v20 + 64), 0i64);
				if (v21)
				{
					if (v21[82] == 143 && v21[88] <= (unsigned int)v8[89])
					{
						v22 = v21[96];
						if (!v22 || (v22 & v8[96]) != 0)
						{
							if ((unsigned int)sub_140415D60(v1, (void(__fastcall***)(_QWORD))v20))
							{
								sub_1400FB470((__int64)&v36);
								v1 = v38;
								v38[2] -= 16i64;
							}
						}
					}
				}
				++v19;
			} while (v19 < v17);
			v16 = v37;
		}
		v23 = sub_140244EF0();
		if (v23)
		{
			while (!qword_140C63848)
			{
				if (!dword_140C63F58 && (int)sub_140244CE0() >= 0)
				{
					v24 = (unsigned int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63978 + 32i64))(
						qword_140C63978,
						v15);
				LABEL_25:
					v25 = v24;
					if (v24)
					{
						v26 = *v24;
						if (v26 < 0x200)
						{
							v27 = *(unsigned __int16*)(qword_140C65898 + 2i64 * v26 + 328);
							if (*(_WORD*)(qword_140C65898 + 2i64 * v26 + 328))
							{
								v28 = sub_1400B5DF0(qword_140C658F0, v25[1], 0i64);
								if (v28)
								{
									if (v28[82] == 143 && v28[88] <= (unsigned int)v8[89])
									{
										v29 = v28[96];
										if (!v29 || (v29 & v8[96]) != 0)
										{
											if (sub_1400B5DF0(qword_140C658F0, v25[1], 0i64))
											{
												v40 = __PAIR64__(v27, v25[1]);
												if ((unsigned int)sub_140415E70(v1, &v40))
												{
													sub_1400FB470((__int64)&v36);
													v1 = v38;
													v38[2] -= 16i64;
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (++v15 >= v23)
				{
					v16 = v37;
					goto LABEL_38;
				}
			}
			v24 = (unsigned int*)qword_140C63848(off_140A6DCB0, v15, qword_140C63858);
			goto LABEL_25;
		}
	LABEL_38:
		v30 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v16);
		v31 = v1[2];
		*(_QWORD*)v31 = *v30;
		v32 = *((unsigned int*)v30 + 2);
		*(_DWORD*)(v31 + 8) = v32;
		v1[2] += 16i64;
		if (v18)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v18 - 16) + 8i64))(v18 - 16);
		sub_1400579E0((__int64)v1, v32, v16);
	}
	else
	{
		*(_DWORD*)(v1[2] + 8i64) = 0;
		v1[2] += 16i64;
	}
	return 1i64;
}
// 14059C67F: variable 'v4' is possibly undefined
// 14059C684: variable 'v5' is possibly undefined
// 14059C996: variable 'v32' is possibly undefined
// 140A6DCB0: using guessed type wchar_t *off_140A6DCB0[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63978: using guessed type __int64 qword_140C63978;
// 140C63F58: using guessed type int dword_140C63F58;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

