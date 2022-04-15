#include "../winhttp.h"

//----- (000000014013A0B0) ----------------------------------------------------
char __fastcall sub_14013A0B0(__int64 a1)
{
	char v2; // bp
	unsigned int v4; // edi
	__int64 v5; // r14
	__int64 v6; // rax
	__int64 v7; // rsi
	__int64 v8; // r14
	__int64 v9; // rax
	__int64 v10; // rsi
	int v11; // eax

	v2 = 1;
	if (*(_BYTE*)(a1 + 80))
		return 1;
	if (!*(_DWORD*)(a1 + 76))
		*(_DWORD*)(a1 + 76) = sub_14018CDF0();
	v4 = 0;
	if ((unsigned int)sub_14018CDF0() - *(_DWORD*)(a1 + 76) <= 0x1388)
	{
		if (*(_DWORD*)(a1 + 24))
		{
			v8 = 0i64;
			do
			{
				v9 = *(_QWORD*)(a1 + 16);
				v10 = *(_QWORD*)(v8 + v9);
				if (*(int*)(v10 + 536) >= 6)
				{
					v11 = sub_140137AD0(*(_QWORD*)(v8 + v9));
					if (v11)
					{
						if (v11 == -1)
						{
							*(_DWORD*)(v10 + 536) = 5;
							sub_1400ED370(*(_QWORD**)(a1 + 8), v10);
						}
					}
					else
					{
						v2 = 0;
					}
				}
				++v4;
				v8 += 8i64;
			} while (v4 < *(_DWORD*)(a1 + 24));
		}
		*(_BYTE*)(a1 + 80) = v2;
		return v2;
	}
	else
	{
		if (*(_DWORD*)(a1 + 24))
		{
			v5 = 0i64;
			do
			{
				v6 = *(_QWORD*)(a1 + 16);
				v7 = *(_QWORD*)(v5 + v6);
				if (*(int*)(v7 + 536) >= 6 && (unsigned int)sub_140137AD0(*(_QWORD*)(v5 + v6)) != 1)
				{
					*(_DWORD*)(v7 + 536) = 5;
					sub_1400ED370(*(_QWORD**)(a1 + 8), v7);
				}
				++v4;
				v5 += 8i64;
			} while (v4 < *(_DWORD*)(a1 + 24));
		}
		return 1;
	}
}

