//----- (0000000140064F70) ----------------------------------------------------
__int64 __fastcall sub_140064F70(__int64 a1, __int64 a2)
{
	__int64 v4; // r14
	__int64 v5; // rbx
	__int64 v6; // r13
	__int64 v7; // r15
	__int64 v8; // rbp
	int* v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rbp
	__int64 v12; // r13
	__int64 v13; // r15
	__int64 v14; // r14
	__int64 v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rdx
	__int64 v18; // r14
	__int64 v19; // rbp
	__int64 v20; // r13
	__int64 v21; // r15
	__int64 v22; // r14
	__int64 result; // rax
	__int64 v24; // rcx

	v4 = (int)sub_1400648D0(a1);
	v5 = 0i64;
	if ((unsigned __int64)((int)v4 + 1) > 0x3FFFFFFFFFFFFFFFi64)
		sub_14005ABE0(*(_QWORD*)a1, aMemoryAllocati);
	v6 = *(_QWORD*)a1;
	v7 = 4 * v4;
	v8 = *(_QWORD*)(*(_QWORD*)a1 + 32i64);
	v9 = (int*)(*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(v8 + 16))(
		*(_QWORD*)(v8 + 24),
		0i64,
		0i64,
		4 * v4);
	if (!v9 && v7)
		sub_140061040(v6, 4);
	*(_QWORD*)(v8 + 120) += v7;
	v10 = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(a2 + 40) = v9;
	*(_DWORD*)(a2 + 84) = v4;
	if (sub_140062960(v10, v9, 4 * v4))
	{
		sub_14005B130(
			*(_QWORD*)a1,
			(unsigned __int64*)"%s: %s in precompiled chunk",
			*(const char**)(a1 + 24),
			aUnexpectedEnd);
		sub_140061040(*(_QWORD*)a1, 3);
	}
	v11 = (int)sub_1400648D0(a1);
	if ((unsigned __int64)((int)v11 + 1) > 0xFFFFFFFFFFFFFFFi64)
		sub_14005ABE0(*(_QWORD*)a1, aMemoryAllocati);
	v12 = *(_QWORD*)a1;
	v13 = *(_QWORD*)(*(_QWORD*)a1 + 32i64);
	v14 = 16 * v11;
	v15 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(v13 + 16))(
		*(_QWORD*)(v13 + 24),
		0i64,
		0i64,
		16 * v11);
	if (!v15 && v14)
		sub_140061040(v12, 4);
	*(_QWORD*)(v13 + 120) += v14;
	*(_QWORD*)(a2 + 48) = v15;
	*(_DWORD*)(a2 + 92) = v11;
	if (v11 > 0)
	{
		v16 = 0i64;
		v17 = v11;
		do
		{
			v16 += 16i64;
			*(_QWORD*)(v16 + *(_QWORD*)(a2 + 48) - 16) = 0i64;
			--v17;
		} while (v17);
		v18 = 0i64;
		do
		{
			*(_QWORD*)(v18 + *(_QWORD*)(a2 + 48)) = sub_140064AE0(a1);
			*(_DWORD*)(*(_QWORD*)(a2 + 48) + v18 + 8) = sub_1400648D0(a1);
			v18 += 16i64;
			*(_DWORD*)(*(_QWORD*)(a2 + 48) + v18 - 4) = sub_1400648D0(a1);
			--v11;
		} while (v11);
	}
	v19 = (int)sub_1400648D0(a1);
	if ((unsigned __int64)((int)v19 + 1) > 0x1FFFFFFFFFFFFFFFi64)
		sub_14005ABE0(*(_QWORD*)a1, aMemoryAllocati);
	v20 = *(_QWORD*)a1;
	v21 = 8 * v19;
	v22 = *(_QWORD*)(*(_QWORD*)a1 + 32i64);
	result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(v22 + 16))(
		*(_QWORD*)(v22 + 24),
		0i64,
		0i64,
		8 * v19);
	if (!result && v21)
		sub_140061040(v20, 4);
	*(_QWORD*)(v22 + 120) += v21;
	*(_QWORD*)(a2 + 56) = result;
	*(_DWORD*)(a2 + 72) = v19;
	v24 = 0i64;
	if (v19 > 0)
	{
		do
		{
			++v24;
			*(_QWORD*)(*(_QWORD*)(a2 + 56) + 8 * v24 - 8) = 0i64;
		} while (v24 < v19);
		do
		{
			result = sub_140064AE0(a1);
			++v5;
			*(_QWORD*)(*(_QWORD*)(a2 + 56) + 8 * v5 - 8) = result;
		} while (v5 < v19);
	}
	return result;
}
// 1400650B5: conditional instruction was optimized away because rbp.8 is in (1..7FFFFFFF)
// 140065184: conditional instruction was optimized away because rbp.8 is in (1..7FFFFFFF)

