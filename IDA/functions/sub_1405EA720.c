//----- (00000001405EA720) ----------------------------------------------------
__int64 __fastcall sub_1405EA720(__int64 a1)
{
	__int64 v2; // rax
	__int64 result; // rax
	__int64 v4; // rax
	__int64 v5; // rax
	unsigned int v6; // r14d
	int v7; // esi
	__int64 i; // rbx
	unsigned int v9; // eax
	int v10; // edi
	__int64 v11; // rax
	__int64 v12; // rax
	unsigned int v13; // ecx
	_DWORD* v14; // rax
	__int64 v15; // rcx

	if (*(_QWORD*)(qword_140C65898 + 120))
	{
		v4 = sub_1405E9400(a1, 1);
		if (v4)
		{
			v6 = **(_DWORD**)(v4 + 112);
			v7 = 0;
			for (i = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 5640i64); i; i = *(_QWORD*)(i + 136))
			{
				if ((unsigned int)(*(_DWORD*)(i + 4) - 1) <= 1)
				{
					if (*(_QWORD*)(i + 32))
					{
						v9 = sub_140195F70(i + 16);
						v10 = v9;
						if (v7 < v9)
						{
							if (*(_DWORD*)(i + 8) == v6)
							{
								v7 = v9;
							}
							else if (*(_DWORD*)(i + 4) == 2)
							{
								v11 = sub_1403ACD90(qword_140C65B70, v6, *(_QWORD*)(qword_140C65898 + 120));
								if (v11)
								{
									v12 = *(_QWORD*)(v11 + 56);
									if (v12)
									{
										v13 = 0;
										v14 = (_DWORD*)(v12 + 4);
										while (*v14 != *(_DWORD*)(i + 12))
										{
											if (*v14)
											{
												++v13;
												++v14;
												if (v13 < 3)
													continue;
											}
											goto LABEL_20;
										}
										v7 = v10;
									}
								}
							}
						}
					}
				}
			LABEL_20:
				;
			}
			v15 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v15 + 8) = 3;
			result = 1i64;
			*(double*)v15 = (float)((float)v7 * 0.001);
			*(_QWORD*)(a1 + 16) += 16i64;
		}
		else
		{
			v5 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v5 = 0i64;
			*(_DWORD*)(v5 + 8) = 3;
			*(_QWORD*)(a1 + 16) += 16i64;
			return 1i64;
		}
	}
	else
	{
		v2 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v2 = 0i64;
		*(_DWORD*)(v2 + 8) = 3;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

