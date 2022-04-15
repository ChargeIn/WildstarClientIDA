//----- (000000014035FF70) ----------------------------------------------------
__int64 __fastcall sub_14035FF70(__int64 a1)
{
	__int64 v2; // r15
	__int64 v3; // r14
	__int64 result; // rax
	int v5; // eax
	int v6; // ebx
	__int64 v7; // rcx
	__int64 v8; // rcx
	int v9; // ecx
	int v10; // eax
	int v11; // r8d
	int v12; // edx
	int v13; // eax
	int v14; // esi
	__int64 v15; // rbx
	__int64 v16; // rax
	__int64 i; // rbx
	int v18; // eax
	__int64 v19; // rcx
	int v20; // edx
	int v21; // edx
	__int64 v22; // rdx
	int v23; // eax
	int v24; // ecx
	_QWORD* j; // rbx
	__int64 v26; // rdx
	__int64 v27; // rdx
	__int64 v28; // rdx
	int v29; // ecx
	_QWORD* k; // rbx
	__int64 v31; // rdx
	__int64 v32; // rdx
	__int64 v33; // rax
	int v34; // eax
	__int64* m; // rbx
	__int64 v36; // rax
	int v37; // eax
	unsigned int v38; // r8d
	float v39; // xmm1_4
	int v40; // r9d
	int v41; // eax
	__int64 v42; // rbx
	float v43; // xmm1_4
	int v44; // ecx
	__int64 v45; // r8
	float v46; // xmm2_4
	int v47; // eax
	__int64 v48; // r8
	float v49; // xmm2_4
	int v50; // eax
	const void*** v51; // rdx
	__int128 v52; // [rsp+40h] [rbp-C0h] BYREF
	__int128 v53; // [rsp+50h] [rbp-B0h]
	__int128 v54; // [rsp+60h] [rbp-A0h]
	__int128 v55; // [rsp+70h] [rbp-90h]
	char v56[24]; // [rsp+80h] [rbp-80h] BYREF
	float v57; // [rsp+98h] [rbp-68h]
	__int64 v58; // [rsp+E0h] [rbp-20h]
	_QWORD v59[10]; // [rsp+F0h] [rbp-10h] BYREF
	__int64 v60; // [rsp+140h] [rbp+40h]
	__int64 v61; // [rsp+150h] [rbp+50h]
	__int64 v62; // [rsp+158h] [rbp+58h]
	__int64 v63; // [rsp+160h] [rbp+60h]

	v2 = a1 + 1280;
	v3 = a1 + 960;
	result = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65688
		+ 40i64))(
			qword_140C65688,
			a1 + 960,
			a1 + 1280,
			a1 + 1600,
			*(_DWORD*)(a1 + 792),
			*(_DWORD*)(a1 + 796),
			a1 + 4336);
	if ((int)result >= 0)
	{
		sub_1407C1FE0(v59);
		if ((*(_DWORD*)(a1 + 128) & 0x200) != 0)
		{
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 6200) + 72i64))(
				*(_QWORD*)(a1 + 6200),
				*(_QWORD*)(a1 + 6184));
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6200) + 88i64))(*(_QWORD*)(a1 + 6200));
		}
		if ((*(_DWORD*)(a1 + 128) & 0x100) != 0)
		{
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 6208) + 72i64))(
				*(_QWORD*)(a1 + 6208),
				*(_QWORD*)(a1 + 6184));
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6208) + 88i64))(*(_QWORD*)(a1 + 6208));
		}
		v5 = dword_140C44400;
		if (*(_DWORD*)qword_140C63750 < dword_140C44400)
			v5 = *(_DWORD*)qword_140C63750;
		if (byte_140C44410[v5])
		{
			if ((*(_DWORD*)(a1 + 128) & 0x8000000) != 0)
			{
				v6 = sub_14035DBE0(a1);
				if (v6 < 0)
					goto LABEL_188;
			}
		}
		(*(void(__fastcall**)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD**)(a1 + 288) + 80i64))(
			*(_QWORD*)(a1 + 288),
			v2,
			v3,
			0i64);
		if ((*(_BYTE*)(a1 + 128) & 0x10) != 0)
		{
			v6 = sub_14035EF20((_QWORD*)a1);
			if (v6 < 0)
				goto LABEL_188;
		}
		v6 = sub_140356560(a1, 1);
		if (v6 < 0)
			goto LABEL_188;
		(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 288) + 72i64))(
			*(_QWORD*)(a1 + 288),
			v3,
			a1 + 1088);
		(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 0i64);
		v7 = *(_QWORD*)(a1 + 6176);
		LODWORD(v52) = -1;
		(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v7 + 32i64))(v7, &v52);
		if ((*(_BYTE*)(a1 + 128) & 4) != 0)
		{
			v6 = sub_1403613F0(a1);
			if (v6 < 0)
				goto LABEL_188;
			if ((*(_BYTE*)(a1 + 128) & 4) != 0)
			{
				if ((*(_DWORD*)(a1 + 132) & 0x18) == 8)
				{
					v6 = sub_140361CE0(a1);
					if (v6 < 0)
						goto LABEL_188;
				}
				if ((*(_BYTE*)(a1 + 128) & 4) != 0 && (*(_DWORD*)(a1 + 132) & 0x90) == 0x80)
				{
					v6 = sub_140365F00(a1);
					if (v6 < 0)
						goto LABEL_188;
				}
			}
		}
		v8 = *(_QWORD*)(a1 + 6224);
		LODWORD(v52) = -1;
		(*(void(__fastcall**)(__int64, __int128*))(*(_QWORD*)v8 + 32i64))(v8, &v52);
		v9 = *(_DWORD*)(a1 + 128);
		if ((v9 & 0x1000) != 0)
		{
			v10 = *(_DWORD*)(a1 + 132);
			v11 = 1;
			if ((v10 & 0x40) != 0)
				v11 = 65537;
			if ((v10 & 0x800) != 0)
			{
				v11 |= 0x20000u;
			}
			else if ((v10 & 0x400) != 0 || (v9 & 0x4000000) != 0)
			{
				v11 |= 0x40000u;
			}
			if (qword_140C657F0)
			{
				v6 = sub_1402C89C0(qword_140C657F0, (__int64)v59, v11);
				if (v6 < 0)
					goto LABEL_188;
			}
		}
		if ((*(_DWORD*)(a1 + 128) & 0x800) != 0)
		{
			if ((unsigned int)sub_1400F4750((_QWORD*)(a1 + 680)) != -1)
				(*(void(__fastcall**)(_QWORD))(a1 + 688))(*(_QWORD*)(a1 + 680));
			v12 = 0;
			if ((*(_DWORD*)(a1 + 132) & 0x4000) != 0)
				v12 = 2;
			v6 = (*(__int64(__fastcall**)(_QWORD, __int64, __int64, __int64, int))(**(_QWORD**)(a1 + 40) + 80i64))(
				*(_QWORD*)(a1 + 40),
				v3,
				a1 + 1088,
				a1 + 1600,
				v12);
			if (v6 < 0)
				goto LABEL_188;
			if ((unsigned int)sub_1400F4750((_QWORD*)(a1 + 696)) != -1)
				(*(void(__fastcall**)(_QWORD))(a1 + 704))(*(_QWORD*)(a1 + 696));
			v13 = *(_DWORD*)(a1 + 132);
			v14 = 1;
			if ((v13 & 0x40) != 0)
				v14 = 17;
			if ((v13 & 0x800) != 0)
			{
				v14 |= 0x80u;
			}
			else if ((v13 & 0x400) != 0 || (*(_DWORD*)(a1 + 128) & 0x4000000) != 0)
			{
				v14 |= 0x100u;
			}
			if ((v13 & 0x400000) != 0)
				v14 |= 0x1000u;
			v15 = **(_QWORD**)(a1 + 40);
			v16 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 288) + 240i64))(*(_QWORD*)(a1 + 288));
			v6 = (*(__int64(__fastcall**)(_QWORD, _QWORD*, __int64, __int64, int, int, __int64, _QWORD))(v15 + 120))(
				*(_QWORD*)(a1 + 40),
				v59,
				v2,
				a1 + 3504,
				v14,
				dword_140B65808[*(int*)(a1 + 144)],
				v16,
				0i64);
			if (v6 < 0)
				goto LABEL_188;
		}
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6216) + 88i64))(*(_QWORD*)(a1 + 6216));
		if (v59[8])
		{
			v6 = sub_1407C2170(v59, 0, 0xFFFFFFFF);
			if (v6 < 0)
				goto LABEL_188;
		}
		if ((unsigned int)sub_1400F4750((_QWORD*)(a1 + 712)) != -1)
			(*(void(__fastcall**)(_QWORD))(a1 + 720))(*(_QWORD*)(a1 + 712));
		if ((*(_BYTE*)(a1 + 128) & 0x40) != 0)
		{
			for (i = *(_QWORD*)(a1 + 5464); i; i = *(_QWORD*)(i + 328))
				sub_140391300(i);
		}
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 1i64);
		if ((*(_DWORD*)(a1 + 128) & 0x2000000) != 0)
		{
			v6 = sub_140364E90((_QWORD*)a1);
			if (v6 < 0)
				goto LABEL_188;
		}
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 2i64);
		if ((*(_BYTE*)(a1 + 128) & 0x10) != 0)
		{
			v6 = sub_140363090(a1);
			if (v6 < 0)
				goto LABEL_188;
		}
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 3i64);
		v18 = *(_DWORD*)(a1 + 128);
		v19 = *(_QWORD*)(a1 + 288);
		if ((v18 & 0x2000) != 0)
		{
			v20 = 28;
			if ((v18 & 0x4000000) != 0)
				v20 = 92;
			(*(void(__fastcall**)(__int64, __int64, __int64, __int64, int))(*(_QWORD*)v19 + 64i64))(
				v19,
				v2,
				v3,
				a1 + 1088,
				v20);
		}
		else
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 88i64))(v19);
		}
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 4i64);
		if ((*(_DWORD*)(a1 + 128) & 0x2008) == 8200)
		{
			v6 = sub_140362750(a1);
			if (v6 < 0)
				goto LABEL_188;
		}
		v21 = *(_DWORD*)(a1 + 128);
		if ((v21 & 0x2000) != 0)
			(*(void(__fastcall**)(_QWORD, __int64, __int64, __int64, int))(**(_QWORD**)(a1 + 288) + 128i64))(
				*(_QWORD*)(a1 + 288),
				v2,
				v3,
				a1 + 1088,
				v21 & 0x4000000);
		if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 5i64))
		{
			if ((*(_BYTE*)(a1 + 128) & 4) != 0)
			{
				v23 = *(_DWORD*)(a1 + 132);
				if ((v23 & 0x10) == 0 && (v23 & 0x2200004) != 0)
				{
					v6 = sub_14035F840(a1);
					if (v6 < 0)
						goto LABEL_188;
				}
			}
			if ((*(_DWORD*)(a1 + 132) & 0x200) != 0)
			{
				v6 = sub_14035F6A0(a1);
				if (v6 < 0)
					goto LABEL_188;
			}
			v24 = *(_DWORD*)(a1 + 128);
			if ((v24 & 0x40880) == 2176)
			{
				v6 = sub_140364970(a1, v22, 13);
				if (v6 < 0)
					goto LABEL_188;
			}
			if ((*(_DWORD*)(a1 + 128) & 0x200) != 0)
			{
				if (v60)
				{
					v6 = sub_1407C2170(v59, 2, 0xFFFFFFFF);
					if (v6 < 0)
						goto LABEL_188;
				}
				v6 = sub_140366690(a1);
				if (v6 < 0)
					goto LABEL_188;
			}
		}
		if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 6i64))
		{
			if ((*(_DWORD*)(a1 + 128) & 0x100) != 0)
			{
				v6 = sub_140366270(a1);
				if (v6 < 0)
					goto LABEL_188;
			}
		}
		if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 7i64))
		{
			v6 = sub_14035EFF0(a1);
			if (v6 < 0)
				goto LABEL_188;
		}
		if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 8i64))
		{
			v6 = sub_140366730(a1, 8);
			if (v6 < 0)
				goto LABEL_188;
			if ((*(_DWORD*)(a1 + 132) & 0x4000000) != 0)
			{
				v6 = sub_14035FA80((__m128*)a1);
				if (v6 < 0)
					goto LABEL_188;
			}
		}
		if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 9i64))
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 144i64))(qword_140C65688, a1 + 3504);
			if ((*(_DWORD*)(a1 + 128) & 0x10000) == 0)
				goto LABEL_104;
			for (j = *(_QWORD**)(a1 + 5464); j; j = (_QWORD*)j[41])
			{
				if ((unsigned int)sub_1403915C0((__int64)j, a1 + 3504, 1))
				{
					if (*(_QWORD**)(a1 + 5432) == j)
					{
						v26 = j[3];
						if (v26)
							v27 = v26 + 64;
						else
							v27 = *(_QWORD*)(j[1] + 16i64) + 3504i64;
						(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 176i64))(qword_140C65688, v27);
					}
					else
					{
						sub_1403916D0((__int64)j);
					}
				}
			}
			if (!*(_QWORD*)(a1 + 5432))
				LABEL_104:
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 176i64))(qword_140C65688, a1 + 3504);
		}
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 10i64);
		if ((*(_DWORD*)(a1 + 128) & 0x4004) == 16388 && (*(_BYTE*)(a1 + 132) & 0x10) == 0)
		{
			v6 = sub_1403621E0(a1);
			if (v6 < 0)
				goto LABEL_188;
		}
		if (v59[9])
		{
			v6 = sub_1407C2170(v59, 1, 0xFFFFFFFF);
			if (v6 < 0)
				goto LABEL_188;
		}
		if ((unsigned int)sub_1400F4750((_QWORD*)(a1 + 728)) != -1)
			(*(void(__fastcall**)(_QWORD))(a1 + 736))(*(_QWORD*)(a1 + 728));
		if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 11i64))
		{
			v29 = *(_DWORD*)(a1 + 128);
			if ((v29 & 0x40880) == 2176)
			{
				v6 = sub_140364970(a1, v28, 13);
				if (v6 < 0)
					goto LABEL_188;
			}
			if ((*(_DWORD*)(a1 + 128) & 0x200) != 0)
			{
				if (v60)
				{
					v6 = sub_1407C2170(v59, 2, 0xFFFFFFFF);
					if (v6 < 0)
						goto LABEL_188;
				}
				v6 = sub_140366690(a1);
				if (v6 < 0)
					goto LABEL_188;
			}
		}
		if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 12i64))
		{
			v6 = sub_140366730(a1, 12);
			if (v6 < 0)
				goto LABEL_188;
			if ((*(_DWORD*)(a1 + 132) & 0x4000000) != 0)
			{
				v6 = sub_14035FA80((__m128*)a1);
				if (v6 < 0)
					goto LABEL_188;
			}
		}
		if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 13i64))
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 144i64))(qword_140C65688, a1 + 3504);
			if ((*(_DWORD*)(a1 + 128) & 0x10000) == 0)
				goto LABEL_135;
			for (k = *(_QWORD**)(a1 + 5464); k; k = (_QWORD*)k[41])
			{
				if ((unsigned int)sub_1403915C0((__int64)k, a1 + 3504, 0))
				{
					if (*(_QWORD**)(a1 + 5432) == k)
					{
						v31 = k[3];
						if (v31)
							v32 = v31 + 64;
						else
							v32 = *(_QWORD*)(k[1] + 16i64) + 3504i64;
						(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 176i64))(qword_140C65688, v32);
					}
					else
					{
						sub_1403916D0((__int64)k);
					}
				}
			}
			if (!*(_QWORD*)(a1 + 5432))
				LABEL_135:
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 176i64))(qword_140C65688, a1 + 3504);
		}
		v33 = *(_QWORD*)qword_140C65688;
		if ((*(_BYTE*)(a1 + 128) & 0x10) != 0)
		{
			if ((*(unsigned int(__fastcall**)(__int64, __int64))(v33 + 48))(qword_140C65688, 14i64))
			{
				if ((*(_DWORD*)(a1 + 128) & 0x100000) != 0)
				{
					v34 = 0;
					if (v62)
					{
						LOBYTE(v34) = *(float*)(a1 + 4260) > 0.0;
						v6 = sub_1407C2170(v59, 5, 2 - (unsigned int)(v34 != 0));
						if (v6 < 0)
							goto LABEL_188;
					}
				}
			}
			if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(
				qword_140C65688,
				15i64))
			{
				v6 = sub_1403638C0(a1);
				if (v6 < 0)
					goto LABEL_188;
			}
			if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(
				qword_140C65688,
				16i64)
				&& (*(_DWORD*)(a1 + 128) & 0x200) != 0)
			{
				if (v60)
				{
					v6 = sub_1407C2170(v59, 2, 0xFFFFFFFF);
					if (v6 < 0)
						goto LABEL_188;
				}
				for (m = *(__int64**)(a1 + 5384); m; m = (__int64*)m[62])
				{
					if ((*((_BYTE*)m + 300) & 0x40) != 0)
					{
						v36 = *m;
						LODWORD(v52) = -1;
						(*(void(__fastcall**)(__int64*, __int128*))(v36 + 56))(m, &v52);
						(*(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)qword_140C65688 + 104i64))(qword_140C65688, m + 4);
					}
				}
			}
			if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(
				qword_140C65688,
				17i64))
			{
				v6 = sub_140366730(a1, 17);
				if (v6 < 0)
					goto LABEL_188;
				if ((*(_DWORD*)(a1 + 132) & 0x4000000) != 0)
				{
					v6 = sub_14035FA80((__m128*)a1);
					if (v6 < 0)
						goto LABEL_188;
				}
			}
			if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(
				qword_140C65688,
				18i64))
			{
				v6 = sub_140366BD0(a1, 18);
				if (v6 < 0)
					goto LABEL_188;
			}
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 19i64);
			if ((*(_DWORD*)(a1 + 128) & 0x100000) != 0)
			{
				v37 = 0;
				if (v62)
				{
					LOBYTE(v37) = *(float*)(a1 + 4260) > 0.0;
					v38 = (v37 != 0) + 1;
					goto LABEL_163;
				}
			}
		}
		else
		{
			(*(void(__fastcall**)(__int64, __int64))(v33 + 48))(qword_140C65688, 19i64);
			if ((*(_DWORD*)(a1 + 128) & 0x100000) != 0 && v62)
			{
				v38 = -1;
			LABEL_163:
				v6 = sub_1407C2170(v59, 5, v38);
				if (v6 < 0)
					goto LABEL_188;
			}
		}
		if ((unsigned int)sub_1400F4750((_QWORD*)(a1 + 760)) != -1)
			(*(void(__fastcall**)(_QWORD))(a1 + 768))(*(_QWORD*)(a1 + 760));
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 20i64);
		if ((*(_DWORD*)(a1 + 128) & 0x100000) != 0)
		{
			if (v61)
			{
				v6 = sub_1407C2170(v59, 4, 0xFFFFFFFF);
				if (v6 < 0)
					goto LABEL_188;
			}
		}
		if ((*(_DWORD*)(a1 + 128) & 0x200000) != 0)
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 21i64);
			if (v63)
				sub_1407C2170(v59, 6, 0xFFFFFFFF);
			(*(void(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a1 + 288) + 184i64))(*(_QWORD*)(a1 + 288), v56);
			v39 = *(float*)(a1 + 584);
			v58 = *(_QWORD*)(a1 + 288);
			if (v39 != 0.0)
				v57 = v57 * v39;
			(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 80i64))(qword_140C65688);
			(*(void(__fastcall**)(__int64, char*))(*(_QWORD*)qword_140C65688 + 184i64))(qword_140C65688, v56);
		}
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65688 + 48i64))(qword_140C65688, 22i64);
		if ((*(_DWORD*)(a1 + 128) & 0x8000) != 0)
			(*(void(__fastcall**)(_QWORD, __int64, __int64, __int64, __int64, __int64))(**(_QWORD**)(a1 + 288) + 96i64))(
				*(_QWORD*)(a1 + 288),
				v2,
				v3,
				a1 + 1088,
				a1 + 912,
				a1 + 3504);
		if (*(float*)(a1 + 4260) <= 0.0)
		{
			v40 = *(_DWORD*)(a1 + 128);
			if ((v40 & 0x2000) != 0)
				(*(void(__fastcall**)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD**)(a1 + 288) + 136i64))(
					*(_QWORD*)(a1 + 288),
					v2,
					v3,
					v40 & 0x4000000);
			goto LABEL_183;
		}
		if ((*(_DWORD*)(a1 + 128) & 0x400010) != 4194320 || (v6 = sub_14035CE90(a1), v6 >= 0))
		{
		LABEL_183:
			sub_14035F590(a1);
			v41 = dword_140C44500;
			if (*(_DWORD*)qword_140C63750 < dword_140C44500)
				v41 = *(_DWORD*)qword_140C63750;
			if (byte_140C44510[v41])
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 80i64))(qword_140C65688);
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					0i64,
					*(_QWORD*)(a1 + 5544),
					0i64,
					0i64);
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
					qword_140C65670,
					*(_QWORD*)(*(_QWORD*)(a1 + 16) + 488i64),
					0i64);
				v42 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 5544) + 24i64))(*(_QWORD*)(a1 + 5544));
				v43 = (float)*(int*)(v42 + 8);
				v44 = *(_DWORD*)(v42 + 4);
				*(_QWORD*)&v52 = 0x4316000000000000i64;
				*((float*)&v53 + 1) = v43 + 150.0;
				*(float*)&v53 = (float)v44;
				(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, __int128*))(*(_QWORD*)qword_140C65670
					+ 664i64))(
						qword_140C65670,
						0xFFFFFFFFi64,
						v45,
						0i64,
						0i64,
						&v52);
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					0i64,
					*(_QWORD*)(a1 + 5536),
					0i64,
					0i64);
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
					qword_140C65670,
					*(_QWORD*)(*(_QWORD*)(a1 + 16) + 488i64),
					0i64);
				v46 = (float)*(int*)(v42 + 4);
				v47 = *(_DWORD*)(v42 + 8);
				DWORD1(v54) = 1125515264;
				*(float*)&v54 = v46 + 20.0;
				*(float*)&v55 = (float)(v46 * 2.0) + 20.0;
				*((float*)&v55 + 1) = (float)v47 + 150.0;
				v52 = v54;
				v53 = v55;
				(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, __int128*))(*(_QWORD*)qword_140C65670
					+ 664i64))(
						qword_140C65670,
						0xFFFFFFFFi64,
						v48,
						0i64,
						0i64,
						&v52);
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					0i64,
					*(_QWORD*)(a1 + 5528),
					0i64,
					0i64);
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 376i64))(
					qword_140C65670,
					*(_QWORD*)(*(_QWORD*)(a1 + 16) + 488i64),
					0i64);
				v49 = (float)*(int*)(v42 + 4);
				v50 = *(_DWORD*)(v42 + 8);
				DWORD1(v54) = 1125515264;
				*(float*)&v55 = (float)(v49 * 3.0) + 40.0;
				*(float*)&v54 = (float)(v49 * 2.0) + 40.0;
				*((float*)&v55 + 1) = (float)v50 + 150.0;
				v52 = v54;
				v53 = v55;
				(*(void(__fastcall**)(__int64, __int64, __int128*, _QWORD, _QWORD, __int128*))(*(_QWORD*)qword_140C65670
					+ 664i64))(
						qword_140C65670,
						0xFFFFFFFFi64,
						&v52,
						0i64,
						0i64,
						&v52);
			}
			v6 = 0;
		}
	LABEL_188:
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6200) + 112i64))(*(_QWORD*)(a1 + 6200));
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6208) + 112i64))(*(_QWORD*)(a1 + 6208));
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6216) + 112i64))(*(_QWORD*)(a1 + 6216));
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65688 + 64i64))(qword_140C65688);
		sub_1407C20B0((__int64)v59, v51);
		return (unsigned int)v6;
	}
	return result;
}
// 14036056D: variable 'v22' is possibly undefined
// 1403607FE: variable 'v28' is possibly undefined
// 140360E04: variable 'v45' is possibly undefined
// 140360ED7: variable 'v48' is possibly undefined
// 14036100B: variable 'v51' is possibly undefined
// 140B65808: using guessed type int dword_140B65808[4];
// 140C44400: using guessed type int dword_140C44400;
// 140C44410: using guessed type _BYTE byte_140C44410[32];
// 140C44500: using guessed type int dword_140C44500;
// 140C44510: using guessed type _BYTE[32];
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65688: using guessed type __int64 qword_140C65688;
// 140C657F0: using guessed type __int64 qword_140C657F0;

