#include "../winhttp.h"

//----- (00000001403B7F50) ----------------------------------------------------
void __fastcall sub_1403B7F50(__int64 a1)
{
	unsigned __int64 i; // rbx
	__int64 v3; // rcx
	__int64 v4; // rsi
	__int64 v5; // rbp
	__int64 v6; // rax
	__int64 v7; // r14
	__int64 v8; // rcx
	__int128 v9; // [rsp+20h] [rbp-38h]
	__int128 v10; // [rsp+30h] [rbp-28h] BYREF

	for (i = 0i64; i < *(_QWORD*)(a1 + 2712); ++i)
	{
		v3 = *(_QWORD*)(a1 + 2704);
		if (*(_QWORD*)(v3 + 8 * i))
		{
			v4 = 8i64 * (unsigned int)i;
			v5 = *(_QWORD*)(v4 + v3);
			if (v5)
			{
				v6 = sub_1405A4B80(*(_QWORD*)(v4 + v3), 1);
				*(_QWORD*)&v9 = sub_1405A5EA0;
				DWORD2(v9) = 0;
				v10 = v9;
				if (v6)
					sub_1405A5FE0(a1, v6, (__int64)&v10);
				sub_1403BAA80(a1, *(_DWORD*)(v5 + 64));
				v7 = *(_QWORD*)(a1 + 2704);
				v8 = *(_QWORD*)(v7 + 8i64 * (unsigned int)i);
				if (v8)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
					*(_QWORD*)(v7 + 8i64 * (unsigned int)i) = 0i64;
				}
				*(_QWORD*)(v4 + *(_QWORD*)(a1 + 2704)) = 0i64;
				*(_DWORD*)(qword_140C65898 + 28568) = 1;
			}
		}
	}
}
// 1403B7FD0: variable 'v9' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

