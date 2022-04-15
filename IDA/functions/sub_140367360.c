//----- (0000000140367360) ----------------------------------------------------
__int64 __fastcall sub_140367360(__int64 a1, __int64 a2)
{
	int i; // ebp
	int j; // ebx
	int v6; // r9d
	__int64* v7; // rcx
	unsigned int v8; // eax
	_QWORD* v9; // rdx

	for (i = *(_DWORD*)(a1 + 2192); i < *(_DWORD*)(a1 + 2200); ++i)
	{
		for (j = *(_DWORD*)(a1 + 2188); j < *(_DWORD*)(a1 + 2196); ++j)
		{
			v6 = *(_DWORD*)(a1 + 2204);
			v7 = *(__int64**)(*(_QWORD*)(a1 + 2272)
				+ 8i64
				* (j % v6
					+ v6 * (i % *(_DWORD*)(a1 + 2208) + *(_DWORD*)(a1 + 2208) * (i % *(_DWORD*)(a1 + 2208) < 0))
					+ v6 * (unsigned int)(j % v6 < 0)));
			if (v7)
			{
				v8 = 0;
				v9 = v7 + 7;
				do
				{
					if (*v9 == a2)
						break;
					++v8;
					++v9;
				} while (v8 < 4);
				if (v8 != 4)
					sub_140383610(v7);
			}
		}
	}
	return 0i64;
}

