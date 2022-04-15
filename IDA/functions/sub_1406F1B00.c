//----- (00000001406F1B00) ----------------------------------------------------
__int64 __fastcall sub_1406F1B00(__int64 a1, __int64 a2)
{
	int v2; // r8d
	int v4; // r8d
	__int64 v5; // rax
	__int64 v7; // rax
	__int64 v8; // rdi
	__int64 v9; // rdi
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rdi

	v2 = *(_DWORD*)(a1 + 4);
	if (v2)
	{
		v4 = v2 - 1;
		if (v4)
		{
			if (v4 == 1)
			{
				if (qword_140C65898)
				{
					if (*(_QWORD*)(qword_140C65898 + 120) == a2)
					{
						if (qword_140C65970)
						{
							v5 = sub_1406849E0(qword_140C65970, *(_DWORD*)(a1 + 8));
							if (v5)
							{
								if (*(_DWORD*)(**(_QWORD**)(v5 + 72) + 20i64) == *(_DWORD*)(a2 + 14080))
									return sub_140573130(v5, a2);
							}
						}
					}
				}
			}
		}
		else if (qword_140C65898)
		{
			if (*(_QWORD*)(qword_140C65898 + 120) == a2)
			{
				if (qword_140C65970)
				{
					v7 = sub_1403D7BC0(qword_140C65970, *(_DWORD*)(a1 + 8));
					v8 = v7;
					if (v7)
					{
						if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v7 + 56i64))(v7)
							&& *(_DWORD*)(**(_QWORD**)(v8 + 48) + 8i64) == *(_DWORD*)(a2 + 14080))
						{
							return 1i64;
						}
					}
				}
			}
		}
	}
	else
	{
		v9 = qword_140C65968;
		v10 = sub_14021EF80(*(_DWORD*)(a1 + 8));
		if (v10)
		{
			v11 = sub_140491CF0(v9, *(_DWORD*)(v10 + 4), *(_DWORD*)(v10 + 8));
			if (v11)
			{
				if (*(_DWORD*)(*(_QWORD*)v11 + 4i64) == *(_DWORD*)(a2 + 14080))
				{
					v12 = *(_QWORD*)v11;
					return (unsigned int)sub_14047C450(a2) >= *(_DWORD*)(v12 + 8);
				}
			}
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65968: using guessed type __int64 qword_140C65968;
// 140C65970: using guessed type __int64 qword_140C65970;

