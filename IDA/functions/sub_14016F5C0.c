#include "../winhttp.h"

//----- (000000014016F5C0) ----------------------------------------------------
char __fastcall sub_14016F5C0(__int64 a1)
{
	__int64 v1; // rax
	int v2; // ebp
	int v3; // r12d
	int v5; // esi
	unsigned __int64 v6; // r14
	unsigned __int64 i; // rdi
	int v8; // ecx
	int v9; // eax
	int v11; // [rsp+50h] [rbp+8h] BYREF
	int v12; // [rsp+58h] [rbp+10h] BYREF

	*(_QWORD*)(a1 + 1584) = 0i64;
	v1 = *(_QWORD*)(a1 + 472);
	v2 = *(_DWORD*)(a1 + 720);
	v3 = *(_DWORD*)(a1 + 728);
	if (v1)
		LODWORD(v1) = *(_DWORD*)(v1 + 1300);
	v5 = HIDWORD(qword_140C784C0) - v1;
	LOBYTE(v1) = *(_BYTE*)(a1 + 664) >> 4;
	if ((*(_BYTE*)(a1 + 664) & 0x10) != 0)
	{
		LODWORD(v1) = *(_DWORD*)(a1 + 1372);
		v5 += v1;
		v2 += v1;
	}
	v6 = *(_QWORD*)(a1 + 1600);
	for (i = 0i64; i < v6; ++i)
	{
		v1 = *(int*)(*(_QWORD*)(a1 + 1592) + 4 * i);
		v12 = v1;
		if ((int)v1 >= 0
			&& (int)v1 < (int)((__int64)(*(_QWORD*)(a1 + 1424) - *(_QWORD*)(a1 + 1416)) >> 3)
			&& *(_QWORD*)(*(_QWORD*)(a1 + 1416) + 8 * v1))
		{
			v11 = v1;
			LODWORD(v1) = sub_14016E100(a1, &v11);
			v5 += v1;
			if (v5 >= v2)
			{
				if (!*(_QWORD*)(a1 + 1584))
				{
					v8 = 0;
					v9 = v1 - v5 - v2;
					if (v9 > 0)
						v8 = v9;
					*(_DWORD*)(a1 + 1608) = v8;
				}
				LOBYTE(v1) = sub_140172EB0((__int64*)(a1 + 1576), &v12);
			}
			if (v3 < v5)
				break;
		}
	}
	return v1;
}
// 140C784C0: using guessed type __int64 qword_140C784C0;

