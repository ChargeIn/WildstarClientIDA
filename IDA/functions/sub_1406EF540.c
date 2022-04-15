//----- (00000001406EF540) ----------------------------------------------------
__int64 __fastcall sub_1406EF540(_QWORD* a1)
{
	int v1; // edx

	if (qword_140C65970)
	{
		if (qword_140C65898)
		{
			if (*(_QWORD*)(qword_140C65898 + 120))
			{
				if (*(_DWORD*)(qword_140C65970 + 8) == 2)
				{
					v1 = *(_DWORD*)(qword_140C65970 + 192);
					if (v1)
						return sub_140649870(a1, v1);
				}
			}
		}
	}
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

