#include "../winhttp.h"

//----- (000000014051E580) ----------------------------------------------------
void __fastcall sub_14051E580(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v3; // rax
	__int64 v4; // rdx
	__int64 v5; // rax
	int v6; // [rsp+20h] [rbp-48h]
	int v7; // [rsp+28h] [rbp-40h]
	int v8; // [rsp+30h] [rbp-38h]
	__int64 v9; // [rsp+40h] [rbp-28h] BYREF
	__int64 v10; // [rsp+48h] [rbp-20h]
	__int64 v11; // [rsp+50h] [rbp-18h]

	v1 = *(_QWORD*)(a1 + 16);
	if (v1)
	{
		v3 = sub_1403ACBB0(qword_140C65898 + 160, v1);
		if (v3)
		{
			v4 = *(unsigned int*)(a1 + 24);
			if ((unsigned int)v4 < 8)
			{
				if (*(_DWORD*)(v3 + 4 * v4 + 188))
				{
					v10 = 0i64;
					v9 = 0i64;
					v11 = 0i64;
					v5 = *(_QWORD*)(a1 + 16);
					LODWORD(v10) = v4;
					v9 = v5;
					HIDWORD(v10) = *(_DWORD*)(a1 + 28);
					LODWORD(v11) = *(_DWORD*)(a1 + 32);
					sub_1403F4900(qword_140C65898, 0x85Au, (__int64)&v9);
					v8 = v11;
					v7 = HIDWORD(v10);
					v6 = v10;
					sub_1400D4040(*(_QWORD*)(a1 + 8), "RuneSlotCleared", *(char**)(a1 + 8), "ibb", v6, v7, v8);
				}
			}
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

