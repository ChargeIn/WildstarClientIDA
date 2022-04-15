//----- (0000000140552EB0) ----------------------------------------------------
__int64 __fastcall sub_140552EB0(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 v5; // rax
	__int64 i; // rbx
	unsigned int v7; // ecx

	v2 = *(_QWORD*)(a2 + 272);
	if (!v2)
		return 0i64;
	v5 = *(_QWORD*)(a1 + 8);
	for (i = 176i64; i < 188; i += 4i64)
	{
		if (*(_DWORD*)(i + v5))
		{
			v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 40i64))(v2);
			v5 = *(_QWORD*)(a1 + 8);
			if (*(_DWORD*)(i + v5 + 24))
			{
				if (v7 > *(_DWORD*)(i + v5 + 12))
					return 0i64;
			}
			else if (v7 < *(_DWORD*)(i + v5 + 12))
			{
				return 0i64;
			}
		}
	}
	return 1i64;
}

