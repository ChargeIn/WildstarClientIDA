#include "../winhttp.h"

//----- (0000000140412800) ----------------------------------------------------
__int64 __fastcall sub_140412800(__int64 a1, int* a2, int a3, int a4)
{
	int v4; // eax
	unsigned int v5; // ebx
	int* v9; // rcx
	__int64 v10; // rax
	__int128 v11; // xmm0
	__int128 v12; // xmm0

	v4 = *(_DWORD*)(a1 + 1180);
	v5 = 0;
	if (a4 >= v4)
	{
		if (a2)
		{
			v9 = (int*)(a1 + 344);
			v5 = 1;
			if ((((unsigned __int8)v9 | (unsigned __int8)a2) & 0xF) != 0)
			{
				sub_1407DB590(v9, a2, 0x190ui64);
				*(_DWORD*)(a1 + 1180) = a4;
			}
			else
			{
				v10 = 3i64;
				do
				{
					v11 = *(_OWORD*)a2;
					v9 += 32;
					a2 += 32;
					*((_OWORD*)v9 - 8) = v11;
					*((_OWORD*)v9 - 7) = *((_OWORD*)a2 - 7);
					*((_OWORD*)v9 - 6) = *((_OWORD*)a2 - 6);
					*((_OWORD*)v9 - 5) = *((_OWORD*)a2 - 5);
					*((_OWORD*)v9 - 4) = *((_OWORD*)a2 - 4);
					*((_OWORD*)v9 - 3) = *((_OWORD*)a2 - 3);
					*((_OWORD*)v9 - 2) = *((_OWORD*)a2 - 2);
					*((_OWORD*)v9 - 1) = *((_OWORD*)a2 - 1);
					--v10;
				} while (v10);
				v12 = *(_OWORD*)a2;
				*(_DWORD*)(a1 + 1180) = a4;
				*(_OWORD*)v9 = v12;
			}
		}
		else if (a4 == 6 && v4)
		{
			v5 = 1;
			*(_DWORD*)(a1 + 1180) = 0;
		}
	}
	if (a3)
		sub_140412AD0(a1);
	return v5;
}

