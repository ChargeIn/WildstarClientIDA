#include "../winhttp.h"

//----- (000000014042B770) ----------------------------------------------------
void __fastcall sub_14042B770(__int64 a1, unsigned int* a2)
{
	_QWORD* v2; // rdi
	__int64 v4; // r8
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	unsigned __int64 v9; // rbx
	unsigned int v10; // esi
	__int64 v11; // rsi
	__int64 v12; // rdx
	__int64 v13; // rdx
	__int64(__fastcall * *v14)(); // [rsp+20h] [rbp-28h] BYREF
	unsigned int v15; // [rsp+28h] [rbp-20h]
	_QWORD* v16; // [rsp+30h] [rbp-18h]
	int v17; // [rsp+38h] [rbp-10h]

	v2 = *(_QWORD**)(a1 + 400);
	v4 = v2[4];
	v14 = off_140B569F0;
	v6 = *(_QWORD*)(v4 + 112);
	v16 = v2;
	v17 = 1;
	if (*(_QWORD*)(v4 + 120) >= v6)
		sub_14005E2C0((__int64)v2);
	v7 = v2[2];
	v8 = sub_14005C1B0((__int64)v2, 0, 0);
	*(_DWORD*)(v7 + 8) = 5;
	*(_QWORD*)v7 = v8;
	v2[2] += 16i64;
	v9 = 0i64;
	v10 = sub_1400578C0((__int64)v2);
	v15 = v10;
	if (*a2)
	{
		v11 = 0i64;
		do
		{
			v12 = v11 + *((_QWORD*)a2 + 1);
			if (v12 && (unsigned int)sub_140433750(v2, v12))
			{
				sub_1400FB470((__int64)&v14);
				v2 = v16;
				v16[2] -= 16i64;
			}
			++v9;
			v11 += 112i64;
		} while (v9 < *a2);
		v10 = v15;
	}
	sub_1400EA3E0(a1, "OwnedItemAuctions", byte_1409EC3D4, v10, v14);
	if (v2)
		sub_1400579E0((__int64)v2, v13, v10);
}
// 14042B860: variable 'v13' is possibly undefined
// 1409EC3D4: using guessed type _BYTE byte_1409EC3D4[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

