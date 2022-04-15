#include "../winhttp.h"

//----- (00000001403ACC80) ----------------------------------------------------
char __fastcall sub_1403ACC80(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 v3; // rax
	unsigned int v5; // r10d
	unsigned int v6; // ebp
	unsigned int v7; // esi
	unsigned int v8; // r9d
	unsigned int v9; // r11d
	unsigned int i; // edx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx

	v3 = *(_QWORD*)(a2 + 64);
	if (v3 && (*(_DWORD*)(v3 + 340) & 0x100) != 0)
	{
		v5 = 0;
		v6 = *(unsigned __int8*)(v3 + 416);
		*a3 = 0;
		v7 = *(_DWORD*)(a1 + 4);
		v8 = 96;
		v9 = 0;
		for (i = 17; i <= 0x14; ++i)
		{
			if (i >= v7 || (v3 = *(_QWORD*)(a1 + 16), (v11 = *(_QWORD*)(v3 + 8i64 * i)) == 0))
			{
				a3[1] = i;
				return v3;
			}
			v12 = *(_QWORD*)(v11 + 64);
			if ((*(_DWORD*)(v12 + 340) & 0x100) != 0)
				LOBYTE(v3) = *(_BYTE*)(v12 + 416);
			else
				LOBYTE(v3) = 0;
			if ((unsigned __int8)v3 < v8)
			{
				if ((*(_DWORD*)(v12 + 340) & 0x100) != 0)
					LOBYTE(v3) = *(_BYTE*)(v12 + 416);
				else
					LOBYTE(v3) = 0;
				v8 = (unsigned __int8)v3;
				v9 = i;
			}
		}
		if (v8 <= v6)
			goto LABEL_22;
		v13 = *(unsigned int*)(a1 + 36);
		if ((_DWORD)v13)
		{
			v3 = *(_QWORD*)(a1 + 40);
			do
			{
				if (!*(_QWORD*)v3)
					++v5;
				v3 += 8i64;
				--v13;
			} while (v13);
		}
		if (v5 >= v8 - v6)
			LABEL_22:
		a3[1] = v9;
	}
	return v3;
}

