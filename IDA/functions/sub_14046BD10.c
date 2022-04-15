//----- (000000014046BD10) ----------------------------------------------------
void __fastcall sub_14046BD10(__int64 a1, int a2, double a3)
{
	__int64 v5; // rax
	__int64 v6; // rdx
	__int64 v7; // rax
	int v8; // eax
	int* v9; // rax
	int v10; // ecx
	int* v11; // rsi
	int v12; // ebx
	unsigned int v13; // esi
	__int64 i; // rbx
	unsigned int v15; // [rsp+30h] [rbp-28h] BYREF
	__int64 v16; // [rsp+34h] [rbp-24h]
	int* v17; // [rsp+40h] [rbp-18h]
	int v18; // [rsp+60h] [rbp+8h] BYREF

	if (*(_DWORD*)(a1 + 3408))
	{
		v5 = *(_QWORD*)(qword_140C65898 + 25744);
		if (v5)
		{
			v6 = *(_QWORD*)(qword_140C65898 + 120);
			if ((!v6 || *(_DWORD*)(v6 + 8) != a2) && *(_DWORD*)(v5 + 8) != a2)
			{
				v7 = sub_1403D90D0(qword_140C65898, a2);
				if (v7)
				{
					v8 = *(_DWORD*)(v7 + 128);
					if (v8 != 20 && v8 != 23 && (unsigned int)(v8 - 24) > 1)
					{
						*(_DWORD*)(a1 + 5664) = a2;
						v16 = 8i64;
						v9 = sub_14018C320(0i64, 0x240ui64, 8u);
						v10 = dword_140C636A8;
						*v9 = 18;
						v9[2] = a2;
						v9[3] = 1;
						v11 = v9;
						v17 = v9;
						v15 = 1;
						v18 = v10;
						if (*(_DWORD*)(a1 + 3408) || *(_DWORD*)(a1 + 128) == 18)
						{
							v12 = 0;
							while ((int)sub_1405B4AB0(a1, (unsigned int*)&v18, (unsigned int*)&v11[18 * v12], 0i64, 0i64) >= 0)
							{
								if (++v12)
								{
									v13 = v18;
									sub_1405B4F50(a1, v18);
									sub_1405B5070(a1, v13);
									sub_1405B82A0(a1, v13, a3);
									for (i = *(_QWORD*)(a1 + 3848); i; i = *(_QWORD*)(i + 3864))
										sub_1405B4EF0(i, v13, a3);
									break;
								}
							}
						}
						sub_14057A190(qword_140C65898, &v15);
						sub_14079A4F0((__int64)&v15);
						sub_14018B900((__int64)v17, 0);
					}
				}
			}
		}
	}
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

