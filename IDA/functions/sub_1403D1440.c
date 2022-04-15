#include "../winhttp.h"

//----- (00000001403D1440) ----------------------------------------------------
void __fastcall sub_1403D1440(__int64 a1, int a2, int a3)
{
	int v5; // edx
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rax
	int v9; // edx
	__int64 v10; // rbx
	__int64 v11; // rcx
	unsigned __int64 v12; // rbx
	unsigned __int64 v13; // rdx
	__int64 v14; // rax
	_DWORD* v15; // rbp
	unsigned __int64 v16; // rdi
	__int64 v17; // rax
	__int64 v18; // [rsp+20h] [rbp-28h] BYREF
	unsigned __int64 v19; // [rsp+28h] [rbp-20h]
	int v20; // [rsp+60h] [rbp+18h] BYREF

	v20 = a3;
	if (*(_QWORD*)(a1 + 28344))
	{
		if (a2)
		{
			v5 = a2 - 1;
			if (v5)
			{
				if (v5 == 1)
				{
					if ((unsigned int)sub_1403CDF50(a1, a3, *(_BYTE*)(a1 + 28140), 0))
					{
						v6 = sub_1401FD7A0(a3);
						if (v6)
						{
							if (sub_1401FD360(*(_DWORD*)(v6 + 32)))
							{
								v8 = *(_QWORD*)(a1 + 120);
								if (v8)
									v9 = *(_DWORD*)(v8 + 220);
								else
									v9 = 23;
								v19 = 0i64;
								v18 = 0i64;
								v10 = sub_14079B380(v7, v9);
								sub_140003460(&v18, &v20);
								sub_1403CDAA0(a1, a3, v10, &v18);
								v11 = v18;
								v12 = 0i64;
								if (*(_QWORD*)(a1 + 28344))
								{
									v13 = v19;
									do
									{
										v14 = 0i64;
										if (v13)
										{
											while (*(_DWORD*)(v11 + 4 * v14) != *(unsigned __int16*)(*(_QWORD*)(a1 + 28336) + 2 * v12))
											{
												if (++v14 >= v13)
													goto LABEL_16;
											}
											sub_140334370(a1 + 28336, v12);
											v13 = v19;
											v11 = v18;
										}
										else
										{
										LABEL_16:
											++v12;
										}
									} while (v12 < *(_QWORD*)(a1 + 28344));
								}
								if (v11)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
							}
						}
					}
				}
			}
			else
			{
				v15 = (_DWORD*)sub_1401FD360(a3);
				if (v15)
				{
					v16 = 0i64;
					while (v16 < *(_QWORD*)(a1 + 28344))
					{
						v17 = sub_1401FD7A0(*(unsigned __int16*)(*(_QWORD*)(a1 + 28336) + 2 * v16));
						if (v17)
						{
							if (*v15 == *(_DWORD*)(v17 + 32))
								sub_140334370(a1 + 28336, v16);
							else
								++v16;
						}
					}
				}
			}
		}
		else
		{
			*(_QWORD*)(a1 + 28344) = 0i64;
		}
	}
}
// 1403D14D2: variable 'v7' is possibly undefined

