#include "../winhttp.h"

//----- (0000000140330FC0) ----------------------------------------------------
void __fastcall sub_140330FC0(__int64 a1)
{
	unsigned __int64 i; // rdx
	__int64 v3; // rax
	__int64 v4; // rcx

	for (i = 0i64; i < *(_QWORD*)(a1 + 136); ++i)
	{
		v3 = *(_QWORD*)(*(_QWORD*)(a1 + 144) + 8 * i);
		if (v3)
		{
			do
			{
				v4 = *(_QWORD*)(v3 + 8);
				*(_DWORD*)(v3 + 108) = 0;
				*(_QWORD*)(v3 + 112) = 0i64;
				*(_QWORD*)(v3 + 120) = -1i64;
				*(_QWORD*)(v3 + 128) = 0i64;
				*(_QWORD*)(v3 + 136) = 0i64;
				*(_QWORD*)(v3 + 144) = 0i64;
				*(_DWORD*)(v3 + 152) = 0;
				v3 = v4;
			} while (v4);
		}
	}
}

