#include "../winhttp.h"

//----- (000000014084F7E0) ----------------------------------------------------
void __fastcall sub_14084F7E0(__int64 a1, char a2, char a3)
{
	__int64 v4; // rcx
	__int64* v6; // rcx
	__int64 v7; // rax
	char v8; // r8
	char v9; // r10
	__int64 v10; // rdx

	v4 = *(_QWORD*)(a1 + 40);
	if (v4)
		*(_BYTE*)(v4 + 32) = a3 & a2 | *(_BYTE*)(v4 + 32) & ~a3;
	v6 = *(__int64**)(a1 + 112);
	if (v6)
	{
		v7 = *v6;
		if (*v6 != v6[1])
		{
			v8 = ~a3;
			v9 = a3 & a2;
			do
			{
				v10 = *(_QWORD*)(v7 + 8);
				v7 += 16i64;
				*(_BYTE*)(v10 + 32) = v9 | v8 & *(_BYTE*)(v10 + 32);
			} while (v7 != *(_QWORD*)(*(_QWORD*)(a1 + 112) + 8i64));
		}
	}
}

