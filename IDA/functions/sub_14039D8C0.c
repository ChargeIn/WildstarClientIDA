//----- (000000014039D8C0) ----------------------------------------------------
__int64 __fastcall sub_14039D8C0(__int64 a1)
{
	__int64 v1; // rax
	unsigned int v2; // ecx
	__int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // r8
	__int64 v7; // rbx
	__int64 v8; // rax
	int v10; // [rsp+50h] [rbp+18h] BYREF
	int v11; // [rsp+54h] [rbp+1Ch]

	if (!qword_140C65898 || !a1)
		return 2147500037i64;
	v1 = *(_QWORD*)(a1 + 24);
	if (v1)
	{
		v2 = *(_DWORD*)(v1 + 168);
		if (v2)
		{
			v3 = sub_140244B00(v2);
			v4 = v3;
			if (v3)
			{
				v5 = sub_140246480(*(_DWORD*)(v3 + 4));
				if (v5)
				{
					if (*(_DWORD*)(v5 + 4) == 20)
					{
						(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C89D88 + 64i64))(qword_140C89D88, 0i64);
					}
					else
					{
						v6 = *(unsigned int*)(v4 + 8);
						if (!(_DWORD)v6
							|| (*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _DWORD, _DWORD))(*(_QWORD*)qword_140C659A0
								+ 32i64))(
									qword_140C659A0,
									*(_QWORD*)(qword_140C65898 + 120),
									v6,
									0i64,
									0,
									0))
						{
							v10 = 0;
							v7 = qword_140C65898;
							v11 = 6;
							v8 = sub_1403AC780(qword_140C65898 + 160, &v10);
							if (v8)
							{
								sub_1403998E0(v7, (int*)(v8 + 32), 0, 0i64);
								return 0i64;
							}
						}
					}
				}
			}
		}
	}
	return 2147500037i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C89D88: using guessed type __int64 qword_140C89D88;

