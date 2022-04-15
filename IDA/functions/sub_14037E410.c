#include "../winhttp.h"

//----- (000000014037E410) ----------------------------------------------------
void __fastcall sub_14037E410(__int64 a1)
{
	__int64 v1; // r13
	__int64 v2; // rcx
	int** v3; // rdi
	__int64 v4; // rcx
	int v5; // r12d
	__int64 v6; // rbx
	__int64 v7; // rax
	__m128* v8; // rsi
	__int64 v9; // rdi
	__int64 v10; // rbp
	_WORD* v11; // r10
	_BYTE* v12; // rax
	__int64 v13; // r10
	__int16 v14; // r8
	__int16 v15; // r9
	__int64 v16; // r11
	__int64 v17; // rax
	__m128* v18; // r10
	_BYTE* v19; // rax
	__m128* v20; // r10
	__int16 v21; // r8
	unsigned __int8 v22; // r9^1
	unsigned __int8 v23; // r9
	__int64 v24; // r11
	int v25; // eax
	__int64 v26; // r14
	__int64 v27; // rax
	__int64 v28; // r15
	__int64 v29; // rbx
	__int64 v30; // rbp
	__int64 v31; // rsi
	unsigned int i; // edi
	unsigned int v33; // r10d
	_WORD* v34; // r11
	__int16 v35; // r8
	__int64 v36; // rcx
	__int64 v37; // [rsp+20h] [rbp-A8h]
	__int64 v38; // [rsp+20h] [rbp-A8h]
	__int64 v39; // [rsp+30h] [rbp-98h]
	__int64 v40; // [rsp+48h] [rbp-80h]
	__int64 v42; // [rsp+D8h] [rbp+10h] BYREF
	int v43; // [rsp+E0h] [rbp+18h]
	__int64 v44; // [rsp+E8h] [rbp+20h] BYREF

	v1 = a1;
	v2 = *(_QWORD*)(a1 + 160);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(v1 + 160) = 0i64;
	}
	v3 = (int**)(v1 + 176);
	v4 = *(_QWORD*)(v1 + 176);
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		*v3 = 0i64;
	}
	if ((*(_BYTE*)(*(_QWORD*)v1 + 232i64) & 4) != 0)
	{
		v5 = 1;
		if ((int)sub_140350A20(*(_QWORD*)(*(_QWORD*)v1 + 16i64), 0i64, 0, (int**)(v1 + 160)) >= 0)
		{
			v40 = *(_QWORD*)(*(_QWORD*)(v1 + 160) + 32i64);
			v6 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)v40 + 56i64))(v40, 0i64, 0i64, 2i64);
			if (v6)
			{
				(*(void(__fastcall**)(_QWORD, _QWORD, __int64*, __int64))(**(_QWORD**)(v1 + 16) + 72i64))(
					*(_QWORD*)(v1 + 16),
					0i64,
					&v44,
					1i64);
				v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v44 + 16i64))(v44);
				v8 = *(__m128**)(v1 + 152);
				v39 = v7;
				v9 = v6;
				v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v44 + 24i64))(v44);
				v37 = 17i64;
				(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v1 + 16) + 40i64))(*(_QWORD*)(v1 + 16));
				do
				{
					v11 = (_WORD*)v10;
					do
					{
						if ((*v11 & 0x8000) != 0)
							v5 = 0;
						v12 = sub_14037E2D0(&v42, v8);
						v9 += 4i64;
						++v8;
						v11 = (_WORD*)(v13 + 2);
						v14 = (unsigned __int8)*v12 + ((unsigned __int8)v12[1] << 8);
						*(_DWORD*)(v9 - 4) = (unsigned __int8)v15
							+ ((unsigned __int8)v14 << 16)
							+ (HIBYTE(v14) << 8)
							+ ((unsigned __int16)(v15 & 0x7FFF) >> 8 << 24);
					} while (v16 != 1);
					v9 += 64i64;
					v8 += 16;
					v17 = *(int*)(v39 + 44);
					v43 = v5;
					v10 += v17;
					--v37;
				} while (v37);
				v38 = 16i64;
				v18 = *(__m128**)(a1 + 152);
				do
				{
					v6 += 68i64;
					v18 += 17;
					do
					{
						v19 = sub_14037E2D0(&v42, v18);
						v6 += 4i64;
						v18 = v20 + 1;
						v21 = (unsigned __int8)*v19 + ((unsigned __int8)v19[1] << 8);
						*(_DWORD*)(v6 - 4) = v23 + ((unsigned __int8)v21 << 16) + (HIBYTE(v21) << 8) + (v22 << 24);
					} while (v24 != 1);
					--v38;
				} while (v38);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v44 + 8i64))(v44);
				v1 = a1;
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v40 + 64i64))(v40);
				v5 = v43;
				v3 = (int**)(a1 + 176);
			}
		}
		v25 = sub_140350A20(*(_QWORD*)(*(_QWORD*)v1 + 16i64), 1i64, v5, v3);
		if (v25 < 0)
		{
			*(_DWORD*)(v1 + 168) = 0;
		}
		else if (v25 == 1)
		{
			*(_DWORD*)(v1 + 168) = 3072;
		}
		else
		{
			v26 = *((_QWORD*)*v3 + 4);
			v27 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)v26 + 56i64))(
				v26,
				0i64,
				0i64,
				2i64);
			v28 = v27;
			if (v27)
			{
				v29 = v27;
				(*(void(__fastcall**)(_QWORD, _QWORD, __int64*, __int64))(**(_QWORD**)(v1 + 16) + 72i64))(
					*(_QWORD*)(v1 + 16),
					0i64,
					&v42,
					1i64);
				v30 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v42 + 16i64))(v42);
				v31 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v42 + 24i64))(v42);
				for (i = 0; i < 0x10; ++i)
				{
					v33 = 0;
					v34 = (_WORD*)v31;
					do
					{
						if ((*v34 & 0x8000) == 0)
						{
							v35 = v33 + 33 * i;
							v29 += 24i64;
							*(_WORD*)(v29 - 22) = v35;
							*(_WORD*)(v29 - 14) = v35;
							*(_WORD*)(v29 - 16) = v35 + 1;
							*(_WORD*)(v29 - 2) = v35 + 1;
							*(_WORD*)(v29 - 24) = v35 + 17;
							*(_WORD*)(v29 - 18) = v35 + 17;
							*(_WORD*)(v29 - 20) = v35 + 33;
							*(_WORD*)(v29 - 10) = v35 + 33;
							*(_WORD*)(v29 - 12) = v35 + 17;
							*(_WORD*)(v29 - 6) = v35 + 17;
							*(_WORD*)(v29 - 8) = v35 + 34;
							*(_WORD*)(v29 - 4) = v35 + 34;
						}
						++v33;
						++v34;
					} while (v33 < 0x10);
					v31 += *(int*)(v30 + 44);
				}
				v36 = v42;
				*(_DWORD*)(a1 + 168) = (v29 - v28) >> 1;
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v36 + 8i64))(v36);
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 64i64))(v26);
			}
		}
	}
}
// 14037E54D: ignored the value written to the shadow area of the succeeding call
// 14037E5A0: variable 'v13' is possibly undefined
// 14037E5D4: variable 'v15' is possibly undefined
// 14037E5E0: variable 'v16' is possibly undefined
// 14037E6D0: variable 'v20' is possibly undefined
// 14037E70C: variable 'v23' is possibly undefined
// 14037E6F1: variable 'v22' is possibly undefined
// 14037E718: variable 'v24' is possibly undefined
// 140C44568: using guessed type int dword_140C44568;
// 140C44574: using guessed type int dword_140C44574;

