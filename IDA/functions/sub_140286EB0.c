#include "../winhttp.h"

//----- (0000000140286EB0) ----------------------------------------------------
__int64 __fastcall sub_140286EB0(__int64 a1)
{
	__int64 v2; // rcx
	unsigned __int64 v3; // r15
	unsigned __int64 i; // r8
	__int64* v5; // rax
	__int64 v6; // rcx
	int v7; // edi
	int v8; // r12d
	__int64* v9; // rsi
	unsigned __int64 v10; // r14
	__int64 v11; // rbx
	unsigned __int64 v12; // r13
	int v13; // eax
	int v14; // eax
	__int128 v15; // xmm0
	__int64 v16; // rcx
	int* v17; // rbx
	int v18; // r15d
	unsigned int v19; // r12d
	__int64 v20; // rdi
	int v21; // ecx
	_DWORD* v22; // r8
	__int64 v23; // rax
	__int64 v24; // rsi
	_WORD* v25; // rdx
	__int64 j; // r8
	__int64 v27; // r9
	int v28; // xmm2_4
	__int64 v29; // rcx
	__int64 v30; // rcx
	int v31; // xmm1_4
	int v32; // ecx
	__int64 v33; // rax
	__int64 v34; // rcx
	__int64 v36; // [rsp+20h] [rbp-C8h]
	__int64* v37; // [rsp+40h] [rbp-A8h]
	unsigned __int64 v38; // [rsp+48h] [rbp-A0h]
	__int128 v39[9]; // [rsp+50h] [rbp-98h] BYREF
	unsigned int v40; // [rsp+F0h] [rbp+8h]
	int v41; // [rsp+F8h] [rbp+10h]
	int v42; // [rsp+100h] [rbp+18h]
	__int64 v43; // [rsp+108h] [rbp+20h]

	v2 = *(_QWORD*)(a1 + 416);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 416) = 0i64;
	}
	v3 = *(_QWORD*)(a1 + 288);
	v38 = v3;
	sub_14004EED0((__int64*)(a1 + 360), v3);
	sub_14004EED0((__int64*)(a1 + 376), v3);
	for (i = 0i64;
		i < v3;
		*(_QWORD*)(*(_QWORD*)(a1 + 360) + 8 * i - 8) = *(_QWORD*)(a1 + 264)
		+ 144i64 * *(unsigned int*)(*(_QWORD*)(a1 + 280) + 4 * i - 4))
	{
		++i;
	}
	v5 = sub_140287920(
		(__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_140285F80,
		*(__int64**)(a1 + 360),
		*(_QWORD*)(a1 + 376),
		v3);
	v6 = -1i64;
	v7 = 3;
	v8 = 4;
	v9 = v5;
	v37 = v5;
	v43 = -1i64;
	v41 = 3;
	v42 = 4;
	if (v3)
	{
		(*(void(__fastcall**)(_QWORD, __int64, __int64, _QWORD, _DWORD, _DWORD))(**(_QWORD**)(a1 + 16) + 328i64))(
			*(_QWORD*)(a1 + 16),
			32i64,
			a1 + 192,
			0i64,
			0,
			0);
		v6 = -1i64;
	}
	v10 = 0i64;
	if (v3)
	{
		while (1)
		{
			v11 = v9[v10];
			v12 = v10 + 1;
			if (!*(_QWORD*)(v11 + 104) && !*(_QWORD*)(v11 + 112))
				break;
			v7 = 3;
			v8 = 4;
			v43 = -1i64;
			v41 = 3;
			v42 = 4;
			(*(void(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 16) + 320i64))(
				*(_QWORD*)(a1 + 16),
				*(_QWORD*)(a1 + 400),
				1i64);
			(*(void(__fastcall**)(_QWORD, _QWORD))(v11 + 112))(*(_QWORD*)(v11 + 104), *(_QWORD*)(v11 + 120));
		LABEL_38:
			v17 = (int*)v9[v10];
			if (v17)
			{
				do
				{
					v18 = 0;
					v19 = 0;
					v20 = (__int64)v17;
					do
					{
						v21 = *(_DWORD*)(v20 + 24);
						if ((unsigned int)(v21 + v18) > 0x6BCA)
							break;
						v18 += v21;
						v22 = (_DWORD*)(v20 + 128);
						v19 += v21 - 2 + 2 * (v21 - 2);
						v23 = *(unsigned int*)(v20 + 128);
						if ((_DWORD)v23 == -1)
						{
							if (++v10 >= v12)
							{
								v20 = 0i64;
								break;
							}
							v20 = v9[v10];
							*v22 = (v20 - *(_QWORD*)(a1 + 264)) / 144;
						}
						else
						{
							v20 = *(_QWORD*)(a1 + 264) + 144 * v23;
						}
					} while (v20);
					v24 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 16) + 224i64))(
						*(_QWORD*)(a1 + 16),
						(unsigned int)(76 * v18),
						16i64);
					if (v24)
					{
						v25 = (_WORD*)(*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 16) + 240i64))(
							*(_QWORD*)(a1 + 16),
							2 * v19,
							0i64);
						if (v25)
						{
							v27 = 0i64;
							while (v17 != (int*)v20)
							{
								for (j = 0i64; (unsigned int)j < v17[6]; *(_DWORD*)(v24 - 4) = v17[23])
								{
									v28 = *v17;
									v24 += 76i64;
									v29 = (unsigned int)(j + v17[5]);
									j = (unsigned int)(j + 1);
									v30 = *(_QWORD*)(a1 + 296) + 32 * v29;
									v31 = *(_DWORD*)(v30 + 4);
									*(_DWORD*)(v24 - 76) = *(_DWORD*)v30;
									*(_DWORD*)(v24 - 72) = v31;
									*(_DWORD*)(v24 - 68) = v28;
									*(_DWORD*)(v24 - 64) = v17[7];
									*(_DWORD*)(v24 - 60) = v17[8];
									*(_QWORD*)(v24 - 56) = *(_QWORD*)(v30 + 16);
									*(_DWORD*)(v24 - 48) = v17[12];
									*(_DWORD*)(v24 - 44) = v17[13];
									*(_DWORD*)(v24 - 40) = v17[14];
									*(_DWORD*)(v24 - 36) = v17[15];
									*(_DWORD*)(v24 - 32) = v17[16];
									*(_DWORD*)(v24 - 28) = v17[17];
									*(_DWORD*)(v24 - 24) = v17[18];
									*(_DWORD*)(v24 - 20) = v17[19];
									*(_DWORD*)(v24 - 16) = v17[20];
									*(_DWORD*)(v24 - 12) = v17[21];
									*(_DWORD*)(v24 - 8) = v17[22];
								}
								if ((unsigned int)v17[6] > 2)
								{
									v32 = v27 + 2;
									j = (unsigned int)-(int)v27;
									do
									{
										*v25 = v27;
										v25 += 3;
										*(v25 - 2) = v32 - 1;
										*(v25 - 1) = v32++;
									} while (v32 - (int)v27 < (unsigned int)v17[6]);
								}
								v33 = (unsigned int)v17[32];
								v27 = (unsigned int)(v17[6] + v27);
								if ((_DWORD)v33 == -1)
									v17 = 0i64;
								else
									v17 = (int*)(*(_QWORD*)(a1 + 264) + 144 * v33);
							}
							(*(void(__fastcall**)(_QWORD, _WORD*, __int64, __int64))(**(_QWORD**)(a1 + 16) + 232i64))(
								*(_QWORD*)(a1 + 16),
								v25,
								j,
								v27);
							(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 248i64))(*(_QWORD*)(a1 + 16));
							LODWORD(v36) = 0;
							(*(void(__fastcall**)(_QWORD, __int64, _QWORD, _QWORD, __int64, int, _DWORD, int))(**(_QWORD**)(a1 + 16)
								+ 656i64))(
									*(_QWORD*)(a1 + 16),
									3i64,
									0i64,
									v19,
									v36,
									v18,
									0,
									1);
						}
						else
						{
							(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 232i64))(*(_QWORD*)(a1 + 16));
						}
					}
					v9 = v37;
				} while (v17);
				v3 = v38;
				v7 = v41;
				v8 = v42;
			}
			v6 = v43;
			if (v10 >= v3)
				goto LABEL_65;
		}
		if (v6 != *(_QWORD*)(v11 + 96))
		{
			v43 = *(_QWORD*)(v11 + 96);
			(*(void(__fastcall**)(_QWORD, _QWORD, __int64, _QWORD, _QWORD))(**(_QWORD**)(a1 + 16) + 352i64))(
				*(_QWORD*)(a1 + 16),
				0i64,
				v43,
				0i64,
				0i64);
		}
		v13 = *(_DWORD*)(v11 + 12);
		if (v7 != v13)
		{
			v7 = *(_DWORD*)(v11 + 12);
			v41 = v7;
			if (v13)
			{
				if (v13 == 1)
				{
					v40 = 3;
				}
				else if (v13 == 2)
				{
					v40 = 2;
				}
			}
			else
			{
				v40 = 1;
			}
			(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 16) + 320i64))(
				*(_QWORD*)(a1 + 16),
				*(_QWORD*)(a1 + 400),
				v40);
			(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 16) + 376i64))(
				*(_QWORD*)(a1 + 16),
				*(_QWORD*)(a1 + 408),
				v40);
		}
		v14 = *(_DWORD*)(v11 + 16);
		if (v8 == v14)
		{
		LABEL_31:
			while (v12 < v3)
			{
				v16 = v9[v12];
				if (*(_QWORD*)(v11 + 96) != *(_QWORD*)(v16 + 96))
					break;
				if (*(_DWORD*)(v11 + 12) != *(_DWORD*)(v16 + 12))
					break;
				if (*(_DWORD*)(v11 + 16) != *(_DWORD*)(v16 + 16))
					break;
				++v12;
			}
			goto LABEL_38;
		}
		v8 = *(_DWORD*)(v11 + 16);
		v42 = v8;
		if (v14)
		{
			switch (v14)
			{
			case 1:
				(*(void(__fastcall**)(_QWORD, __int64, __int64, _QWORD))(**(_QWORD**)(a1 + 16) + 464i64))(
					*(_QWORD*)(a1 + 16),
					1i64,
					1i64,
					0i64);
				v15 = xmmword_140C777D0;
				v39[3] = xmmword_140C777D0;
				break;
			case 2:
				(*(void(__fastcall**)(_QWORD, __int64, _QWORD))(**(_QWORD**)(a1 + 16) + 464i64))(
					*(_QWORD*)(a1 + 16),
					8i64,
					0i64);
				v15 = xmmword_140B7B240;
				v39[2] = xmmword_140B7B240;
				break;
			case 3:
				(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 16) + 464i64))(
					*(_QWORD*)(a1 + 16),
					8i64,
					2i64);
				v15 = xmmword_140C777F0;
				v39[1] = xmmword_140C777F0;
				break;
			default:
			LABEL_30:
				(*(void(__fastcall**)(_QWORD, __int64, __int128*))(**(_QWORD**)(a1 + 16) + 384i64))(
					*(_QWORD*)(a1 + 16),
					16i64,
					v39);
				goto LABEL_31;
			}
		}
		else
		{
			(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 16) + 464i64))(
				*(_QWORD*)(a1 + 16),
				1i64,
				5i64);
			v15 = xmmword_140C777D0;
			v39[4] = xmmword_140C777D0;
		}
		v39[0] = v15;
		goto LABEL_30;
	}
LABEL_65:
	sub_1402875E0((__int64*)(a1 + 264));
	*(_QWORD*)(a1 + 288) = 0i64;
	sub_1402877C0((__int64*)(a1 + 296), 0i64);
	v34 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 180) = 0;
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v34 + 696i64))(v34);
}
// 14028722C: conditional instruction was optimized away because rbx.8!=0
// 140287410: variable 'j' is possibly undefined
// 14028744B: variable 'v36' is possibly undefined
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;
// 140C777F0: using guessed type __int128 xmmword_140C777F0;

