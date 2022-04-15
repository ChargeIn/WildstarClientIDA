#include "../winhttp.h"

//----- (00000001408EA070) ----------------------------------------------------
__int64 __fastcall sub_1408EA070(__int64 a1)
{
	unsigned __int64 v3; // r9
	unsigned int v4; // ecx
	unsigned int v5; // r8d
	unsigned __int16* v6; // rdx
	unsigned int v7; // r11d
	int v8; // edi
	unsigned int v9; // eax
	unsigned int v10; // r10d
	unsigned int v11; // ecx
	int v12; // eax
	__int64 v13; // rax

	if (!*(_QWORD*)(a1 + 336))
		return 2i64;
	v3 = (unsigned int)sub_1408801C0(a1);
	if (v3 >= *(unsigned int*)(a1 + 40))
		return 2i64;
	if (!(_DWORD)v3)
	{
		v4 = *(_DWORD*)(a1 + 304);
		v5 = 0;
	LABEL_14:
		*(_DWORD*)(a1 + 44) = v5;
		*(_QWORD*)(a1 + 352) = *(_QWORD*)(a1 + 360) + v4;
		v13 = *(_QWORD*)(a1 + 24);
		*(_BYTE*)(v13 + 383) &= 0xF1u;
		*(_DWORD*)(v13 + 372) = v3 - v5;
		return 1i64;
	}
	v6 = *(unsigned __int16**)(a1 + 336);
	v7 = *(_DWORD*)(a1 + 300) >> 2;
	if (v6 && v7)
	{
		v5 = 0;
		v8 = 0;
		v9 = 0;
		v10 = 0;
		do
		{
			v11 = v9 + *v6;
			if (v11 > (unsigned int)v3)
				break;
			v12 = v6[1];
			++v10;
			v6 += 2;
			v8 += v12;
			v9 = v11;
		} while (v10 < v7);
		if (v10)
		{
			v4 = *(_DWORD*)(a1 + 300) + v8;
			v5 = v9;
		}
		else
		{
			v4 = *(_DWORD*)(a1 + 304);
		}
		goto LABEL_14;
	}
	return 2i64;
}
// 1408EA0ED: conditional instruction was optimized away because r11d.4!=0

