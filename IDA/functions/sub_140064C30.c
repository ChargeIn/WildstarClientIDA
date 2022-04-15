//----- (0000000140064C30) ----------------------------------------------------
unsigned __int64 __fastcall sub_140064C30(__int64 a1, __int64 a2)
{
	__int64 v4; // rbp
	__int64 v5; // r14
	__int64 v6; // rsi
	__int64 v7; // rdi
	int* v8; // rax
	__int64 v9; // rcx
	unsigned __int64 result; // rax

	v4 = (int)sub_1400648D0(a1);
	if ((unsigned __int64)((int)v4 + 1) > 0x3FFFFFFFFFFFFFFFi64)
		sub_14005ABE0(*(_QWORD*)a1, aMemoryAllocati);
	v5 = *(_QWORD*)a1;
	v6 = *(_QWORD*)(*(_QWORD*)a1 + 32i64);
	v7 = 4 * v4;
	v8 = (int*)(*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, __int64))(v6 + 16))(
		*(_QWORD*)(v6 + 24),
		0i64,
		0i64,
		4 * v4);
	if (!v8 && v7)
		sub_140061040(v5, 4);
	*(_QWORD*)(v6 + 120) += v7;
	v9 = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(a2 + 24) = v8;
	*(_DWORD*)(a2 + 80) = v4;
	result = sub_140062960(v9, v8, 4 * v4);
	if (result)
	{
		sub_14005B130(
			*(_QWORD*)a1,
			(unsigned __int64*)"%s: %s in precompiled chunk",
			*(const char**)(a1 + 24),
			aUnexpectedEnd);
		sub_140061040(*(_QWORD*)a1, 3);
	}
	return result;
}

