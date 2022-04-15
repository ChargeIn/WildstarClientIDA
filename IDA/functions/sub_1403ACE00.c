//----- (00000001403ACE00) ----------------------------------------------------
__int64 __fastcall sub_1403ACE00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
	__int64 v6; // r12
	int v7; // ebp
	__int64 result; // rax
	unsigned int v11; // esi
	__int64 v12; // r14
	__int64 v13; // r15
	__int64 v14; // rax
	__int64 v15; // rbp
	__int64 v16; // rax
	unsigned __int64 v17; // rbx
	__int64 v18; // r8
	unsigned __int64 v19; // rdx
	int* v20; // rcx
	__int64 v21; // r8
	unsigned __int64 v22; // rdx
	int* v23; // rcx
	__int64 v24; // [rsp+60h] [rbp+8h] BYREF

	v24 = a1;
	v6 = qword_140C65B70;
	v7 = a6;
	result = sub_1403AE8C0(qword_140C65B70, a2, a3, a4, qword_140C659A0, a6);
	v11 = result;
	if (!(_DWORD)result || (_DWORD)result == 317)
	{
		if (!v7 || (_DWORD)result != 317 || a4 && *(_DWORD*)(a4 + 20))
		{
			v12 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a2 + 28));
			v13 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a2 + 36));
			if (v12)
			{
				v14 = sub_1403ACD90(v6, *(_DWORD*)a2, v12);
				v15 = v14;
				if (v14)
				{
					v16 = *(_QWORD*)(v14 + 112);
					v17 = 0i64;
					v18 = *(unsigned int*)(v16 + 360);
					if (!(_DWORD)v18
						|| *(_QWORD*)(v15 + 64) && (*(_BYTE*)(v16 + 264) & 2) != 0
						|| (*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
							+ 24i64))(
								qword_140C659A0,
								v12,
								v18,
								v13,
								0i64,
								0))
					{
						v21 = *(unsigned int*)(*(_QWORD*)(v15 + 112) + 364i64);
						if ((_DWORD)v21
							&& v13
							&& !(*(unsigned int(__fastcall**)(__int64, __int64, __int64, __int64, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0 + 24i64))(
								qword_140C659A0,
								v13,
								v21,
								v12,
								0i64,
								0))
						{
							if (a4)
							{
								v22 = *(_QWORD*)(a4 + 8);
								LODWORD(v24) = 281;
								*(_DWORD*)(a4 + 16) = 281;
								*(_DWORD*)(a4 + 24) = 1;
								if (v22)
								{
									v23 = *(int**)a4;
									while (*v23 != 281)
									{
										if (*v23 <= 281)
										{
											++v17;
											++v23;
											if (v17 < v22)
												continue;
										}
										goto LABEL_33;
									}
								}
								else
								{
								LABEL_33:
									sub_1401C2E70((__int64*)a4, v17, (int*)&v24);
								}
							}
							return 281i64;
						}
						else
						{
							return v11;
						}
					}
					else
					{
						if (a4)
						{
							v19 = *(_QWORD*)(a4 + 8);
							LODWORD(v24) = 151;
							*(_DWORD*)(a4 + 16) = 151;
							*(_DWORD*)(a4 + 24) = 1;
							if (v19)
							{
								v20 = *(int**)a4;
								while (*v20 != 151)
								{
									if (*v20 <= 151)
									{
										++v17;
										++v20;
										if (v17 < v19)
											continue;
									}
									goto LABEL_22;
								}
							}
							else
							{
							LABEL_22:
								sub_1401C2E70((__int64*)a4, v17, (int*)&v24);
							}
						}
						return 151i64;
					}
				}
				else
				{
					return 4i64;
				}
			}
			else
			{
				return 30i64;
			}
		}
		else
		{
			return 317i64;
		}
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65B70: using guessed type __int64 qword_140C65B70;

