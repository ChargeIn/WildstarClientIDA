#include "../winhttp.h"

//----- (00000001403B7300) ----------------------------------------------------
__int64 __fastcall sub_1403B7300(__int64 a1, __int64* a2)
{
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rcx
	unsigned int v7; // r12d
	BOOL v8; // r15d
	int v9; // r14d
	__int64 v10; // rax
	__int64 v11; // rbp
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	int v16; // [rsp+60h] [rbp+8h] BYREF
	int v17; // [rsp+64h] [rbp+Ch]
	int v18; // [rsp+70h] [rbp+18h] BYREF
	unsigned int v19; // [rsp+74h] [rbp+1Ch]

	if (*(_QWORD*)(a1 + 120))
	{
		v4 = sub_1403ACBB0(a1 + 160, *a2);
		v5 = v4;
		if (v4)
		{
			v6 = a2[1];
			v7 = (unsigned __int8)v6;
			v8 = *(_DWORD*)(v4 + 32) == 0;
			v9 = BYTE1(v6);
			v10 = *(_QWORD*)v4;
			v17 = (unsigned __int8)v6;
			v16 = BYTE1(v6);
			(*(void(__fastcall**)(__int64, int*))(v10 + 32))(v5, &v18);
			v11 = sub_1403AC780(a1 + 160, &v16);
			sub_1403D2E10(a1 + 160, &v16, v5);
			sub_1403D2E10(a1 + 160, &v18, 0i64);
			v12 = *(_QWORD*)(a1 + 120);
			*(_DWORD*)(a1 + 28568) = 1;
			v13 = *(_QWORD*)(v12 + 5640);
			if (v13)
			{
				while (*(_DWORD*)(v13 + 4) != 3 || *(_DWORD*)(v13 + 12) != 777)
				{
					v13 = *(_QWORD*)(v13 + 136);
					if (!v13)
						goto LABEL_9;
				}
				sub_1407A0390(v13);
			}
		LABEL_9:
			sub_1400A8020(*(_QWORD*)(a1 + 29504) + 4672i64);
			sub_1400A8020(*(_QWORD*)(a1 + 29504) + 3720i64);
			v14 = *(_QWORD*)(a1 + 32736);
			if (v14)
				sub_1400A8020(v14 + 376);
			if (!v9)
				Apollo_LUAEvent(*(_QWORD*)(a1 + 29504), "PlayerEquippedItemChanged", byte_1409E9FEC, v7, v5, v11);
			if (!v18)
				Apollo_LUAEvent(*(_QWORD*)(a1 + 29504), "PlayerEquippedItemChanged", byte_1409E9FEC, v19, v11, v5);
			if (!*(_DWORD*)(v5 + 32) || v8)
				*(_DWORD*)(a1 + 1368) = 1;
		}
	}
	return 0i64;
}
// 1409E9FEC: using guessed type _BYTE byte_1409E9FEC[16];

