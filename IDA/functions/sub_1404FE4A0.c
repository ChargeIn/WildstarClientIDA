#include "../winhttp.h"

//----- (00000001404FE4A0) ----------------------------------------------------
void __fastcall sub_1404FE4A0(__int64 a1)
{
	int v2; // ebx
	__int64 v3; // rax
	_QWORD* v4; // r15
	__int64* v5; // rax
	__int64* v6; // r14
	int* v7; // rax
	int* v8; // rcx
	int* v9; // r9
	int* v10; // rdx
	__int64 v11; // rax
	__int128 v12; // xmm0
	int v13; // ebp
	__int64* v14; // rbx
	__int64 v15; // rdi
	__int64 v16; // rax
	int v17; // eax
	__int64 v18; // rcx
	int v19; // eax
	void(__fastcall * **v20)(_QWORD); // rax
	void(__fastcall * **v21)(_QWORD); // rax
	int v22; // eax
	__int64* v23; // rcx
	bool v24; // zf
	__int64 v25; // rax
	__int64 v26; // rax
	__m128 v27; // xmm2
	__int128 v28; // xmm0
	__m128 v29; // xmm2
	int v30; // eax
	__int64 v31; // rcx
	__int64 v32; // rdx
	__int64 v33; // rbp
	__int64 v34; // rdi
	__int64 v35; // rax
	__int64 v36; // rbx
	int v37; // eax
	char v38[4]; // [rsp+20h] [rbp-178h] BYREF
	int v39; // [rsp+24h] [rbp-174h]
	int v40[12]; // [rsp+30h] [rbp-168h] BYREF
	__int128 v41; // [rsp+60h] [rbp-138h]
	int v42; // [rsp+70h] [rbp-128h]
	int v43[60]; // [rsp+80h] [rbp-118h] BYREF

	if (*(_QWORD*)(a1 + 2168) && *(_QWORD*)(a1 + 2160))
	{
		v2 = 0;
		if (qword_140C65898)
		{
			v3 = *(_QWORD*)(a1 + 2192);
			if (v3)
			{
				v4 = *(_QWORD**)(v3 + 16);
				if (v4)
				{
					v5 = sub_1404670B0(*(_QWORD*)(v3 + 16));
					v6 = v5;
					if (v5 && (*(unsigned int(__fastcall**)(__int64*))(*v5 + 32))(v5) != *(_DWORD*)(a1 + 2200))
					{
						v7 = (int*)(*(__int64(__fastcall**)(__int64*))(*v6 + 16))(v6);
						v8 = v43;
						v9 = v43;
						v10 = v7;
						if ((((unsigned __int8)v43 | (unsigned __int8)v7) & 0xF) != 0)
						{
							sub_1407DB590(v43, v7, 0xF0ui64);
						}
						else
						{
							v11 = 1i64;
							do
							{
								v12 = *(_OWORD*)v10;
								v8 += 32;
								v10 += 32;
								*((_OWORD*)v8 - 8) = v12;
								*((_OWORD*)v8 - 7) = *((_OWORD*)v10 - 7);
								*((_OWORD*)v8 - 6) = *((_OWORD*)v10 - 6);
								*((_OWORD*)v8 - 5) = *((_OWORD*)v10 - 5);
								*((_OWORD*)v8 - 4) = *((_OWORD*)v10 - 4);
								*((_OWORD*)v8 - 3) = *((_OWORD*)v10 - 3);
								*((_OWORD*)v8 - 2) = *((_OWORD*)v10 - 2);
								*((_OWORD*)v8 - 1) = *((_OWORD*)v10 - 1);
								--v11;
							} while (v11);
							*(_OWORD*)v8 = *(_OWORD*)v10;
							*((_OWORD*)v8 + 1) = *((_OWORD*)v10 + 1);
							*((_OWORD*)v8 + 2) = *((_OWORD*)v10 + 2);
							*((_OWORD*)v8 + 3) = *((_OWORD*)v10 + 3);
							*((_OWORD*)v8 + 4) = *((_OWORD*)v10 + 4);
							*((_OWORD*)v8 + 5) = *((_OWORD*)v10 + 5);
							*((_OWORD*)v8 + 6) = *((_OWORD*)v10 + 6);
						}
						(*(void(__fastcall**)(_QWORD, _QWORD, int*, int*))(**(_QWORD**)(a1 + 2168) + 24i64))(
							*(_QWORD*)(a1 + 2168),
							*(_QWORD*)(a1 + 2160),
							v43,
							v9);
						v13 = 0;
						*(_DWORD*)(a1 + 2200) = (*(__int64(__fastcall**)(__int64*))(*v6 + 32))(v6);
						do
						{
							v14 = *(__int64**)(a1 + 2168);
							v15 = *v14;
							v16 = (*(__int64(__fastcall**)(__int64*, _QWORD))(*v6 + 64))(v6, (unsigned int)v13);
							(*(void(__fastcall**)(__int64*, _QWORD, __int64))(v15 + 72))(v14, (unsigned int)v13++, v16);
						} while (v13 < 72);
					}
					LOBYTE(v17) = sub_14047C060(v4);
					v2 = v17;
				}
			}
		}
		v18 = *(_QWORD*)(a1 + 2168);
		v40[0] = 0;
		v19 = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)v18 + 256i64))(v18, v40) - 537526274;
		if (v19)
		{
			if (v19 == 2)
			{
				v20 = (void(__fastcall***)(_QWORD))(*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 2168)
					+ 280i64))(
						*(_QWORD*)(a1 + 2168),
						0i64);
				sub_1400035C0((_QWORD*)(a1 + 2184), v20);
				*(_DWORD*)(a1 + 2224) = 0;
				sub_1400D4070(a1, 0x4Fu, (char*)a1, byte_1409D1426);
			}
		}
		else
		{
			v21 = (void(__fastcall***)(_QWORD))(*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 2168) + 272i64))(
				*(_QWORD*)(a1 + 2168),
				0i64);
			sub_1400035C0((_QWORD*)(a1 + 2176), v21);
			(*(void(__fastcall**)(_QWORD, void(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(**(_QWORD**)(a1 + 2176) + 648i64))(
				*(_QWORD*)(a1 + 2176),
				sub_1404FE450,
				a1);
			sub_1404FFDD0(a1);
			v22 = (*(__int64(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 2176) + 848i64))(
				*(_QWORD*)(a1 + 2176),
				8i64);
			v23 = *(__int64**)(a1 + 2176);
			v24 = v22 == 0;
			v25 = *v23;
			if (v24)
			{
				v26 = (*(__int64 (**)(void))(v25 + 1168))();
				v27 = *(__m128*)(v26 + 16);
				v28 = *(_OWORD*)(v26 + 32);
				v42 = *(_DWORD*)(v26 + 48);
				v29 = _mm_sub_ps(v27, *(__m128*)v26);
				v41 = v28;
				*(float*)(a1 + 2308) = _mm_shuffle_ps(v29, v29, 85).m128_f32[0] - 0.5;
			}
			else
			{
				(*(void(__fastcall**)(__int64*, char*, __int64))(v25 + 856))(v23, v38, 8i64);
				*(_DWORD*)(a1 + 2308) = v39;
			}
		}
		if (*(_QWORD*)(a1 + 2176))
		{
			(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 2160) + 48i64))(
				*(_QWORD*)(a1 + 2160),
				(unsigned int)dword_140C636A8,
				0i64);
			if (!*(_DWORD*)(a1 + 2272))
			{
				v30 = *(_DWORD*)(a1 + 2080);
				*(_DWORD*)(a1 + 2320) = v30;
				if (v2)
				{
					if (v30 == 2)
						v30 = 48;
					*(_DWORD*)(a1 + 2320) = v30;
				}
				v31 = *(_QWORD*)(a1 + 2176);
				v32 = *(unsigned int*)(a1 + 2320);
				*(_QWORD*)(a1 + 2312) = 0i64;
				v33 = v2;
				if ((*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v31 + 1056i64))(v31, v32))
				{
				LABEL_45:
					*(_QWORD*)(a1 + 2312) = *(_QWORD*)(a1 + 2176);
				}
				else
				{
					while (1)
					{
						v34 = 0i64;
						while (1)
						{
							v35 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 2168) + 120i64))(
								*(_QWORD*)(a1 + 2168),
								(unsigned int)v34,
								0i64);
							v36 = v35;
							if (v35)
							{
								if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v35 + 944i64))(v35)
									&& (*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v36 + 1056i64))(
										v36,
										*(unsigned int*)(a1 + 2320)))
								{
									break;
								}
							}
							if ((unsigned __int64)++v34 >= 0x48)
								goto LABEL_36;
						}
						*(_QWORD*)(a1 + 2312) = v36;
					LABEL_36:
						if (*(_QWORD*)(a1 + 2312))
							break;
						v37 = *(_DWORD*)(a1 + 2320);
						if (v37 == 4)
						{
							*(_DWORD*)(a1 + 2320) = 1;
						}
						else
						{
							if (!v33)
								break;
							if (v37 == 48)
							{
								*(_DWORD*)(a1 + 2320) = 5;
							}
							else
							{
								if (v37 != 5)
									break;
								*(_DWORD*)(a1 + 2320) = 2;
							}
						}
						if ((*(unsigned int(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 2176) + 1056i64))(
							*(_QWORD*)(a1 + 2176),
							*(unsigned int*)(a1 + 2320)))
						{
							goto LABEL_45;
						}
					}
				}
			}
			sub_1404F5AA0(a1);
		}
	}
}
// 1404FE621: variable 'v9' is possibly undefined
// 1404FE677: variable 'v17' is possibly undefined
// 1409D1426: using guessed type _BYTE byte_1409D1426[19];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 1404FE4A0: using guessed type int var_118[60];
// 1404FE4A0: using guessed type int var_168[12];
// 1404FE4A0: using guessed type char var_178[4];

