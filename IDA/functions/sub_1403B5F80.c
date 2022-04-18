#include "../winhttp.h"

//----- (00000001403B5F80) ----------------------------------------------------
__int64 __fastcall sub_1403B5F80(__int64 a1, __int64 a2)
{
	int v4; // ebx
	__int64 result; // rax
	__int64 v6; // r14
	unsigned int v7; // edi
	int* v8; // rax
	__int64 v9; // rcx
	unsigned int v10; // edi
	unsigned int v11; // ecx
	_WORD* v12; // rax
	__int16 v13; // dx
	unsigned int i; // edi
	__int64 v15; // r8
	int v16; // edx
	_QWORD* v17; // rsi
	_QWORD* v18; // rcx
	__int64 v19; // rdi
	__int64 v20; // rbx
	__int64 v21; // rdi
	__int64 v22; // rbx
	__int64 v23; // r15
	unsigned __int64 j; // rsi
	__int64 v25; // rdi
	__int64 v26; // rcx
	__int64 v27; // rbx
	__int64 v28; // rsi
	__int64 v29; // rax
	__int64 v30; // r15
	__int64 v31; // rbx
	__int64 v32; // rax
	__int64 v33; // rdi
	__int64 k; // rax
	__int64 m; // rax
	__int64 v36; // rcx
	__int64(__fastcall * v37)(wchar_t**, __int64); // rax
	unsigned int v38; // eax
	__int64 v39; // rbx
	__int64 v40; // rdi
	__int64 v41; // rcx
	__int64 v42; // r8
	unsigned int v43; // edx
	__int64 v44; // rax
	__int64 v45; // rcx
	__int64* v46; // rax
	__int64 v47; // rax
	__int64 v48; // rdi
	unsigned __int64 n; // rbx
	__int64 v50; // rcx
	__int64(__fastcall * *v51)(); // [rsp+40h] [rbp-19h] BYREF
	__int128 v52; // [rsp+48h] [rbp-11h]
	__int64(__fastcall * *TlsValue)(); // [rsp+60h] [rbp+7h] BYREF
	__int128 v54; // [rsp+68h] [rbp+Fh]
	__int64 v55; // [rsp+C0h] [rbp+67h] BYREF
	__int64 v56; // [rsp+D0h] [rbp+77h] BYREF

	if (*(_QWORD*)(a1 + 120))
	{
		*(_QWORD*)(a1 + 5744) = *(_QWORD*)(a2 + 136);
		*(_DWORD*)(a1 + 5752) = *(_DWORD*)(a2 + 144);
		*(_DWORD*)(a1 + 5768) = *(_DWORD*)(a2 + 148);
		*(_DWORD*)(a1 + 5772) = *(_DWORD*)(a2 + 156);
		*(_DWORD*)(a1 + 5776) = *(_DWORD*)(a2 + 160);
		*(_DWORD*)(a1 + 28140) = *(unsigned __int8*)(a2 + 164);
		*(_DWORD*)(a1 + 28260) = *(__int16*)(a2 + 166);
		*(_DWORD*)(a1 + 28132) = *(_DWORD*)(a2 + 168);
		sub_1403C6D80(a1, a2);
		sub_1403CDBF0(a1);
		v6 = 0i64;
		*(_QWORD*)(a1 + 5624) = *(_QWORD*)(a2 + 16);
		v7 = 0;
		*(_QWORD*)(a1 + 5632) = *(_QWORD*)(a2 + 24);
		*(_QWORD*)(a1 + 5640) = *(_QWORD*)(a2 + 32);
		*(_QWORD*)(a1 + 5648) = *(_QWORD*)(a2 + 40);
		*(_QWORD*)(a1 + 5656) = *(_QWORD*)(a2 + 48);
		*(_QWORD*)(a1 + 5664) = *(_QWORD*)(a2 + 56);
		*(_QWORD*)(a1 + 5672) = *(_QWORD*)(a2 + 64);
		*(_QWORD*)(a1 + 5680) = *(_QWORD*)(a2 + 72);
		*(_QWORD*)(a1 + 5688) = *(_QWORD*)(a2 + 80);
		*(_QWORD*)(a1 + 5696) = *(_QWORD*)(a2 + 88);
		*(_QWORD*)(a1 + 5704) = *(_QWORD*)(a2 + 96);
		*(_QWORD*)(a1 + 5712) = *(_QWORD*)(a2 + 104);
		*(_QWORD*)(a1 + 5720) = *(_QWORD*)(a2 + 112);
		*(_QWORD*)(a1 + 5728) = *(_QWORD*)(a2 + 120);
		for (*(_QWORD*)(a1 + 5736) = *(_QWORD*)(a2 + 128); v7 < *(_DWORD*)(a2 + 192); ++v7)
		{
			v8 = sub_14018B280(12i64, 0);
			v9 = *(_QWORD*)(a2 + 200);
			*(_QWORD*)&v52 = v8;
			*v8 = *(_DWORD*)(v9 + 16i64 * v7 + 4);
			v8[1] = *(_DWORD*)(*(_QWORD*)(a2 + 200) + 16i64 * v7 + 8);
			v8[2] = *(unsigned __int8*)(*(_QWORD*)(a2 + 200) + 16i64 * v7 + 12);
			LODWORD(v51) = *(_DWORD*)(*(_QWORD*)(a2 + 200) + 16i64 * v7);
			sub_140055F80(a1 + 28576, (__int64)&TlsValue, &v51);
		}
		*(_DWORD*)(a1 + 6976) = *(_DWORD*)(a2 + 152);
		*(_DWORD*)(a1 + 5780) = *(_DWORD*)(a2 + 212);
		*(_DWORD*)(a1 + 2624) = *(_DWORD*)(a2 + 216);
		*(_DWORD*)(a1 + 1376) = *(_DWORD*)(a2 + 220);
		*(_DWORD*)(a1 + 28136) = dword_140C636A8 + *(_DWORD*)(a2 + 224);
		*(_DWORD*)(a1 + 29980) = *(_DWORD*)(a2 + 1268);
		*(_DWORD*)(qword_140C65B98 + 160) = *(_DWORD*)(a2 + 1272);
		sub_1400A8020(*(_QWORD*)(qword_140C65898 + 29504) + 5080i64);
		*(_DWORD*)(a1 + 28144) = *(unsigned __int8*)(a2 + 228);
		sub_1407DB590((int*)(a1 + 28148), *(int**)(a2 + 232), 2i64 * *(unsigned __int8*)(a2 + 228));
		v10 = 0;
		for (*(_DWORD*)(a1 + 1372) = *(_DWORD*)(a2 + 1264); v10 < *(_DWORD*)(a2 + 1276); ++v10)
			sub_1403D1E40(
				(__int64*)a1,
				*(_DWORD*)(*(_QWORD*)(a2 + 1280) + 8i64 * v10),
				*(_DWORD*)(*(_QWORD*)(a2 + 1280) + 8i64 * v10 + 4),
				1);
		v11 = 0;
		v12 = (_WORD*)(a1 + 328);
		do
		{
			v13 = *(_WORD*)((char*)v12 + a2 - a1 - 88);
			if (v13)
				*v12 = v13;
			++v11;
			++v12;
		} while (v11 < 0x200);
		for (i = 0; i < *(_DWORD*)a2; ++i)
			sub_1403B77D0(a1, (int*)(*(_QWORD*)(a2 + 8) + 176i64 * i), 0);
		result = sub_1403CAB70(a1, a2 + 176);
		if ((int)result >= 0)
		{
			v16 = *(_DWORD*)(a2 + 208);
			if ((unsigned int)(v16 - 3) > 1)
				v16 = 3;
			*(_DWORD*)(a1 + 30096) = v16;
			sub_1404DB630(a1, v16, v15, 0);
			if (qword_140C65B80)
			{
				v17 = *(_QWORD**)qword_140C65B80;
				v18 = (_QWORD*)(*(_QWORD*)qword_140C65B80 + 96i64);
				*(_DWORD*)(*(_QWORD*)qword_140C65B80 + 144i64) = 0;
				sub_1403FC230(v18);
				if (v17[2])
				{
					sub_1405A9660((__int64)v17, *(_QWORD**)(v17[1] + 8i64));
					*(_QWORD*)(v17[1] + 16i64) = v17[1];
					*(_QWORD*)(v17[1] + 8i64) = 0i64;
					*(_QWORD*)(v17[1] + 24i64) = v17[1];
					v17[2] = 0i64;
				}
				if (v17[6])
				{
					v19 = *(_QWORD*)(v17[5] + 8i64);
					if (v19)
					{
						do
						{
							sub_1400083B0((__int64)(v17 + 4), *(_QWORD*)(v19 + 24));
							v20 = *(_QWORD*)(v19 + 16);
							sub_14018B900(v19, 0);
							v19 = v20;
						} while (v20);
					}
					*(_QWORD*)(v17[5] + 16i64) = v17[5];
					*(_QWORD*)(v17[5] + 8i64) = 0i64;
					*(_QWORD*)(v17[5] + 24i64) = v17[5];
					v17[6] = 0i64;
				}
				if (v17[10])
				{
					v21 = *(_QWORD*)(v17[9] + 8i64);
					if (v21)
					{
						do
						{
							sub_1400083B0((__int64)(v17 + 8), *(_QWORD*)(v21 + 24));
							v22 = *(_QWORD*)(v21 + 16);
							sub_14018B900(v21, 0);
							v21 = v22;
						} while (v22);
					}
					*(_QWORD*)(v17[9] + 16i64) = v17[9];
					*(_QWORD*)(v17[9] + 8i64) = 0i64;
					*(_QWORD*)(v17[9] + 24i64) = v17[9];
					v17[10] = 0i64;
				}
				v23 = qword_140C65B80;
				for (j = 0i64; j < *(_QWORD*)(v23 + 16); ++j)
				{
					v25 = *(_QWORD*)(*(_QWORD*)(v23 + 24) + 8 * j);
					while (v25)
					{
						v25 = *(_QWORD*)(v25 + 8);
						v26 = *(_QWORD*)(qword_140C65920 + 8);
						if (v26)
						{
							do
							{
								v27 = *(_QWORD*)(v26 + 32);
								if (*(_DWORD*)(v26 + 56) == 1)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 8i64))(v26);
								v26 = v27;
							} while (v27);
						}
					}
				}
			}
			sub_140724100();
			v28 = qword_140C65C28;
			if (qword_140C65C28)
			{
				v29 = *(_QWORD*)(qword_140C65C28 + 112);
				v30 = qword_140C65C28;
				v31 = *(_QWORD*)(v29 + 16);
				if (v31 != v29)
				{
					do
					{
						v32 = *(_QWORD*)(v31 + 24);
						v33 = v31;
						if (v32)
						{
							v31 = *(_QWORD*)(v31 + 24);
							for (k = *(_QWORD*)(v32 + 16); k; k = *(_QWORD*)(k + 16))
								v31 = k;
						}
						else
						{
							for (m = *(_QWORD*)(v31 + 8); v31 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
								v31 = m;
							if (*(_QWORD*)(v31 + 24) != m)
								v31 = m;
						}
						v36 = *(_QWORD*)(v33 + 40);
						if ((*(_BYTE*)(**(_QWORD**)(v36 + 40) + 12i64) & 4) == 0)
						{
							if (v36)
								(**(void(__fastcall***)(__int64, __int64))v36)(v36, 1i64);
							v55 = v33;
							sub_140645210(v28 + 104, &v55);
						}
					} while (v31 != *(_QWORD*)(v28 + 112));
					v28 = qword_140C65C28;
				}
				v37 = (__int64(__fastcall*)(wchar_t**, __int64))qword_140C63838;
				*(_QWORD*)(v30 + 264) = 0i64;
				if (v37)
				{
					v38 = v37(off_140A69138, qword_140C63858);
				}
				else if (dword_140C64944)
				{
					v38 = 0;
				}
				else if ((int)sub_1401E9240() >= 0)
				{
					v38 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64218 + 40i64))(qword_140C64218);
				}
				else
				{
					v38 = 0;
				}
				if (v38)
				{
					v39 = 0i64;
					v40 = v38;
					do
					{
						v41 = *(_QWORD*)(v39 + *(_QWORD*)(v28 + 24));
						if ((*(_BYTE*)(v41 + 12) & 4) == 0 && *(float*)(v41 + 32) <= 0.0)
						{
							v42 = *(_QWORD*)(v28 + 112);
							v43 = *(_DWORD*)v41;
							v44 = *(_QWORD*)(v42 + 8);
							v45 = v42;
							while (v44)
							{
								if (*(_DWORD*)(v44 + 32) < v43)
								{
									v44 = *(_QWORD*)(v44 + 24);
								}
								else
								{
									v45 = v44;
									v44 = *(_QWORD*)(v44 + 16);
								}
							}
							if (v45 == v42 || v43 < *(_DWORD*)(v45 + 32))
							{
								v56 = *(_QWORD*)(v28 + 112);
								v46 = &v56;
							}
							else
							{
								v55 = v45;
								v46 = &v55;
							}
							v47 = *v46;
							if (v47 == v42 || !*(_QWORD*)(v47 + 40))
								sub_140643F00(v28, v43, 0, 0, 0i64, 1, 0);
						}
						v39 += 48i64;
						--v40;
					} while (v40);
				}
			}
			if (qword_140C65970)
				sub_14056E380(qword_140C65970);
			sub_1403BA4A0(a1);
			sub_1405F4DF0();
			sub_14049A790();
			v48 = qword_140C658F8;
			for (n = *(unsigned int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C658F8 + 64) + 32i64))(*(_QWORD*)(qword_140C658F8 + 64))
				/ 0x30ui64; n; --n)
			{
				sub_140712D90(v6 + *(_QWORD*)(v48 + 8));
				v6 += 80i64;
			}
			v50 = qword_140C65898;
			*(_DWORD*)(a1 + 1368) = 1;
			Apollo_LUAEvent(*(_QWORD*)(v50 + 29504), "CharacterCreated", &unk_1409D11E1);
			return 0i64;
		}
	}
	else
	{
		TlsValue = &off_140B5E648;
		*(_QWORD*)&v54 = 0i64;
		*((_QWORD*)&v54 + 1) = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v51 = TlsValue;
		v55 = 0x141DF0210i64;
		v52 = v54;
		v4 = sub_1401971E0(&dword_140C8A6D0, 5, &v55, &v51);
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *((LPVOID*)&v54 + 1));
		if (v4)
			DebugBreak();
		return 2147500037i64;
	}
	return result;
}
// 1403B6311: conditional instruction was optimized away because ecx.4<200u
// 1403B638E: variable 'v15' is possibly undefined
// 140A69138: using guessed type wchar_t *off_140A69138[2];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C636A8: using guessed type int dword_140C636A8;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64218: using guessed type __int64 qword_140C64218;
// 140C64944: using guessed type int dword_140C64944;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140C65920: using guessed type __int64 qword_140C65920;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140C65B98: using guessed type __int64 qword_140C65B98;
// 140C65C28: using guessed type __int64 qword_140C65C28;
// 140C8A6D0: using guessed type _DWORD dword_140C8A6D0;

