#include "../winhttp.h"

//----- (0000000140348290) ----------------------------------------------------
__int64 __fastcall sub_140348290(__int64 a1, int* a2)
{
	int v2; // eax
	int* v4; // rdx
	int* v6; // rcx
	__int64 v7; // rax
	__int128 v8; // xmm0
	void(__fastcall * **v9)(_QWORD); // rcx

	v2 = *a2;
	v4 = a2 + 1;
	*(_DWORD*)a1 = v2;
	v6 = (int*)(a1 + 4);
	if ((((unsigned __int8)v6 | (unsigned __int8)v4) & 0xF) != 0)
	{
		sub_1407DB590(v6, v4, 0x208ui64);
	}
	else
	{
		v7 = 4i64;
		do
		{
			v8 = *(_OWORD*)v4;
			v6 += 32;
			v4 += 32;
			*((_OWORD*)v6 - 8) = v8;
			*((_OWORD*)v6 - 7) = *((_OWORD*)v4 - 7);
			*((_OWORD*)v6 - 6) = *((_OWORD*)v4 - 6);
			*((_OWORD*)v6 - 5) = *((_OWORD*)v4 - 5);
			*((_OWORD*)v6 - 4) = *((_OWORD*)v4 - 4);
			*((_OWORD*)v6 - 3) = *((_OWORD*)v4 - 3);
			*((_OWORD*)v6 - 2) = *((_OWORD*)v4 - 2);
			*((_OWORD*)v6 - 1) = *((_OWORD*)v4 - 1);
			--v7;
		} while (v7);
		*(_QWORD*)v6 = *(_QWORD*)v4;
	}
	v9 = (void(__fastcall***)(_QWORD)) * ((_QWORD*)a2 + 66);
	*(_QWORD*)(a1 + 528) = v9;
	if (v9)
		(**v9)(v9);
	return a1;
}

