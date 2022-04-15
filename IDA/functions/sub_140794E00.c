//----- (0000000140794E00) ----------------------------------------------------
__int64 __fastcall sub_140794E00(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rax

	v1 = (__int64)(*(_QWORD*)(a1 + 16) - *(_QWORD*)(a1 + 24)) >> 4;
	if (*(_WORD*)(a1 + 96) > *(_WORD*)(a1 + 98))
		sub_14005ABE0(a1, aAttemptToYield);
	v2 = *(_QWORD*)(a1 + 16);
	*(_BYTE*)(a1 + 10) = 1;
	*(_QWORD*)(a1 + 24) = v2 - 16i64 * (int)v1;
	return 0xFFFFFFFFi64;
}

