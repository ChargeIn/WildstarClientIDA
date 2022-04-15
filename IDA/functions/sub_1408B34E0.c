//----- (00000001408B34E0) ----------------------------------------------------
__int64 __fastcall sub_1408B34E0(__int64 a1)
{
	int* v2; // rcx
	__int64 v3; // rax
	__int64 v4; // rdi
	unsigned int v5; // esi
	int* v6; // rcx

	v2 = *(int**)(a1 + 40);
	if (v2)
		sub_1407E4830(v2, 0i64, (unsigned int)(4 * *(_DWORD*)(a1 + 64)));
	v3 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 76) = 0;
	v4 = 0i64;
	if ((*(_DWORD*)(v3 + 24) & 0xFFFFFFFC) != 0)
	{
		v5 = 3;
		do
		{
			*(_OWORD*)(a1 + 16 * (v4 + 31)) = 0i64;
			v6 = *(int**)(a1 + 8 * v4 + 272);
			if (v6)
				sub_1407E4830(v6, 0i64, (unsigned int)(16 * *(_DWORD*)(a1 + 4i64 * v5 + 80)));
			v4 = (unsigned int)(v4 + 1);
			v5 += 4;
		} while ((unsigned int)v4 < *(_DWORD*)(*(_QWORD*)(a1 + 16) + 24i64) >> 2);
	}
	*(_QWORD*)(a1 + 560) = 0i64;
	return 1i64;
}

