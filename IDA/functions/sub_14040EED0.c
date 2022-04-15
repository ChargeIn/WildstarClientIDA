#include "../winhttp.h"

//----- (000000014040EED0) ----------------------------------------------------
__int64 __fastcall sub_14040EED0(__int64 a1, _DWORD* a2, __int64 a3, _BYTE* a4)
{
	_BYTE* v4; // rbx
	__int64 result; // rax
	int v7; // ecx
	__int64 v8; // rsi
	unsigned int v9; // ecx
	unsigned int v10; // eax
	__int64 v11; // rax
	__int64 v12; // rbp
	int* v13; // rdi
	char v14; // al
	__int64 v15; // [rsp+50h] [rbp+8h] BYREF
	__int64 v16; // [rsp+60h] [rbp+18h] BYREF
	unsigned int v17; // [rsp+68h] [rbp+20h] BYREF

	v16 = a3;
	v15 = a1;
	v4 = a4;
	if (a4)
	{
		result = sub_14040EFB0(a2, 0i64, (unsigned int*)&v16, (unsigned int*)&v15, &v17);
		if ((int)result < 0)
			return result;
		v7 = v15;
		v8 = 8i64;
		if ((unsigned int)v16 + (unsigned __int8)v4[8] < (unsigned int)v15)
			v7 = v16 + (unsigned __int8)v4[8];
		v9 = (unsigned __int8)v4[9] + v7;
		v10 = v17;
		if (v9 < v17)
			v10 = v9;
		if (v10 < 8)
			v8 = v10;
		if ((_DWORD)v8)
		{
			v11 = sub_14020DF20(a2[92]);
			v12 = v11;
			v13 = (int*)(v11 + 8);
			do
			{
				if (!*v4)
				{
					if (v12 && *v13)
						v14 = sub_14040F320(*v13);
					else
						v14 = sub_1401AE6F0(1, 6);
					*v4 = v14;
				}
				++v13;
				++v4;
				--v8;
			} while (v8);
		}
	}
	return 0i64;
}
// 14040EF5D: conditional instruction was optimized away because esi.4 is in (1..8)

