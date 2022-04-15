#include "../winhttp.h"

//----- (0000000140891A10) ----------------------------------------------------
__int64 __fastcall sub_140891A10(__int64 a1, int a2)
{
	__int64 v2; // rbx
	__int64 v3; // r8
	int v4; // esi
	_DWORD* v5; // r9
	__int64 v6; // r11
	unsigned int v7; // ecx
	unsigned int v8; // r11d
	signed int v9; // r10d
	signed int v10; // eax
	signed int v12; // [rsp+10h] [rbp+10h]

	v2 = *(_QWORD*)(a1 + 224);
	v3 = 0i64;
	v4 = *(_DWORD*)(v2 + 4);
	v5 = (_DWORD*)(v2 + 4);
	v6 = (*(_QWORD*)(a1 + 232) - v2) >> 4;
	v7 = 0;
	v8 = v6 - 1;
	if (v8)
	{
		v9 = v12;
		do
		{
			v10 = abs32(*v5 - (v4 + a2));
			if (!v3 || v10 < v9)
			{
				v9 = v10;
				v3 = v2 + 16i64 * v7;
			}
			++v7;
			v5 += 4;
		} while (v7 < v8);
	}
	return (unsigned int)(*(_DWORD*)(v3 + 4) - v4);
}

