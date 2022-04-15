//----- (000000014012F590) ----------------------------------------------------
__int64 __fastcall sub_14012F590(__int64 a1)
{
	signed __int32 v2; // edx
	__int64 result; // rax
	__int64 v4; // rcx

	while (*(_QWORD*)(a1 + 8))
	{
		v2 = *(_DWORD*)a1;
		if (*(_DWORD*)a1)
		{
			while (1)
			{
				result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32*)a1, v2 - 1, v2);
				if (v2 == (_DWORD)result)
					break;
				v2 = *(_DWORD*)a1;
				if (!*(_DWORD*)a1)
					goto LABEL_9;
			}
			if (v2 == 1)
			{
				v4 = *(_QWORD*)(a1 + 8);
				if (v4)
				{
					result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
					*(_QWORD*)(a1 + 8) = 0i64;
				}
			}
		}
	LABEL_9:
		;
	}
	return result;
}

