#include "../winhttp.h"

//----- (000000014077DE30) ----------------------------------------------------
void __fastcall sub_14077DE30(__int64 a1)
{
	__int64 v2; // rcx
	unsigned int v3; // eax
	__int64 v4; // rbx
	__int64 v5; // rax
	int* v6; // rdx
	int v7; // [rsp+38h] [rbp+10h] BYREF
	int v8; // [rsp+3Ch] [rbp+14h]

	v2 = qword_140C65898;
	if (*(_QWORD*)(qword_140C65898 + 25744))
	{
		if (!*(_DWORD*)(a1 + 276))
		{
			v3 = sub_140397740(qword_140C65898);
			sub_1405C7960((__int64*)a1, v3);
			v2 = qword_140C65898;
		}
		v4 = 0i64;
		*(_DWORD*)(a1 + 240) = 1065353216;
		*(_OWORD*)(a1 + 208) = xmmword_140B7B240;
		*(_QWORD*)(a1 + 256) = 0i64;
		*(_OWORD*)(a1 + 224) = 0i64;
		v7 = 0;
		v8 = 16;
		*(_QWORD*)(a1 + 148) = 0i64;
		*(_QWORD*)(a1 + 156) = 0i64;
		*(_QWORD*)(a1 + 164) = 0i64;
		*(_QWORD*)(a1 + 172) = 0i64;
		*(_QWORD*)(a1 + 180) = 0i64;
		*(_QWORD*)(a1 + 188) = 0i64;
		*(_DWORD*)(a1 + 144) = 0;
		*(_QWORD*)(a1 + 248) = 0i64;
		*(_DWORD*)(a1 + 264) = 0;
		v5 = sub_1403AC780(v2 + 160, &v7);
		if (v5)
		{
			v6 = *(int**)(*(_QWORD*)(v5 + 64) + 488i64);
			if (v6)
			{
				if (*(_WORD*)v6)
				{
					do
						++v4;
					while (*((_WORD*)v6 + v4));
				}
				sub_14001C480(a1 + 16, v6, (int*)((char*)v6 + 2 * v4));
			}
		}
	}
	else
	{
		*(_DWORD*)(a1 + 240) = 0;
		*(_OWORD*)(a1 + 208) = xmmword_140B7AD40;
	}
}
// 140B7AD40: using guessed type __int128 xmmword_140B7AD40;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65898: using guessed type __int64 qword_140C65898;

