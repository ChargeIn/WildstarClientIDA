//----- (000000014083A400) ----------------------------------------------------
__int64 __fastcall sub_14083A400(__int64 a1)
{
	__int64 v2; // rax
	__int64 result; // rax
	__int64 v4; // rdi
	__int64* v5; // rax
	int v6; // ebx

	if ((unsigned int)((__int64)(*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) >> 3) >= *(_DWORD*)(a1 + 24))
		return 0i64;
	v2 = sub_1408819F0(dword_140C10F20, 144i64);
	if (!v2)
		return 0i64;
	result = sub_1408675F0(v2);
	v4 = result;
	if (result)
	{
		v5 = *(__int64**)(a1 + 8);
		if ((unsigned int)(((__int64)v5 - *(_QWORD*)a1) >> 3) < *(_DWORD*)(a1 + 16) && (*(_QWORD*)(a1 + 8) = v5 + 1, v5))
		{
			*v5 = v4;
			return v4;
		}
		else
		{
			v6 = dword_140C10F20;
			nullsub_1(v4);
			sub_140881720(v6, v4);
			return 0i64;
		}
	}
	return result;
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C10F20: using guessed type int dword_140C10F20;

