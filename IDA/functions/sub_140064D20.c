#include "../winhttp.h"

//----- (0000000140064D20) ----------------------------------------------------
__int64 __fastcall sub_140064D20(__int64 a1, __int64 a2)
{
	__int64 v4; // rdi
	__int64 v5; // rbx
	__int64 v6; // r13
	__int64 v7; // r15
	__int64 v8; // rbp
	__int64 v9; // rax
	__int64 v10; // r12
	__int64 v11; // rcx
	__int64 v12; // rdx
	__int64 v13; // r15
	__int64 v14; // rdi
	__int64 v15; // rbp
	int v16; // eax
	int v17; // eax
	int v18; // eax
	__int64 v19; // rax
	double v20; // xmm0_8
	int v21; // eax
	__int64 v22; // rdi
	__int64 v23; // r13
	__int64 v24; // r15
	__int64 v25; // rbp
	__int64 result; // rax
	__int64 v27; // rcx

	v4 = (int)sub_1400648D0(a1);
	v5 = 0i64;
	if ((unsigned __int64)((int)v4 + 1) > 0xFFFFFFFFFFFFFFFi64)
		sub_14005ABE0(*(_QWORD*)a1, aMemoryAllocati);
	v6 = *(_QWORD*)a1;
	v7 = *(_QWORD*)(*(_QWORD*)a1 + 32i64);
	v8 = 16 * v4;
	v9 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(v7 + 16))(*(_QWORD*)(v7 + 24), 0i64, 0i64, 16 * v4);
	if (!v9 && v8)
		sub_140061040(v6, 4);
	*(_QWORD*)(v7 + 120) += v8;
	*(_QWORD*)(a2 + 16) = v9;
	*(_DWORD*)(a2 + 76) = v4;
	v10 = v4;
	if ((int)v4 > 0)
	{
		v11 = 0i64;
		v12 = v4;
		do
		{
			v11 += 16i64;
			*(_DWORD*)(v11 + *(_QWORD*)(a2 + 16) - 8) = 0;
			--v12;
		} while (v12);
	}
	v13 = 0i64;
	if ((int)v4 > 0)
	{
		v14 = 0i64;
		do
		{
			v15 = *(_QWORD*)(a2 + 16);
			v16 = sub_1400647E0(a1);
			if (v16)
			{
				v17 = v16 - 1;
				if (v17)
				{
					v18 = v17 - 2;
					if (v18)
					{
						if (v18 != 1)
						{
							sub_14005B130(
								*(_QWORD*)a1,
								(unsigned __int64*)"%s: %s in precompiled chunk",
								*(const char**)(a1 + 24),
								aBadConstant);
							sub_140061040(*(_QWORD*)a1, 3);
						}
						v19 = sub_140064AE0(a1);
						*(_DWORD*)(v14 + v15 + 8) = 4;
						*(_QWORD*)(v14 + v15) = v19;
					}
					else
					{
						v20 = sub_1400649F0(a1);
						*(_DWORD*)(v14 + v15 + 8) = 3;
						*(double*)(v14 + v15) = v20;
					}
				}
				else
				{
					v21 = sub_1400647E0(a1);
					*(_DWORD*)(v14 + v15 + 8) = 1;
					*(_DWORD*)(v14 + v15) = v21 != 0;
				}
			}
			else
			{
				*(_DWORD*)(v14 + v15 + 8) = 0;
			}
			++v13;
			v14 += 16i64;
		} while (v13 < v10);
	}
	v22 = (int)sub_1400648D0(a1);
	if ((unsigned __int64)((int)v22 + 1) > 0x1FFFFFFFFFFFFFFFi64)
		sub_14005ABE0(*(_QWORD*)a1, aMemoryAllocati);
	v23 = *(_QWORD*)a1;
	v24 = 8 * v22;
	v25 = *(_QWORD*)(*(_QWORD*)a1 + 32i64);
	result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(v25 + 16))(
		*(_QWORD*)(v25 + 24),
		0i64,
		0i64,
		8 * v22);
	if (!result && v24)
		sub_140061040(v23, 4);
	*(_QWORD*)(v25 + 120) += v24;
	*(_QWORD*)(a2 + 32) = result;
	*(_DWORD*)(a2 + 88) = v22;
	v27 = 0i64;
	if (v22 > 0)
	{
		do
		{
			++v27;
			*(_QWORD*)(*(_QWORD*)(a2 + 32) + 8 * v27 - 8) = 0i64;
		} while (v27 < v22);
		do
		{
			result = sub_140065210(a1, *(_QWORD*)(a2 + 64));
			++v5;
			*(_QWORD*)(*(_QWORD*)(a2 + 32) + 8 * v5 - 8) = result;
		} while (v5 < v22);
	}
	return result;
}
// 140064EE4: conditional instruction was optimized away because rdi.8 is in (1..7FFFFFFF)
// 140065210: using guessed type __int64 __fastcall sub_140065210(_QWORD, _QWORD);

