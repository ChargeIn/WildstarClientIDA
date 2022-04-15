//----- (00000001400620B0) ----------------------------------------------------
signed __int64 __fastcall sub_1400620B0(__int64 a1, __int64* a2)
{
	int v4; // esi
	__int64(__fastcall * v5)(__int64, __int64, __int64*, __int64); // r10
	__int64 v6; // r14
	__int64 v7; // rax
	int v8; // ebp
	__int64 v9; // r15
	__int64 v10; // rsi
	__int64 v11; // rdi
	__int64 v12; // rax
	__int64 v13; // r8
	__int64 v14; // rdx
	char v15; // cl
	__int64 v16; // rax
	__int64 v17; // rax
	signed __int64 result; // rax
	int v19; // edx
	int v20; // edx

	v4 = sub_1400628F0(*a2);
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v5 = (__int64(__fastcall*)(__int64, __int64, __int64*, __int64))sub_140066500;
	if (v4 == byte_140C1E00C)
		v5 = (__int64(__fastcall*)(__int64, __int64, __int64*, __int64))sub_1400654F0;
	v6 = v5(a1, *a2, a2 + 1, a2[4]);
	v7 = sub_140060B60(a1, *(unsigned __int8*)(v6 + 112), *(_QWORD*)(a1 + 120));
	v8 = 0;
	*(_QWORD*)(v7 + 32) = v6;
	v9 = v7;
	if (*(_BYTE*)(v6 + 112))
	{
		v10 = v7 + 40;
		do
		{
			v11 = *(_QWORD*)(a1 + 32);
			v12 = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(v11 + 16))(
				*(_QWORD*)(v11 + 24),
				0i64,
				0i64,
				40i64);
			v13 = v12;
			if (!v12)
				sub_140061040(a1, 4);
			*(_QWORD*)(v11 + 120) += 40i64;
			v14 = *(_QWORD*)(a1 + 32);
			++v8;
			v10 += 8i64;
			*(_QWORD*)v12 = *(_QWORD*)(v14 + 40);
			v15 = *(_BYTE*)(v14 + 32);
			*(_QWORD*)(v14 + 40) = v12;
			*(_BYTE*)(v12 + 8) = 10;
			v16 = v12 + 24;
			*(_BYTE*)(v16 - 15) = v15 & 3;
			*(_QWORD*)(v13 + 16) = v16;
			*(_DWORD*)(v16 + 8) = 0;
			*(_QWORD*)(v10 - 8) = v13;
		} while (v8 < *(unsigned __int8*)(v6 + 112));
	}
	v17 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v17 = v9;
	*(_DWORD*)(v17 + 8) = 6;
	result = *(_QWORD*)(a1 + 56) - *(_QWORD*)(a1 + 16);
	if (result <= 16)
	{
		v19 = *(_DWORD*)(a1 + 88);
		if (v19 < 1)
			v20 = v19 + 1;
		else
			v20 = 2 * v19;
		result = sub_140061210(a1, v20);
	}
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C1E00C: using guessed type char byte_140C1E00C;

