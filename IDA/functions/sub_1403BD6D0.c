//----- (00000001403BD6D0) ----------------------------------------------------
void __fastcall sub_1403BD6D0(__int64* a1, unsigned int a2, __int64 a3)
{
	unsigned __int64 v6; // r9
	unsigned int v7; // ebx
	__int64 v8; // rax
	__int64* i; // rdx
	__int64 v10; // rdi
	__int64 v11; // r15
	unsigned int* v12; // rcx
	unsigned int v13; // r8d
	int v14; // eax
	unsigned int v15; // edx
	int v16; // eax
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // r8
	unsigned __int64 v20; // rcx
	__int64 v21; // rax
	__int64 v22; // rax
	__int64 v23; // [rsp+68h] [rbp+20h] BYREF

	if (a2)
	{
		if (a3)
		{
			v6 = a1[339];
			v7 = 0;
			v8 = 0i64;
			if (v6)
			{
				for (i = (__int64*)a1[338]; ; ++i)
				{
					v10 = *i;
					if (*i)
					{
						if (*(_DWORD*)(v10 + 64) == a2)
							break;
					}
					if (++v8 >= v6)
						return;
				}
				v11 = sub_1405A4B80(v10, 1);
				if (v11 && (unsigned int)sub_1403A1630(a1, a2, 1i64))
				{
					v12 = *(unsigned int**)(v11 + 112);
					v13 = v12[6];
					if (((v13 - 2) & 0xFFFFFFFA) != 0 || v13 == 3)
					{
						v14 = dword_140C45E40;
						if (*(_DWORD*)qword_140C63750 < dword_140C45E40)
							v14 = *(_DWORD*)qword_140C63750;
						if (!*((_BYTE*)&dword_140C45E50 + v14)
							|| (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a3 + 168i64))(a3) != 2
							|| (unsigned int)sub_1403D8C10(v11))
						{
							v15 = *(_DWORD*)(v10 + 36);
							v23 = 0i64;
							v16 = sub_14039A040(qword_140C65898, v15, 0i64, 0, 0, &v23);
							if (!v16 || v16 == 317)
							{
								sub_1405CAA50(a3, v23);
								v19 = a1[3693];
								v20 = *(_QWORD*)(v19 + 16);
								if (v20)
								{
									v21 = 0i64;
									while (1)
									{
										v22 = *(_QWORD*)(*(_QWORD*)(v19 + 8) + 8 * v21);
										if (*(_DWORD*)(v22 + 4) == 4 && *(_DWORD*)(v22 + 8) == *(_DWORD*)(v10 + 36))
											break;
										v21 = ++v7;
										if (v7 >= v20)
											return;
									}
									*(_BYTE*)(v19 + 24) = 1;
									*(_QWORD*)v19 = v7;
								}
							}
							else
							{
								*(_DWORD*)(a3 + 328) = 1;
								sub_1403A12A0((__int64)a1, v16, v11, 0);
								sub_1403BDAC0(qword_140C65898);
								sub_1405CA990(v17, (__int64*)(a3 + 416));
								sub_1405CA990(v18, (__int64*)(a3 + 408));
							}
						}
					}
					else
					{
						sub_1403BDEA0(a1, *v12, a3);
					}
				}
			}
		}
	}
}
// 1403BD839: variable 'v17' is possibly undefined
// 1403BD845: variable 'v18' is possibly undefined
// 1403A1630: using guessed type __int64 __fastcall sub_1403A1630(_QWORD, _QWORD, _QWORD);
// 140C45E40: using guessed type int dword_140C45E40;
// 140C45E50: using guessed type int dword_140C45E50;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;

