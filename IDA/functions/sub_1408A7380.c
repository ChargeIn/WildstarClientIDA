//----- (00000001408A7380) ----------------------------------------------------
__int64 __fastcall sub_1408A7380(__int64 a1, __int64 a2)
{
	__int64 v3; // rax
	unsigned int i; // edx
	__int64 v6; // r8
	__int64 v7; // rcx

	v3 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 8i64))(a2, 12i64 * *(unsigned int*)(a1 + 276));
	*(_QWORD*)(a1 + 24) = v3;
	if (!v3)
		return 52i64;
	for (i = 0;
		i < *(_DWORD*)(a1 + 276);
		*(float*)(*(_QWORD*)(a1 + 24) + 4 * v6 + 8) = 1.0 - (float)(251.32742 / (float)*(int*)(a1 + 280)))
	{
		v6 = 3i64 * i;
		v7 = *(_QWORD*)(a1 + 24) + 12i64 * i;
		if (v7)
		{
			*(_QWORD*)v7 = 0i64;
			*(_DWORD*)(v7 + 8) = 0;
		}
		++i;
	}
	return 1i64;
}

