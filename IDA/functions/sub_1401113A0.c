#include "../winhttp.h"

//----- (00000001401113A0) ----------------------------------------------------
__int64 __fastcall sub_1401113A0(__int64 a1)
{
	unsigned __int64 v2; // rcx
	unsigned __int64 v3; // rax
	unsigned __int64 v4; // rcx
	bool v5; // cf
	__int64 v6; // rax
	__int64 v7; // rdx
	__int64 v8; // rax
	unsigned __int64 v10; // r8
	unsigned __int64 v11; // rdx
	unsigned __int64 v12; // rcx
	unsigned __int64* v13; // rax
	__int64 v14; // rcx
	__int64 v15; // rdi
	__int64 v16; // rcx
	__int64 v17; // rdx
	__int64 v18; // rsi
	unsigned __int64 v19; // rdx
	unsigned __int64 v20; // rax
	__int64 v21; // rdx
	__int64 v22; // rcx
	float v23; // [rsp+40h] [rbp+8h] BYREF
	float v24; // [rsp+48h] [rbp+10h] BYREF
	int v25; // [rsp+50h] [rbp+18h] BYREF
	unsigned __int64 v26; // [rsp+58h] [rbp+20h] BYREF

	if (*(char*)(a1 + 664) >= 0)
	{
		if ((*(_BYTE*)(a1 + 664) & 1) != 0)
		{
			v26 = *(_QWORD*)(a1 + 1024);
			sub_14010FFB0(a1);
			v10 = *(_QWORD*)(a1 + 1248);
			v11 = 0i64;
			if (v10)
			{
				v12 = *(_QWORD*)(a1 + 1024);
				v13 = *(unsigned __int64**)(a1 + 1240);
				do
				{
					if (v12 >= *v13 && v12 < v13[1])
						break;
					if (v12 == v13[1] && *(_BYTE*)(a1 + 1064))
						break;
					++v11;
					v13 += 3;
				} while (v11 < v10);
			}
			v14 = *(_QWORD*)(a1 + 1080);
			if (v11 >= v10 - 1)
			{
				v26 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v14 + 72i64))(v14);
				sub_1401115F0(a1, v26);
				return 0i64;
			}
			v24 = 0.0;
			v25 = 0;
			v23 = 0.0;
			v15 = 3 * v11;
			(*(void(__fastcall**)(__int64, _QWORD, float*))(*(_QWORD*)v14 + 168i64))(
				v14,
				*(_QWORD*)(*(_QWORD*)(a1 + 1240) + 24 * v11),
				&v24);
			(*(void(__fastcall**)(_QWORD, _QWORD, int*))(**(_QWORD**)(a1 + 1080) + 168i64))(
				*(_QWORD*)(a1 + 1080),
				*(_QWORD*)(*(_QWORD*)(a1 + 1240) + 8 * v15 + 24),
				&v25);
			(*(void(__fastcall**)(_QWORD, _QWORD, float*))(**(_QWORD**)(a1 + 1080) + 168i64))(
				*(_QWORD*)(a1 + 1080),
				*(_QWORD*)(a1 + 1024),
				&v23);
			v16 = *(_QWORD*)(a1 + 1080);
			v23 = v23 - v24;
			(*(void(__fastcall**)(__int64, __int64, unsigned __int64*))(*(_QWORD*)v16 + 176i64))(v16, v17, &v26);
			v18 = *(_QWORD*)(a1 + 1240);
			v19 = v26;
			v20 = *(_QWORD*)(v18 + 8 * v15 + 32);
			if (v26 >= v20)
			{
				if (v20 > *(_QWORD*)(v18 + 8 * v15 + 24)
					&& *(_WORD*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 64i64))(*(_QWORD*)(a1 + 1080))
						+ 2i64 * *(_QWORD*)(v18 + 8 * v15 + 32)
						- 2) == 10)
				{
					v21 = *(_QWORD*)(*(_QWORD*)(a1 + 1240) + 8 * v15 + 32);
					*(_BYTE*)(a1 + 1064) = 0;
					v19 = v21 - 1;
					v26 = v19;
				}
				else
				{
					v22 = *(_QWORD*)(a1 + 1240);
					v19 = *(_QWORD*)(v22 + 8 * v15 + 32);
					v26 = v19;
					*(_BYTE*)(a1 + 1064) = *(_QWORD*)(v22 + 8 * v15 + 32) > *(_QWORD*)(v22 + 8 * v15 + 24);
				}
			}
			sub_1401115F0(a1, v19);
		}
		return 0i64;
	}
	v2 = *(_QWORD*)(a1 + 1280);
	v3 = *(_QWORD*)(a1 + 1296);
	if (v2 >= v3)
		return 0i64;
	v4 = v2 + 1;
	v5 = v4 < v3;
	v6 = *(_QWORD*)a1;
	*(_QWORD*)(a1 + 1280) = v4;
	if (v5)
		v7 = *(_QWORD*)(32 * v4 + *(_QWORD*)(a1 + 1288) + 8);
	else
		v7 = 0i64;
	(*(void(__fastcall**)(__int64, __int64))(v6 + 80))(a1, v7);
	v8 = *(_QWORD*)(a1 + 1024);
	*(_QWORD*)(a1 + 1032) = -1i64;
	*(_QWORD*)(a1 + 1048) = v8;
	*(_QWORD*)(a1 + 1040) = v8;
	return 0i64;
}
// 140111557: variable 'v17' is possibly undefined

