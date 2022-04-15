//----- (000000014083B110) ----------------------------------------------------
__int64 __fastcall sub_14083B110(__int64 a1, __int64 a2)
{
	__int64* i; // rbx
	__int64 v4; // rsi
	int v5; // edi
	__int64 result; // rax
	__int64 v7; // rdx

	for (i = *(__int64**)a2; i != *(__int64**)(a2 + 8); ++i)
	{
		v4 = *i;
		*(_DWORD*)(v4 + 24) = 0;
		sub_140867FD0(v4, 0);
		sub_140868390(v4);
		v5 = dword_140C10F20;
		nullsub_1(v4);
		result = sub_140881720(v5, v4);
	}
	v7 = *(_QWORD*)a2;
	if (*(_QWORD*)a2)
	{
		*(_QWORD*)(a2 + 8) = v7;
		result = sub_140881720(dword_140C10F20, v7);
		*(_QWORD*)a2 = 0i64;
		*(_QWORD*)(a2 + 8) = 0i64;
		*(_DWORD*)(a2 + 16) = 0;
	}
	return result;
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C10F20: using guessed type int dword_140C10F20;

