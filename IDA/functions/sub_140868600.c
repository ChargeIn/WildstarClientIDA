//----- (0000000140868600) ----------------------------------------------------
__int64 __fastcall sub_140868600(__int64 a1)
{
	__int64 v1; // rbx
	__int64 v3; // rdx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 136);
	if (v1 == *(_QWORD*)(a1 + 144))
	{
		*(_QWORD*)(a1 + 144) = v1;
	}
	else
	{
		do
		{
			v3 = *(_QWORD*)(v1 + 16);
			if (v3)
			{
				sub_140881720(dword_140C10F20, v3);
				*(_QWORD*)(v1 + 16) = 0i64;
			}
			*(_QWORD*)(v1 + 24) = 0i64;
			v1 += 32i64;
		} while (v1 != *(_QWORD*)(a1 + 144));
		result = *(_QWORD*)(a1 + 136);
		*(_QWORD*)(a1 + 144) = result;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

