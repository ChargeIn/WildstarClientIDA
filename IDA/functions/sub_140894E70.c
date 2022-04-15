//----- (0000000140894E70) ----------------------------------------------------
__int64 __fastcall sub_140894E70(__int64 a1)
{
	__int64 v1; // rbx
	__int64 i; // rdi
	__int64 v4; // rdx
	__int64 v5; // rdx
	__int64 result; // rax

	v1 = *(_QWORD*)a1;
	if (*(_QWORD*)a1)
	{
		for (i = *(_QWORD*)(a1 + 8); v1 != i; v1 += 24i64)
		{
			v4 = *(_QWORD*)(v1 + 8);
			if (v4)
			{
				sub_140881720(dword_140C10F20, v4);
				*(_QWORD*)(v1 + 8) = 0i64;
			}
			*(_QWORD*)(v1 + 16) = 0i64;
		}
		v5 = *(_QWORD*)a1;
		*(_QWORD*)(a1 + 8) = *(_QWORD*)a1;
		result = sub_140881720(dword_140C10F20, v5);
		*(_QWORD*)a1 = 0i64;
		*(_QWORD*)(a1 + 8) = 0i64;
		*(_DWORD*)(a1 + 16) = 0;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

