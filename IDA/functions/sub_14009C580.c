//----- (000000014009C580) ----------------------------------------------------
__int64 __fastcall sub_14009C580(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // ebx
	__int64 v8; // r8
	__int64 v9; // rax
	__int64 i; // rdi

	if (!a3)
		return 2147500037i64;
	v7 = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if (v7 >= 0)
	{
		v7 = sub_14006C120(a1, (__int64*)(a3 + 8), v8);
		if (v7 >= 0)
		{
			v7 = sub_140336A40(a1, a2, (_QWORD*)(a3 + 16));
			if (v7 >= 0)
			{
				v7 = sub_14006C1C0(a1, (_DWORD*)(a3 + 24));
				if (v7 >= 0)
				{
					v7 = sub_140336A40(a1, a2, (_QWORD*)(a3 + 32));
					if (v7 >= 0)
					{
						v7 = sub_140336A40(a1, a2, (_QWORD*)(a3 + 40));
						if (v7 >= 0)
						{
							v7 = sub_14006C090(a1, (_DWORD*)(a3 + 48), 3ui64);
							if (v7 >= 0)
							{
								v7 = sub_14006C090(a1, (_DWORD*)(a3 + 52), 0x20ui64);
								if (v7 >= 0)
								{
									v9 = sub_1403374E0(a2, 48i64 * *(unsigned int*)(a3 + 52));
									*(_QWORD*)(a3 + 56) = v9;
									if (!v9)
										return 2147500037i64;
									for (i = 0i64; (unsigned int)i < *(_DWORD*)(a3 + 52); i = (unsigned int)(i + 1))
									{
										v7 = sub_14009C460(a1, a2, *(_QWORD*)(a3 + 56) + 48 * i);
										if (v7 < 0)
											break;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return (unsigned int)v7;
}
// 14009C5CE: variable 'v8' is possibly undefined

