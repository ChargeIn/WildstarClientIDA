#include "../winhttp.h"

//----- (0000000140843180) ----------------------------------------------------
void __fastcall sub_140843180(__int64 a1, __int64 a2)
{
	struct _RTL_CRITICAL_SECTION* v4; // rbx
	unsigned int v5; // r8d
	_QWORD* v6; // r14
	__int64 v7; // rsi
	__int64 v8; // r15
	__int64 v9; // rdi
	char* v10; // rax
	char* v11; // r8
	char* i; // rcx
	__int64 v14; // rdx
	__int64 v15; // rcx
	__int64 v16; // rdx
	struct _RTL_CRITICAL_SECTION* v17; // [rsp+58h] [rbp+10h]

	if (*(_QWORD*)(a2 + 64))
	{
		v4 = (struct _RTL_CRITICAL_SECTION*)(a1 + 120);
		v17 = (struct _RTL_CRITICAL_SECTION*)(a1 + 120);
		EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 120));
		if (*(_DWORD*)(a2 + 52))
		{
			do
			{
				v5 = *(_DWORD*)(*(_QWORD*)(a2 + 64) + 12i64 * (unsigned int)-- * (_DWORD*)(a2 + 52));
				if (v5)
				{
					v6 = 0i64;
					v7 = v5 % 0xC1;
					v8 = 8 * v7;
					v9 = *(_QWORD*)(8 * v7 + a1 + 224);
					if (v9)
					{
						while (*(_DWORD*)(v9 + 8) != v5)
						{
							v6 = (_QWORD*)v9;
							v9 = *(_QWORD*)v9;
							if (!v9)
								goto LABEL_28;
						}
						v10 = *(char**)(v9 + 32);
						v11 = *(char**)(v9 + 40);
						for (i = v10; i != v11; i += 24)
						{
							if (*(_QWORD*)i == a2)
								break;
						}
						if (i != v11)
						{
							if ((unsigned int)((v11 - v10) / 24) > 1)
							{
								*(_QWORD*)i = *((_QWORD*)v11 - 3);
								*((_QWORD*)i + 1) = *((_QWORD*)v11 - 2);
								*((_QWORD*)i + 2) = *((_QWORD*)v11 - 1);
							}
							*(_QWORD*)(v9 + 40) -= 24i64;
						}
						if ((*(_DWORD*)(v9 + 56))-- == 1)
						{
							v14 = *(_QWORD*)(v9 + 16);
							if (v14)
							{
								sub_140881720(SHIDWORD(qword_140C61B18), v14);
								*(_QWORD*)(v9 + 16) = 0i64;
								*(_DWORD*)(v9 + 24) = 0;
							}
						}
						if (!*(_DWORD*)(v9 + 56))
						{
							v15 = *(_QWORD*)v9;
							if (!*(_QWORD*)v9)
							{
								do
									v7 = (unsigned int)(v7 + 1);
								while ((unsigned int)v7 < 0xC1 && !*(_QWORD*)(a1 + 8 * v7 + 224));
							}
							if (v6)
								*v6 = v15;
							else
								*(_QWORD*)(v8 + a1 + 224) = v15;
							v16 = *(_QWORD*)(v9 + 32);
							if (v16)
							{
								*(_QWORD*)(v9 + 40) = v16;
								sub_140881720(dword_140C10F20, v16);
								*(_QWORD*)(v9 + 32) = 0i64;
								*(_QWORD*)(v9 + 40) = 0i64;
								*(_DWORD*)(v9 + 48) = 0;
							}
							sub_140881720(*(_DWORD*)(a1 + 216), v9);
							--* (_DWORD*)(a1 + 1768);
						}
					}
				}
			LABEL_28:
				;
			} while (*(_DWORD*)(a2 + 52));
			v4 = v17;
		}
		LeaveCriticalSection(v4);
	}
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B18: using guessed type __int64 qword_140C61B18;

