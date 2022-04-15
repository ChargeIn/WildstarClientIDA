#include "../winhttp.h"

//----- (000000014029DEC0) ----------------------------------------------------
__int64 __fastcall sub_14029DEC0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // r9
	__int64 result; // rax
	__int64 v5; // rdx
	__int64 v6; // rax
	int v7; // edi
	__int64 v8; // rax
	int v9; // eax
	int v10; // eax
	__int64 v11; // rax
	int v12; // esi
	__int64 v13; // rax
	__int64 v14; // rdx
	__int64 v15; // rcx
	int v16; // eax
	int v17; // eax
	int v18; // eax
	__int64 v19; // rax
	__int64 v20; // rdx
	__int64 v21; // rax
	__int64 v22; // rcx
	__int64 v23; // [rsp+20h] [rbp-60h] BYREF
	int v24; // [rsp+28h] [rbp-58h] BYREF
	__int64 v25; // [rsp+2Ch] [rbp-54h]
	int v26; // [rsp+34h] [rbp-4Ch]
	int v27; // [rsp+40h] [rbp-40h] BYREF
	int v28; // [rsp+44h] [rbp-3Ch]
	int v29; // [rsp+48h] [rbp-38h]
	int v30; // [rsp+4Ch] [rbp-34h]
	int v31; // [rsp+50h] [rbp-30h]
	__int64 v32; // [rsp+54h] [rbp-2Ch]
	int v33; // [rsp+5Ch] [rbp-24h]
	__int64 v34; // [rsp+60h] [rbp-20h]
	int v35; // [rsp+68h] [rbp-18h]

	if (!*(_QWORD*)(a1 + 104))
	{
		v2 = *(_QWORD*)(a1 + 88);
		v3 = a1 + 104;
		if (v2)
		{
			result = (*(__int64(__fastcall**)(__int64, _QWORD, void*, __int64))(*(_QWORD*)v2 + 72i64))(
				v2,
				0i64,
				&unk_140B61C60,
				v3);
			if ((int)result < 0)
				return result;
			(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a1 + 104) + 80i64))(*(_QWORD*)(a1 + 104), &v27);
			v5 = *(_QWORD*)(a1 + 104);
			v24 = v31;
			v6 = *(_QWORD*)(a1 + 16);
			v25 = 4i64;
			v7 = (*(__int64(__fastcall**)(_QWORD, __int64, int*, __int64))(**(_QWORD**)(v6 + 6336) + 72i64))(
				*(_QWORD*)(v6 + 6336),
				v5,
				&v24,
				a1 + 112);
			if (v7 < 0)
			{
				v8 = 0x141DE48E8i64;
			LABEL_6:
				v23 = v8;
				sub_1401A3130(14, 2, &v23, (unsigned int)v7);
				return (unsigned int)v7;
			}
		}
		else
		{
			v9 = *(_DWORD*)(a1 + 24);
			v29 = 1;
			v30 = 1;
			v27 = v9;
			v10 = *(_DWORD*)(a1 + 28);
			v32 = 1i64;
			v28 = v10;
			v11 = *(int*)(a1 + 32);
			v33 = 0;
			LODWORD(v11) = dword_140AE7F90[v11];
			v34 = 32i64;
			v35 = 0;
			v31 = v11;
			v12 = (*(__int64(__fastcall**)(_QWORD, int*, _QWORD, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6336i64)
				+ 40i64))(
					*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6336i64),
					&v27,
					0i64,
					v3);
			if (v12 < 0)
			{
				v13 = 0x141DE47E8i64;
			LABEL_9:
				v23 = v13;
				sub_1401A3130(14, 2, &v23, (unsigned int)v12);
				return (unsigned int)v12;
			}
			v14 = *(_QWORD*)(a1 + 104);
			v25 = 4i64;
			v24 = v31;
			v7 = (*(__int64(__fastcall**)(_QWORD, __int64, int*, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6336i64)
				+ 72i64))(
					*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6336i64),
					v14,
					&v24,
					a1 + 112);
			if (v7 < 0)
			{
				v8 = 0x141DE54B0i64;
				goto LABEL_6;
			}
		}
	}
	if (!*(_QWORD*)(a1 + 128))
	{
		v15 = *(int*)(a1 + 36);
		if ((int)v15 < 27)
		{
			v16 = *(_DWORD*)(a1 + 24);
			v29 = 1;
			v30 = 1;
			v27 = v16;
			v17 = *(_DWORD*)(a1 + 28);
			v32 = 1i64;
			v28 = v17;
			v18 = dword_140AE7F90[v15];
			v33 = 0;
			v31 = v18;
			v19 = *(_QWORD*)(a1 + 16);
			v34 = 64i64;
			v35 = 0;
			v12 = (*(__int64(__fastcall**)(_QWORD, int*, _QWORD, __int64))(**(_QWORD**)(v19 + 6336) + 40i64))(
				*(_QWORD*)(v19 + 6336),
				&v27,
				0i64,
				a1 + 128);
			if (v12 < 0)
			{
				v13 = 0x141DE5478i64;
				goto LABEL_9;
			}
			v20 = *(_QWORD*)(a1 + 128);
			v25 = 3i64;
			v24 = v31;
			v21 = *(_QWORD*)(a1 + 16);
			v26 = 0;
			v7 = (*(__int64(__fastcall**)(_QWORD, __int64, int*, __int64))(**(_QWORD**)(v21 + 6336) + 80i64))(
				*(_QWORD*)(v21 + 6336),
				v20,
				&v24,
				a1 + 136);
			if (v7 < 0)
			{
				v8 = 0x141DE5248i64;
				goto LABEL_6;
			}
		}
	}
	v22 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 120) = *(_DWORD*)(v22 + 240) - 1;
	*(_DWORD*)(a1 + 144) = *(_DWORD*)(v22 + 240) - 1;
	return 0i64;
}
// 140AE7F90: using guessed type _DWORD dword_140AE7F90[28];

