#include "../winhttp.h"

//----- (000000014059A900) ----------------------------------------------------
__int64 __fastcall sub_14059A900(__int64 a1)
{
	int v1; // ebx
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	__int64 v6; // rdi
	__int64 v7; // rdi
	unsigned int v8; // ebp
	__int64 v9; // r14
	int v10; // esi
	__int64 v11; // rcx
	__int64 v12; // rax
	unsigned __int64 v13; // r8
	unsigned int v14; // edx
	__int64 v15; // rdi
	__int64 v16; // rcx
	__int64 v17; // rdi
	unsigned int v18; // ecx
	__int64 v19; // rcx
	_DWORD* i; // rax
	_DWORD v22[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = 0;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8i64 * v3);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = v6 + 384;
	v8 = sub_1400F26A0(v7, 1);
	v9 = (unsigned int)sub_1400F26A0(v7, 2) - 1;
	v10 = sub_1400F26A0(v7, 3);
	v12 = sub_1405BE150(v11, v8);
	v13 = *(_QWORD*)(qword_140C65898 + 5792);
	v14 = 0;
	if (v13)
	{
		v15 = *(_QWORD*)(qword_140C65898 + 5784);
		v16 = 0i64;
		while (*(_DWORD*)(*(_QWORD*)(v15 + 8 * v16) + 8i64) != v8)
		{
			v16 = ++v14;
			if (v14 >= v13)
				goto LABEL_10;
		}
		v17 = *(_QWORD*)(v15 + 8i64 * v14);
	}
	else
	{
	LABEL_10:
		v17 = 0i64;
	}
	if (v12)
	{
		if (v17)
		{
			if (*(_DWORD*)(v17 + 12))
			{
				if ((unsigned int)v9 < 0xA)
				{
					v18 = *(_DWORD*)(v12 + 4 * v9 + 528);
					if (v18)
					{
						if (!*(_DWORD*)(v17 + 4 * v9 + 24))
						{
							v19 = sub_140246040(v18);
							if (v19)
							{
								if (*(_DWORD*)(v19 + 8) <= *(_DWORD*)(v17 + 20))
								{
									for (i = (_DWORD*)(v19 + 16); *i != v10; ++i)
									{
										if ((unsigned int)++v1 >= 5)
											return 0i64;
									}
									v22[0] = v8;
									v22[1] = v9;
									v22[2] = v10;
									sub_1403F4900(qword_140C65898, 0x84Eu, (__int64)v22);
								}
							}
						}
					}
				}
			}
		}
	}
	return 0i64;
}
// 14059A99B: variable 'v11' is possibly undefined
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

