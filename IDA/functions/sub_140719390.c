#include "../winhttp.h"

//----- (0000000140719390) ----------------------------------------------------
void __fastcall sub_140719390(__int64 a1, __int64 a2)
{
	__int64* v4; // rdi
	__int64 v5; // rsi
	__int64 v6; // rcx
	unsigned __int64 v7; // rcx
	_QWORD* v8; // rax
	unsigned __int64 v9; // rcx
	_QWORD* v10; // rax
	_QWORD* v11; // rcx
	__int64 v12; // rax
	_QWORD* v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rax

	if (a2)
	{
		v4 = (__int64*)(a1 + 584);
		v5 = 6i64;
		do
		{
			v6 = *v4;
			if (*v4 == a2 && v6)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
				*v4 = 0i64;
			}
			++v4;
			--v5;
		} while (v5);
	}
	if (!*(_DWORD*)(a1 + 680) && !*(_QWORD*)(a1 + 640))
	{
		v7 = 0i64;
		v8 = (_QWORD*)(a1 + 40);
		while (!*v8)
		{
			++v7;
			v8 += 9;
			if (v7 >= 6)
			{
				v9 = 0i64;
				v10 = (_QWORD*)(a1 + 584);
				while (!*v10)
				{
					++v9;
					++v10;
					if (v9 >= 6)
					{
						if (!*(_QWORD*)(a1 + 472) && *(_QWORD*)(a1 + 704))
						{
							sub_140719BB0(a1, 0);
							v11 = *(_QWORD**)(a1 + 16);
							if (v11)
							{
								sub_14071A0F0(v11);
								*(_QWORD*)(a1 + 16) = 0i64;
							}
							if (*(_DWORD*)(a1 + 692))
							{
								v12 = qword_140C7F0E0;
								if (qword_140C7F0E0)
								{
									while (v12 == a1 || !*(_DWORD*)(v12 + 692))
									{
										v12 = *(_QWORD*)(v12 + 712);
										if (!v12)
											goto LABEL_24;
									}
								}
								else
								{
								LABEL_24:
									sub_1404CF930(qword_140C65A28);
								}
							}
							v13 = *(_QWORD**)(a1 + 704);
							if (v13)
								*v13 = *(_QWORD*)(a1 + 712);
							v14 = *(_QWORD*)(a1 + 712);
							if (v14)
								*(_QWORD*)(v14 + 704) = *(_QWORD*)(a1 + 704);
							v15 = *(_QWORD*)a1;
							*(_QWORD*)(a1 + 704) = 0i64;
							*(_QWORD*)(a1 + 712) = 0i64;
							(*(void(__fastcall**)(__int64))(v15 + 8))(a1);
						}
						return;
					}
				}
				return;
			}
		}
	}
}
// 140C65A28: using guessed type __int64 qword_140C65A28;
// 140C7F0E0: using guessed type __int64 qword_140C7F0E0;

