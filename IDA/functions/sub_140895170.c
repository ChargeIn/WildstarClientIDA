//----- (0000000140895170) ----------------------------------------------------
__int64 __fastcall sub_140895170(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	__int64 v3; // r8

	result = *(_QWORD*)(a1 + 8);
	v3 = 0i64;
	if (result)
	{
		while (*(_DWORD*)(a2 + 16) >= *(_DWORD*)(result + 16))
		{
			v3 = result;
			result = *(_QWORD*)(result + 8);
			if (!result)
				goto LABEL_4;
		}
		*(_QWORD*)(a2 + 8) = result;
		if (v3)
			*(_QWORD*)(v3 + 8) = a2;
		else
			*(_QWORD*)(a1 + 8) = a2;
	}
	else
	{
	LABEL_4:
		*(_QWORD*)(a2 + 8) = 0i64;
		result = *(_QWORD*)(a1 + 16);
		if (result)
			*(_QWORD*)(result + 8) = a2;
		else
			*(_QWORD*)(a1 + 8) = a2;
		*(_QWORD*)(a1 + 16) = a2;
	}
	return result;
}

