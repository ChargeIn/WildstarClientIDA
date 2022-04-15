//----- (0000000140848850) ----------------------------------------------------
char __fastcall sub_140848850(__int64 a1, __int64 a2)
{
	int v3; // ebx
	__int64 i; // rdi
	__int64 v5; // rcx

	v3 = 0;
	for (i = a1 + 928; ; i += 8i64)
	{
		if (*(_QWORD*)i)
		{
			v5 = *(_QWORD*)(*(_QWORD*)i + 24i64);
			if (v5)
			{
				if (sub_1408628B0(v5, a2))
					break;
			}
		}
		if ((unsigned int)++v3 >= 4)
			return 0;
	}
	return 1;
}

