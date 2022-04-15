//----- (00000001403C1780) ----------------------------------------------------
__int64 __fastcall sub_1403C1780(__int64 a1, int a2)
{
	__int64 result; // rax
	unsigned __int64 v4; // r8
	__int64 i; // rdx

	result = 0i64;
	if (a2)
	{
		v4 = *(_QWORD*)(a1 + 2712);
		if (v4)
		{
			for (i = *(_QWORD*)(a1 + 2704); !*(_QWORD*)i || *(_DWORD*)(*(_QWORD*)i + 64i64) != a2; i += 8i64)
			{
				if (++result >= v4)
					return 0i64;
			}
			return *(_QWORD*)i;
		}
		else
		{
			return 0i64;
		}
	}
	return result;
}

