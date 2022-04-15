#include "../winhttp.h"

//----- (000000014046BB00) ----------------------------------------------------
void __fastcall sub_14046BB00(__int64 a1, int a2, int a3, int a4)
{
	double v4; // xmm2_8
	__int64 v9; // rax
	__int64 v10; // rdx
	__int64 v11; // rax
	int v12; // eax
	int* v13; // rax
	int v14; // ecx
	int* v15; // rsi
	int v16; // ebx
	unsigned int v17; // esi
	__int64 i; // rbx
	__int64 v19; // rcx
	unsigned int v20; // [rsp+30h] [rbp-58h] BYREF
	__int64 v21; // [rsp+34h] [rbp-54h]
	int* v22; // [rsp+40h] [rbp-48h]
	int v23; // [rsp+48h] [rbp-40h] BYREF
	__int64 v24; // [rsp+50h] [rbp-38h]
	void(__fastcall * v25)(__int64); // [rsp+58h] [rbp-30h]
	__int64 v26; // [rsp+60h] [rbp-28h]
	int v27; // [rsp+A0h] [rbp+18h] BYREF

	if (a3)
	{
		if (*(_DWORD*)(a1 + 3408))
		{
			v9 = *(_QWORD*)(qword_140C65898 + 25744);
			if (v9)
			{
				v10 = *(_QWORD*)(qword_140C65898 + 120);
				if ((!v10 || *(_DWORD*)(v10 + 8) != a2) && *(_DWORD*)(v9 + 8) != a2)
				{
					v11 = sub_1403D90D0(qword_140C65898, a2);
					if (v11)
					{
						v12 = *(_DWORD*)(v11 + 128);
						if (v12 != 20 && v12 != 23 && (unsigned int)(v12 - 24) > 1)
						{
							*(_DWORD*)(a1 + 5664) = a2;
							*(_DWORD*)(a1 + 5668) = a4;
							v21 = 8i64;
							v13 = sub_14018C320(0i64, 0x240ui64, 8u);
							v14 = dword_140C636A8;
							*v13 = 18;
							v13[2] = a2;
							v13[3] = 1;
							v15 = v13;
							v22 = v13;
							v20 = 1;
							v27 = v14;
							if (*(_DWORD*)(a1 + 3408) || *(_DWORD*)(a1 + 128) == 18)
							{
								v16 = 0;
								while ((int)sub_1405B4AB0(a1, (unsigned int*)&v27, (unsigned int*)&v15[18 * v16], 0i64, 0i64) >= 0)
								{
									if (++v16)
									{
										v17 = v27;
										sub_1405B4F50(a1, v27);
										sub_1405B5070(a1, v17);
										sub_1405B82A0(a1, v17, v4);
										for (i = *(_QWORD*)(a1 + 3848); i; i = *(_QWORD*)(i + 3864))
											sub_1405B4EF0(i, v17, v4);
										break;
									}
								}
							}
							sub_14057A190(qword_140C65898, &v20);
							v19 = a1 + 5672;
							if (a3 == -1)
							{
								sub_140195D70(v19);
							}
							else
							{
								v23 = 0;
								v24 = a1;
								v25 = sub_140469630;
								v26 = 0i64;
								sub_140195960(v19, a3, (__int64)&v23, 4);
							}
							sub_14079A4F0((__int64)&v20);
							sub_14018B900((__int64)v22, 0);
						}
					}
				}
			}
		}
	}
}
// 14046BC5D: variable 'v4' is possibly undefined
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

