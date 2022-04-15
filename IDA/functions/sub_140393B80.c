//----- (0000000140393B80) ----------------------------------------------------
__int64 __fastcall sub_140393B80(__int64 a1, __int64 a2)
{
	__int64 v5; // rax
	int v6; // ebx
	__int64* i; // rdi

	if (*(_DWORD*)(a1 + 196))
		return 1i64;
	v5 = *(_QWORD*)(a1 + 40);
	if (v5 && !*(_DWORD*)(v5 + 32))
		*(_DWORD*)(v5 + 32) = 1;
	v6 = 0;
	for (i = (__int64*)(a1 + 48); !*i || (unsigned int)sub_1403756E0(*i, a2); ++i)
	{
		if ((unsigned int)++v6 >= 4)
		{
			*(_DWORD*)(a1 + 196) = 1;
			return 1i64;
		}
	}
	return 0i64;
}

