//----- (000000014083A8B0) ----------------------------------------------------
__int64 __fastcall sub_14083A8B0(__int64 a1)
{
	__int64* i; // rbx
	__int64 v3; // rdi
	int v4; // ebp
	__int64 result; // rax

	for (i = *(__int64**)a1; i != *(__int64**)(a1 + 8); ++i)
	{
		v3 = *i;
		sub_140867E40(*i);
		v4 = dword_140C10F20;
		if (v3)
		{
			nullsub_1(v3);
			sub_140881720(v4, v3);
		}
	}
	result = *(_QWORD*)a1;
	if (*(_QWORD*)a1)
	{
		*(_QWORD*)(a1 + 8) = result;
		sub_140881720(dword_140C10F20, result);
		result = 0i64;
		*(_QWORD*)a1 = 0i64;
		*(_QWORD*)(a1 + 8) = 0i64;
		*(_DWORD*)(a1 + 16) = 0;
	}
	return result;
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C10F20: using guessed type int dword_140C10F20;

