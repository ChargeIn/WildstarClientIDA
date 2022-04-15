#include "../winhttp.h"

//----- (0000000140381300) ----------------------------------------------------
__int64 __fastcall sub_140381300(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	_QWORD* v6; // rdx
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rdx
	__int64* v11; // r10
	__int64 v12; // r8
	__int64 v13; // r11
	__int64 v14; // r9
	__int64 v15; // rax
	__int64 v16; // rax
	__int64 v17; // r13
	__int64* v18; // r15
	__int64 v19; // rax
	unsigned int v20; // ebp
	__int64 v21; // rsi
	void(__fastcall * **v22)(_QWORD); // rax
	__int64 v23; // r14
	void(__fastcall * **v24)(_QWORD); // rbx
	__int64 v25; // rcx
	unsigned __int64 v26; // rsi
	__int64* v27; // r15
	__int64 v28; // rbp
	__int64 v29; // rax
	float v30; // xmm0_4
	unsigned int v31; // ebx
	unsigned int v32; // r14d
	__int64 v33; // rax
	__int64 v34; // rbx
	int CurrentThreadId; // edx
	__int64 v36; // rcx
	__int64 v37; // rdx
	_QWORD* v38; // rcx
	__int64 v39; // rax
	HANDLE EventW; // rcx
	__int64 v41; // rax
	__int64 v42; // rdx
	_QWORD* v43; // rbx
	_QWORD* v44; // r14
	int* v45; // r15
	int* v46; // rbp
	__int64 v47; // rcx
	int v48[4]; // [rsp+30h] [rbp-A8h] BYREF
	_QWORD* v49; // [rsp+40h] [rbp-98h]
	__int64(__fastcall * v50)(__int64); // [rsp+48h] [rbp-90h]
	int v51[4]; // [rsp+50h] [rbp-88h] BYREF
	__int128 v52; // [rsp+60h] [rbp-78h]
	int v53[2]; // [rsp+70h] [rbp-68h] BYREF
	_QWORD* v54; // [rsp+78h] [rbp-60h]
	__int64(__fastcall * v55)(__int64); // [rsp+80h] [rbp-58h]
	__int64 v56; // [rsp+88h] [rbp-50h]
	int v57; // [rsp+90h] [rbp-48h]
	__int64 v58; // [rsp+E0h] [rbp+8h]
	__int64 v59; // [rsp+E8h] [rbp+10h] BYREF

	if ((*(_DWORD*)(*a1 + 232i64) & 0x4000) == 0 || !*((_DWORD*)a1 + 196))
		return 1i64;
	v3 = a1[2];
	v48[0] = 0;
	result = (*(__int64(__fastcall**)(__int64, int*))(*(_QWORD*)v3 + 48i64))(v3, v48);
	if ((_DWORD)result)
	{
		v4 = a1[108];
		if (!v4)
		{
			sub_14003D8F0(&v59, *a1 + 2512i64);
			v5 = *(_QWORD*)(*a1 + 2552i64);
			if (v5)
			{
				a1[110] = v5;
				v6 = *(_QWORD**)(v5 + 1312);
				if (v6)
					*v6 = *(_QWORD*)(v5 + 1320);
				v7 = *(_QWORD*)(v5 + 1320);
				if (v7)
					*(_QWORD*)(v7 + 1312) = *(_QWORD*)(v5 + 1312);
				*(_QWORD*)(v5 + 1312) = 0i64;
				*(_QWORD*)(v5 + 1320) = 0i64;
				sub_14003D880(&v59);
				v8 = a1[94];
				if (v8)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
					a1[94] = 0i64;
				}
				v9 = a1[97];
				if (v9)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
					a1[97] = 0i64;
				}
				v10 = 192i64;
				v11 = a1 + 7;
				a1[92] = 0i64;
				a1[93] = 0i64;
				a1[95] = 0i64;
				a1[96] = 0i64;
				v12 = 128i64;
				v13 = 4i64;
				*((_DWORD*)a1 + 218) = *(_DWORD*)(*a1 + 152i64);
				do
				{
					v14 = *v11;
					v15 = a1[110];
					if (*v11)
					{
						*(_OWORD*)(v12 + v15) = *(_OWORD*)(v14 + 32);
						*(_DWORD*)(v10 + a1[110]) = *(_DWORD*)(v14 + 108);
					}
					else
					{
						*(_OWORD*)(v12 + v15) = 0i64;
						v16 = a1[110];
						v52 = 0i64;
						*(_DWORD*)(v10 + v16) = 981668463;
					}
					v12 += 16i64;
					++v11;
					v10 += 4i64;
					--v13;
				} while (v13);
				v17 = 0i64;
				v18 = a1 + 64;
				v58 = 16i64;
				do
				{
					v19 = a1[110];
					if (*v18)
					{
						*(_BYTE*)(v19 + v17 + 272) = 1;
						*(_DWORD*)(a1[110] + v17 + 276) = *(_DWORD*)(*v18 + 40);
						v20 = 0;
						*(_DWORD*)(a1[110] + v17 + 280) = sub_140374780(*v18);
						v21 = v17 + 288;
						do
						{
							v22 = (void(__fastcall***)(_QWORD))sub_140374820(*v18, v20);
							v23 = a1[110];
							v24 = v22;
							if (*(void(__fastcall****)(_QWORD))(v21 + v23) != v22)
							{
								if (v22)
									(**v22)(v22);
								v25 = *(_QWORD*)(v21 + v23);
								if (v25)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 8i64))(v25);
								*(_QWORD*)(v21 + v23) = v24;
							}
							++v20;
							v21 += 8i64;
						} while (v20 < 6);
					}
					else
					{
						*(_BYTE*)(v19 + v17 + 272) = 0;
					}
					++v18;
					v17 += 64i64;
					--v58;
				} while (v58);
				*(_DWORD*)(a1[110] + 32i64) = 0;
				sub_1407E4830((int*)(a1[110] + 36i64), 0i64, 0x40ui64);
				v26 = 36i64;
				v27 = a1 + 64;
				do
				{
					v28 = *v27;
					if (*v27)
					{
						v29 = a1[110];
						v30 = *(float*)(v28 + 40);
						if (v30 > *(float*)(v29 + 32))
							*(float*)(v29 + 32) = v30;
						v31 = 0;
						v32 = sub_140374780(v28);
						if (v32)
						{
							do
							{
								v33 = sub_140374820(v28, v31++);
								*(float*)(a1[110] + v26) = *(float*)(v33 + 40) + *(float*)(a1[110] + v26);
							} while (v31 < v32);
						}
					}
					v26 += 4i64;
					++v27;
				} while (v26 < 0x64);
				v50 = sub_140381970;
				v55 = sub_140381970;
				v53[0] = 12;
				v53[1] = 2;
				v49 = a1;
				v54 = a1;
				v56 = 0i64;
				v57 = 1;
				if ((int)sub_14019DCA0((__int64)v53, 0, 0i64, (int**)a1 + 108) < 0)
				{
					v34 = *a1 + 2512i64;
					CurrentThreadId = GetCurrentThreadId();
					if (*(_DWORD*)v34 == CurrentThreadId)
					{
						++* (_QWORD*)(v34 + 8);
					}
					else
					{
						v36 = 0i64;
						while (_InterlockedCompareExchange64((volatile signed __int64*)(v34 + 8), 1i64, 0i64))
						{
							_mm_pause();
							if ((unsigned __int64)++v36 >= 0x400)
							{
								sub_14019FB60(v34, CurrentThreadId);
								goto LABEL_48;
							}
						}
						*(_DWORD*)v34 = CurrentThreadId;
					}
				LABEL_48:
					v37 = a1[110];
					v38 = (_QWORD*)(*a1 + 2552i64);
					if (!*(_QWORD*)(v37 + 1312))
					{
						*(_QWORD*)(v37 + 1312) = v38;
						*(_QWORD*)(v37 + 1320) = *v38;
						*v38 = v37;
						v39 = *(_QWORD*)(v37 + 1320);
						if (v39)
							*(_QWORD*)(v39 + 1312) = v37 + 1320;
					}
					a1[110] = 0i64;
					if (*(_QWORD*)(v34 + 8) <= 1ui64)
					{
						*(_DWORD*)v34 = 0;
						_InterlockedExchange64((volatile __int64*)(v34 + 8), 0i64);
						if (*(_QWORD*)(v34 + 16))
						{
							if (!*(_QWORD*)(v34 + 24))
							{
								EventW = CreateEventW(0i64, 0, 0, 0i64);
								if (_InterlockedCompareExchange64((volatile signed __int64*)(v34 + 24), (signed __int64)EventW, 0i64))
									CloseHandle(EventW);
							}
							SetEvent(*(HANDLE*)(v34 + 24));
						}
					}
					else
					{
						--* (_QWORD*)(v34 + 8);
					}
					return 1i64;
				}
			}
			else
			{
				sub_14003D880(&v59);
			}
			return 0i64;
		}
		v51[0] = 0;
		if (!(*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v4 + 32i64))(v4, v51))
			return 0i64;
		if ((*(int(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)a1[108] + 40i64))(a1[108], 0i64) >= 0)
		{
			v41 = a1[110];
			v42 = *(_QWORD*)(v41 + 24);
			if (v42)
			{
				if (*(_QWORD*)(v41 + 8))
				{
					v43 = a1 + 94;
					if ((*(int(__fastcall**)(__int64, _QWORD, __int64, _QWORD*))(*(_QWORD*)qword_140C65670 + 56i64))(
						qword_140C65670,
						(unsigned int)(56 * v42),
						1i64,
						a1 + 94) >= 0)
					{
						v44 = a1 + 97;
						if ((*(int(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _QWORD*))(*(_QWORD*)qword_140C65670 + 64i64))(
							qword_140C65670,
							2 * (unsigned int)*(_QWORD*)(a1[110] + 8i64),
							0i64,
							1i64,
							a1 + 97) >= 0)
						{
							v45 = (int*)(*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD*)*v43 + 56i64))(
								*v43,
								0i64,
								56 * (unsigned int)*(_QWORD*)(a1[110] + 24i64),
								2i64);
							if (v45)
							{
								v46 = (int*)(*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD*)*v44 + 56i64))(
									*v44,
									0i64,
									2 * (unsigned int)*(_QWORD*)(a1[110] + 8i64),
									2i64);
								if (v46)
								{
									sub_1407DB590(v45, *(int**)(a1[110] + 16i64), 56i64 * *(_QWORD*)(a1[110] + 24i64));
									sub_1407DB590(v46, *(int**)a1[110], 2i64 * *(_QWORD*)(a1[110] + 8i64));
									(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v43 + 64i64))(*v43);
									(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v44 + 64i64))(*v44);
									goto LABEL_74;
								}
								(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v43 + 64i64))(*v43);
							}
						}
					}
					if (*v43)
					{
						(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v43 + 8i64))(*v43);
						*v43 = 0i64;
					}
					v47 = a1[97];
					if (v47)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v47 + 8i64))(v47);
						a1[97] = 0i64;
					}
				}
			}
		}
	LABEL_74:
		sub_140383760(a1);
		return 1i64;
	}
	return result;
}
// 140C65670: using guessed type __int64 qword_140C65670;
// 140381300: using guessed type int var_A8[4];
// 140381300: using guessed type int var_88[4];

