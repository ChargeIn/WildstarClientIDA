#include "../winhttp.h"

//----- (000000014044D860) ----------------------------------------------------
void __fastcall sub_14044D860(__int64 a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	__int64 v4; // rbx
	int* v5; // rax
	int* v6; // rbp
	unsigned int v7; // edx
	__int64 v8; // rax
	__int64 v9; // rsi
	unsigned int v10; // edi
	__int64 v11; // rax
	__int64 v12; // rcx
	int v13; // eax
	__int64 v14; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v17[2]; // [rsp+28h] [rbp-250h] BYREF
	int v18; // [rsp+38h] [rbp-240h] BYREF
	__int64 v19; // [rsp+40h] [rbp-238h] BYREF
	__int64 v20; // [rsp+50h] [rbp-228h] BYREF
	int v21[124]; // [rsp+60h] [rbp-218h] BYREF

	if (!*(_DWORD*)(a1 + 232))
	{
		v2 = qword_140C658F0;
		if (qword_140C658F0)
		{
			if (qword_140C65898 && *(_QWORD*)(qword_140C65898 + 120))
			{
				sub_1400B53E0(v21);
				v3 = *(_QWORD*)(a1 + 176);
				v4 = *(_QWORD*)(v3 + 16);
				if (v4 != v3)
				{
					while (1)
					{
						v5 = sub_1400B5DF0(v2, *(_DWORD*)(v4 + 32), v21);
						v6 = v5;
						if (v5)
						{
							v7 = v5[71];
							if (v7)
							{
								v8 = sub_1403ACD90(qword_140C65B70, v7, *(_QWORD*)(qword_140C65898 + 120));
								v9 = v8;
								if (v8)
								{
									v10 = 0;
									if (*(_DWORD*)(v8 + 40))
									{
										do
										{
											v11 = *(_QWORD*)(v9 + 48);
											v12 = 168i64 * v10;
											if (*(_DWORD*)(v12 + v11 + 16) == 110)
											{
												v13 = *(_DWORD*)(v12 + v11 + 64);
												v17[1] = 0i64;
												v17[0] = 0i64;
												v18 = v13;
												sub_1403B4F00(&v19, (__int64)v17);
												sub_140451980(a1 + 240, (__int64)&v20, &v18);
												if (v19)
													(*(void(__fastcall**)(__int64))(*(_QWORD*)(v19 - 16) + 8i64))(v19 - 16);
												sub_140003460((__int64*)(v20 + 40), v6);
											}
											++v10;
										} while (v10 < *(_DWORD*)(v9 + 40));
									}
								}
							}
						}
						v14 = *(_QWORD*)(v4 + 24);
						if (v14)
						{
							v4 = *(_QWORD*)(v4 + 24);
							for (i = *(_QWORD*)(v14 + 16); i; i = *(_QWORD*)(i + 16))
								v4 = i;
						}
						else
						{
							for (j = *(_QWORD*)(v4 + 8); v4 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
								v4 = j;
							if (*(_QWORD*)(v4 + 24) != j)
								v4 = j;
						}
						if (v4 == *(_QWORD*)(a1 + 176))
							break;
						v2 = qword_140C658F0;
					}
				}
				*(_DWORD*)(a1 + 232) = 1;
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 14044D860: using guessed type int var_218[124];

