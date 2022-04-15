#include "../winhttp.h"

//----- (00000001404B8680) ----------------------------------------------------
__int64 __fastcall sub_1404B8680(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rax
	unsigned int v11; // ecx

	*(_QWORD*)(a3 + 8) = 15i64;
	*(_QWORD*)a3 = 0i64;
	*(_QWORD*)(a3 + 16) = 0i64;
	*(_QWORD*)(a3 + 24) = 0i64;
	*(_QWORD*)(a3 + 32) = 15i64;
	*(_QWORD*)(a3 + 40) = 0i64;
	if (!sub_1401F4720(a2))
		return 2147500037i64;
	if (a4)
	{
		if ((dword_140DC3148 & 1) != 0)
		{
			v9 = (unsigned int)dword_140DC314C;
			*(_DWORD*)(a3 + 20) = 9;
			*(_QWORD*)a3 = v9;
			return 0i64;
		}
		else
		{
			dword_140DC3148 |= 1u;
			v7 = sub_140200220(0x941u);
			if (v7)
			{
				v8 = *(unsigned int*)(v7 + 8);
				*(_DWORD*)(a3 + 20) = 9;
				dword_140DC314C = v8;
				*(_QWORD*)a3 = v8;
			}
			else
			{
				*(_DWORD*)(a3 + 20) = 9;
				dword_140DC314C = 1;
				*(_QWORD*)a3 = 1i64;
			}
			return 0i64;
		}
	}
	else
	{
		if ((dword_140DC3148 & 2) != 0)
		{
			v11 = dword_140DC3150;
		}
		else
		{
			dword_140DC3148 |= 2u;
			v10 = sub_140200220(0x941u);
			if (v10)
			{
				v11 = *(_DWORD*)(v10 + 4);
				dword_140DC3150 = v11;
			}
			else
			{
				v11 = 10000;
				dword_140DC3150 = 10000;
			}
		}
		*(_DWORD*)(a3 + 8) = 1;
		*(_QWORD*)a3 = v11;
		return 0i64;
	}
}
// 140DC3148: using guessed type int dword_140DC3148;
// 140DC314C: using guessed type int dword_140DC314C;
// 140DC3150: using guessed type int dword_140DC3150;

