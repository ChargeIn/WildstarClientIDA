//----- (00000001406EF4D0) ----------------------------------------------------
__int64 __fastcall sub_1406EF4D0(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rax
	unsigned int* v3; // rcx
	int* v4; // rax
	__int64 v5; // rcx

	if (qword_140C65970)
	{
		if (qword_140C65898)
		{
			if (*(_QWORD*)(qword_140C65898 + 120))
			{
				if (*(_DWORD*)(qword_140C65970 + 8) == 2)
				{
					v1 = sub_140056AB0(a1, 1u);
					if (v1)
					{
						v2 = *(_QWORD*)(v1 + 8);
						if (v2)
						{
							v3 = *(unsigned int**)(v2 + 8);
							if (v3)
							{
								v4 = (int*)sub_1406F1910((__int64)v3, *v3);
								if (v4)
									sub_1405711B0(v5, *v4);
							}
						}
					}
				}
			}
		}
	}
	return 0i64;
}
// 1406EF52F: variable 'v5' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

