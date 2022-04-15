#include "../winhttp.h"

//----- (0000000140882630) ----------------------------------------------------
__int64 __fastcall sub_140882630(__int64 a1, unsigned __int64 a2, __int64 a3)
{
	__int64 v4; // rdx
	__int64 v6; // rdi
	__int64 v7; // rax
	char* v8; // rax
	char* v9; // rdx
	__int64 v10; // r9
	unsigned __int64 v11; // r8
	unsigned __int64 v12; // rcx

	v4 = 0i64;
	v6 = 0i64;
	if ((unsigned __int64)(a3 - 1) <= 0xFFFFFFFE)
	{
		v6 = 24i64;
		if (((a3 + 7) & 0xFFFFFFFFFFFFFFF8ui64) > 0x18)
			v6 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8ui64;
	}
	if (v6 + a2 + 31 <= 0xFFFFFFFE)
	{
		v4 = 24i64;
		v7 = ~(a2 - 1);
		if ((v7 & (a2 + v6 + a2 + 31)) > 0x18)
			v4 = v7 & (a2 + v6 + a2 + 31);
	}
	if (a2 <= 8)
		v4 = v6;
	v8 = (char*)sub_140881F60(a1, v4);
	v9 = v8;
	if (v8)
	{
		v10 = ~(a2 - 1);
		v11 = (v10 & (unsigned __int64)&v8[a2 + 15]) - (_QWORD)(v8 + 16);
		if (v11)
		{
			if (v11 < 0x20)
			{
				v12 = a2;
				if (32 - v11 > a2)
					v12 = 32 - v11;
				v11 = (v10 & ((v10 & (unsigned __int64)&v8[a2 + 15]) + v12 + a2 - 1)) - (_QWORD)(v8 + 16);
			}
			if (v11)
				v9 = sub_140882270(a1, v8, v11);
		}
	}
	return sub_140882110(a1, (__int64)v9, v6);
}

