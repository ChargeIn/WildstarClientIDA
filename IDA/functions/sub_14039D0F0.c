#include "../winhttp.h"

//----- (000000014039D0F0) ----------------------------------------------------
void __fastcall sub_14039D0F0(__int64 a1, unsigned int a2, __int64 a3, double a4)
{
	double v4; // xmm2_8
	__int64* v5; // rdi
	__int64 v8; // rsi
	__m128* v9; // rax
	__int64 v10; // rsi
	unsigned int v11; // esi
	int v12; // r8d
	int v13; // eax
	int v14; // ebx
	__int64 v15; // rax
	_DWORD v16[6]; // [rsp+20h] [rbp-18h] BYREF

	v5 = (__int64*)qword_140C65898;
	if ((unsigned int)sub_1403AD600(*(_QWORD*)(qword_140C65898 + 120)))
	{
		v8 = qword_140C65898;
		if (sub_140396750(*(_QWORD*)(qword_140C65898 + 32144), a2))
		{
			sub_1400EA3E0(v5[3688], "PendingLootInteract", L"i", a2);
		}
		else
		{
			v9 = (__m128*)sub_1403D90D0(v8, a2);
			v10 = (__int64)v9;
			if (v9 && a3 && sub_1403A6440((__int64)v5, v9))
			{
				v11 = sub_14046C580(v10, v5[3218]);
				if (v11)
				{
					sub_14055B0E0((__int64)v5, a2, v4, a4);
					v13 = sub_14039C430((__int64)v5, v11, v12);
					v14 = v13;
					if (v13)
					{
						if (v13 != 317)
						{
							v15 = sub_1403ACD90(qword_140C65B70, v11, v5[15]);
							sub_1403A12A0((__int64)v5, v14, v15, 0);
						}
					}
				}
				else
				{
					v16[2] = 0;
					v16[0] = a2;
					v16[1] = a2;
					sub_1403F4900(qword_140C65898, 0x14Fu, (__int64)v16);
				}
			}
		}
	}
}
// 14039D1A8: variable 'v4' is possibly undefined
// 14039D1B2: variable 'v12' is possibly undefined
// 1409EF4CC: using guessed type wchar_t aI_38[2];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

