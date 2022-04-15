//----- (0000000140833330) ----------------------------------------------------
__int64 __fastcall sub_140833330(__int64* a1)
{
	__int64 v1; // r8
	__int64 i; // rdx
	__int64 result; // rax
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx

	v1 = *a1;
	for (i = qword_140C61CC8; ; i += 8i64)
	{
		if (i == qword_140C61CD0)
		{
			result = *(_QWORD*)(v1 + 184);
			if (!result)
				return 0i64;
			v7 = *(_QWORD*)(result + 16);
			if ((!v7 || *(_QWORD*)(v7 + 24) != v1) && *((_DWORD*)a1 + 2) != 5)
				return 0i64;
			return result;
		}
		result = *(_QWORD*)(*(_QWORD*)i + 8i64);
		if (result)
			break;
	LABEL_10:
		;
	}
	while (1)
	{
		v5 = *(_QWORD*)(result + 16);
		if (v5)
		{
			if (*(_QWORD*)(v5 + 24) == v1)
				break;
		}
		if (*((_DWORD*)a1 + 2) == 5)
		{
			v6 = *(_QWORD*)(result + 24);
			if (v6)
			{
				if (*(_QWORD*)(v6 + 24) == v1)
					break;
			}
		}
		result = *(_QWORD*)(result + 8);
		if (!result)
			goto LABEL_10;
	}
	if (*(_DWORD*)(result + 76))
		*((_BYTE*)a1 + 16) = 1;
	return result;
}
// 140C61CC8: using guessed type __int64 qword_140C61CC8;
// 140C61CD0: using guessed type __int64 qword_140C61CD0;

