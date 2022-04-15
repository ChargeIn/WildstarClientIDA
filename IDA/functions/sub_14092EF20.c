#include "../winhttp.h"

//----- (000000014092EF20) ----------------------------------------------------
__int64 __fastcall sub_14092EF20(__int64 a1, _WORD* a2, int a3)
{
	int v3; // ebx
	_WORD* v4; // r9
	__int64 v6; // rax
	bool v7; // zf
	unsigned __int64 v8; // rsi
	int v9; // ebp
	int v10; // r14d
	_WORD* v11; // r10
	int v12; // r11d

	v3 = a3;
	v4 = a2;
	do
	{
		v6 = (unsigned __int16)v4[1];
		v7 = v4[v6] == 113;
		v4 += v6;
	} while (v7);
	v8 = (unsigned __int64)(v4 + 2);
	v9 = a3;
	v10 = 0;
	if (!a3 && (*a2 == 128 || *a2 == 133))
		v10 = 1;
	v11 = sub_140930750(a1, a2);
	while ((unsigned __int64)v11 < v8)
	{
		switch (*v11)
		{
		case 3:
			if (!v3)
			{
				v12 += 2;
				v3 = 1;
			}
			++v11;
			break;
		case 0x6F:
			if (*(_DWORD*)(a1 + 100) && !v3)
			{
				v12 += 2;
				v3 = 1;
			}
			if (*(_DWORD*)(a1 + 60) && !v9)
			{
				v12 += 2;
				v9 = 1;
			}
			v11 += 2;
			break;
		case 0x7F:
		case 0x80:
		case 0x84:
		case 0x85:
			v12 += 3;
			v11 += 3;
			break;
		case 0x8F:
			if (!v9)
			{
				v12 += 2;
				v9 = 1;
			}
			v11 += (unsigned __int16)v11[1] + 3;
			break;
		default:
			v11 = sub_140930750(a1, v11);
			break;
		}
	}
	if (v10 && v12 == 3 || v12 <= 0)
		return 0xFFFFFFFFi64;
	else
		return (unsigned int)(v12 + 1);
}
// 14092EFEC: variable 'v12' is possibly undefined

