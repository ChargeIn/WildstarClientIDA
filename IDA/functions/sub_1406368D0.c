#include "../winhttp.h"

//----- (00000001406368D0) ----------------------------------------------------
__int64 __fastcall sub_1406368D0(__int64 a1, __int64 a2)
{
	__int64 v2; // rbp
	unsigned __int64 v3; // r9
	unsigned __int64 v5; // r10
	__int64 v6; // rsi
	int v7; // r11d
	unsigned __int64 v8; // rdx
	int v9; // r8d
	__int64 v10; // rcx
	int v11; // eax
	int v12; // eax
	int v13; // r8d
	unsigned __int8 v14; // al
	unsigned __int8 v15; // r8

	v2 = qword_140C65C20;
	v3 = 0i64;
	v5 = *(_QWORD*)(qword_140C65C20 + 328);
	if (v5)
	{
		v6 = *(_QWORD*)(qword_140C65C20 + 320);
		v7 = *(_DWORD*)a2;
		do
		{
			v8 = v3 + ((v5 - v3) >> 1);
			v9 = *(_DWORD*)(v6 + 20 * v8);
			v10 = v6 + 20 * v8;
			if (v7 == v9)
			{
				v12 = *(_DWORD*)(a2 + 4);
				v13 = *(_DWORD*)(v10 + 4);
				if (v12 == v13)
				{
					v14 = *(_BYTE*)(a2 + 12);
					v15 = *(_BYTE*)(v10 + 12);
					if (v14 == v15)
						v11 = *(_DWORD*)(a2 + 8) - *(_DWORD*)(v10 + 8);
					else
						v11 = v14 - v15;
				}
				else
				{
					v11 = v12 - v13;
				}
			}
			else
			{
				v11 = v7 - v9;
			}
			if (v11 >= 0)
			{
				if (v11 <= 0)
				{
					*(_DWORD*)(v6 + 20 * v8 + 16) = *(_DWORD*)(a2 + 16);
					goto LABEL_16;
				}
				v3 = v8 + 1;
			}
			else
			{
				v5 = v3 + ((v5 - v3) >> 1);
			}
		} while (v3 < v5);
	}
	sub_14063A810((__int64*)(qword_140C65C20 + 320), v3, (int*)a2);
LABEL_16:
	sub_14063A0E0(v2, (int*)a2);
	return 0i64;
}
// 140C65C20: using guessed type __int64 qword_140C65C20;

