//----- (0000000140889B30) ----------------------------------------------------
__int64 __fastcall sub_140889B30(__int64 a1, __int64 a2)
{
	unsigned int v2; // r8d
	__int64 v3; // rax
	__int64 v5; // rax

	v2 = (unsigned __int16)-- * (_WORD*)(a2 + 32);
	if ((_WORD)v2)
	{
	LABEL_10:
		++* (_DWORD*)(a1 + 76);
		return v2;
	}
	if (*(_DWORD*)(a2 + 28) == -1)
	{
		v5 = *(_QWORD*)(a1 + 32);
		if (!v5)
		{
			*(_QWORD*)(a1 + 40) = a2;
			*(_QWORD*)(a1 + 32) = a2;
			*(_QWORD*)(a2 + 16) = 0i64;
			++* (_DWORD*)(a1 + 24);
			++* (_DWORD*)(a1 + 76);
			return v2;
		}
		*(_QWORD*)(a2 + 16) = v5;
		*(_QWORD*)(a1 + 32) = a2;
		++* (_DWORD*)(a1 + 24);
		goto LABEL_10;
	}
	*(_QWORD*)(a2 + 16) = 0i64;
	v3 = *(_QWORD*)(a1 + 40);
	if (v3)
		*(_QWORD*)(v3 + 16) = a2;
	else
		*(_QWORD*)(a1 + 32) = a2;
	*(_QWORD*)(a1 + 40) = a2;
	++* (_DWORD*)(a1 + 24);
	++* (_DWORD*)(a1 + 76);
	return v2;
}

