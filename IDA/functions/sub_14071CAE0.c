#include "../winhttp.h"

//----- (000000014071CAE0) ----------------------------------------------------
__int64 __fastcall sub_14071CAE0(__int64 a1, __int128* a2)
{
	__int64 v4; // r8
	__int128* v5; // r9
	__int64 v6; // rax
	__int128 v7; // xmm0

	v4 = a1;
	v5 = a2;
	if ((((unsigned __int8)a1 | (unsigned __int8)a2) & 0xF) != 0)
	{
		sub_1407DB590((int*)a1, (int*)a2, 0x98ui64);
	}
	else
	{
		v6 = 1i64;
		do
		{
			v7 = *v5;
			v4 += 128i64;
			v5 += 8;
			*(_OWORD*)(v4 - 128) = v7;
			*(_OWORD*)(v4 - 112) = *(v5 - 7);
			*(_OWORD*)(v4 - 96) = *(v5 - 6);
			*(_OWORD*)(v4 - 80) = *(v5 - 5);
			*(_OWORD*)(v4 - 64) = *(v5 - 4);
			*(_OWORD*)(v4 - 48) = *(v5 - 3);
			*(_OWORD*)(v4 - 32) = *(v5 - 2);
			*(_OWORD*)(v4 - 16) = *(v5 - 1);
			--v6;
		} while (v6);
		*(_OWORD*)v4 = *v5;
		*(_QWORD*)(v4 + 16) = *((_QWORD*)v5 + 2);
	}
	*(_QWORD*)(a1 + 152) = *((_QWORD*)a2 + 19);
	*(_DWORD*)(a1 + 160) = *((_DWORD*)a2 + 40);
	*(_DWORD*)(a1 + 164) = *((_DWORD*)a2 + 41);
	*(_DWORD*)(a1 + 168) = *((_DWORD*)a2 + 42);
	*(_DWORD*)(a1 + 172) = *((_DWORD*)a2 + 43);
	*(_OWORD*)(a1 + 176) = a2[11];
	*(_DWORD*)(a1 + 192) = *((_DWORD*)a2 + 48);
	*(_DWORD*)(a1 + 196) = *((_DWORD*)a2 + 49);
	*(_DWORD*)(a1 + 200) = *((_DWORD*)a2 + 50);
	return a1;
}

