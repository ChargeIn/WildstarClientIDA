//----- (00000001401110B0) ----------------------------------------------------
__int64 __fastcall sub_1401110B0(__int64 a1)
{
	__int64 v2; // r8
	__int64 v3; // rdx
	__int64 v4; // rax
	__int64 v5; // r8
	__int64 v6; // rax
	unsigned __int64 v8; // r15
	unsigned __int64 v9; // rdi
	__int64 v10; // rax
	unsigned __int64 v11; // rdx
	unsigned __int64 v12; // r14
	unsigned __int64 v13; // rsi
	__int64 v14; // rbp
	__int64 v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rax
	__int64 v18; // rdi
	__int64 v19; // r9
	__int64 v20; // rcx
	__int64 v21; // rdx
	__int64 v22; // rsi
	__int64 v23; // rdx
	__int64 v24; // rcx
	float v25; // [rsp+60h] [rbp+8h] BYREF
	float v26; // [rsp+68h] [rbp+10h] BYREF
	int v27; // [rsp+70h] [rbp+18h] BYREF
	unsigned __int64 v28; // [rsp+78h] [rbp+20h] BYREF

	if (*(char*)(a1 + 664) >= 0)
	{
		if ((*(_BYTE*)(a1 + 664) & 1) == 0)
			return 0i64;
		v28 = *(_QWORD*)(a1 + 1024);
		sub_14010FFB0(a1);
		v8 = *(_QWORD*)(a1 + 1248);
		v9 = 0i64;
		v10 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 72i64))(*(_QWORD*)(a1 + 1080));
		v11 = v28;
		if (v28 == v10)
		{
			if (!v28)
				goto LABEL_36;
			v9 = v8 - 1;
		}
		else
		{
			v12 = 0i64;
			if (!v8)
				goto LABEL_36;
			v13 = *(_QWORD*)(a1 + 1024);
			v14 = 0i64;
			while (1)
			{
				v15 = *(_QWORD*)(a1 + 1240);
				if (v13 >= *(_QWORD*)(v15 + v14) && v13 < *(_QWORD*)(v15 + v14 + 8))
					break;
				v16 = *(_QWORD*)(v15 + v14 + 8);
				if (v13 == v16)
				{
					if (*(_BYTE*)(a1 + 1064))
						break;
					if (v13 == v16)
					{
						v13 = *(_QWORD*)(a1 + 1024);
						if (*(_WORD*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 64i64))(*(_QWORD*)(a1 + 1080))
							+ 2 * v13) == 10)
							v9 = v12;
					}
				}
				if (v13 == *(_QWORD*)(*(_QWORD*)(a1 + 1240) + v14 + 8) && v12 == v8 - 1)
					v9 = v12;
				++v12;
				v14 += 24i64;
				if (v12 >= v8)
					goto LABEL_23;
			}
			v9 = v12;
		LABEL_23:
			v11 = v28;
		}
		if (v9)
		{
			v17 = *(_QWORD*)(a1 + 1240);
			if (v9 >= v8)
			{
				v11 = *(_QWORD*)(v17 + 24 * v9 - 24);
				goto LABEL_35;
			}
			v18 = 3 * v9;
			v19 = *(_QWORD*)(v17 + 8 * v18);
			if (v11 == v19)
			{
				v11 = *(_QWORD*)(v17 + 8 * v18 - 24);
			LABEL_35:
				v28 = v11;
				goto LABEL_36;
			}
			v20 = *(_QWORD*)(a1 + 1080);
			v26 = 0.0;
			v27 = 0;
			v25 = 0.0;
			(*(void(__fastcall**)(__int64, __int64, float*))(*(_QWORD*)v20 + 168i64))(v20, v19, &v26);
			(*(void(__fastcall**)(_QWORD, _QWORD, int*))(**(_QWORD**)(a1 + 1080) + 168i64))(
				*(_QWORD*)(a1 + 1080),
				*(_QWORD*)(*(_QWORD*)(a1 + 1240) + 8 * v18 - 24),
				&v27);
			(*(void(__fastcall**)(_QWORD, _QWORD, float*))(**(_QWORD**)(a1 + 1080) + 168i64))(
				*(_QWORD*)(a1 + 1080),
				*(_QWORD*)(a1 + 1024),
				&v25);
			v22 = *(_QWORD*)(a1 + 1240);
			v25 = v25 - v26;
			if (v25 >= *(float*)(v22 + 8 * v18 - 8))
			{
				if (*(_QWORD*)(v22 + 8 * v18 - 16) > *(_QWORD*)(v22 + 8 * v18 - 24)
					&& *(_WORD*)((*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 1080) + 64i64))(*(_QWORD*)(a1 + 1080))
						+ 2i64 * *(_QWORD*)(v22 + 8 * v18 - 16)
						- 2) == 10)
				{
					v23 = *(_QWORD*)(*(_QWORD*)(a1 + 1240) + 8 * v18 - 16);
					*(_BYTE*)(a1 + 1064) = 0;
					v11 = v23 - 1;
					goto LABEL_35;
				}
				v24 = *(_QWORD*)(a1 + 1240);
				v11 = *(_QWORD*)(v24 + 8 * v18 - 16);
				v28 = v11;
				*(_BYTE*)(a1 + 1064) = *(_QWORD*)(v24 + 8 * v18 - 16) > *(_QWORD*)(v24 + 8 * v18 - 24);
			}
			else
			{
				(*(void(__fastcall**)(_QWORD, __int64, unsigned __int64*))(**(_QWORD**)(a1 + 1080) + 176i64))(
					*(_QWORD*)(a1 + 1080),
					v21,
					&v28);
				v11 = v28;
			}
		}
	LABEL_36:
		sub_1401116A0(a1, v11);
		return 0i64;
	}
	v2 = *(_QWORD*)(a1 + 1280);
	if (v2)
	{
		v3 = *(_QWORD*)(a1 + 1288);
		v4 = *(_QWORD*)a1;
		v5 = v2 - 1;
		*(_QWORD*)(a1 + 1280) = v5;
		(*(void(__fastcall**)(__int64, _QWORD))(v4 + 80))(a1, *(_QWORD*)(32 * v5 + v3 + 8));
		v6 = *(_QWORD*)(a1 + 1024);
		*(_QWORD*)(a1 + 1032) = -1i64;
		*(_QWORD*)(a1 + 1048) = v6;
		*(_QWORD*)(a1 + 1040) = v6;
		return 0i64;
	}
	return 0i64;
}
// 1401112EF: variable 'v21' is possibly undefined

