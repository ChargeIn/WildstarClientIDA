#include "../winhttp.h"

//----- (00000001403C85C0) ----------------------------------------------------
__int64 __fastcall sub_1403C85C0(
	__int64 a1,
	unsigned int* a2,
	__int64 a3,
	__int64 a4,
	__int64 a5,
	__int64 a6,
	__int64 a7)
{
	__int64 v9; // rax
	int v10; // ebx
	int v12; // [rsp+20h] [rbp-28h] BYREF
	__int64 v13; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v14)(__int64); // [rsp+30h] [rbp-18h]
	__int64 v15; // [rsp+38h] [rbp-10h]

	if ((dword_140DC2300 & 1) != 0)
	{
		v10 = dword_140DC2304;
	}
	else
	{
		dword_140DC2300 |= 1u;
		v9 = sub_140200220(0x463u);
		if (v9)
		{
			v10 = *(_DWORD*)(v9 + 4);
			dword_140DC2304 = v10;
		}
		else
		{
			v10 = 30000;
			dword_140DC2304 = 30000;
		}
	}
	v12 = 0;
	v13 = sub_14001C280(a1);
	v15 = 0i64;
	v14 = sub_1403C8690;
	sub_140195960(a1 + 26472, v10, (__int64)&v12, 4);
	return Apollo_LUAEvent(*(_QWORD*)(a1 + 29504), "PendingWorldRemovalWarning", byte_1409E9E1C, *a2, a5, a6, a7);
}
// 1409E9E1C: using guessed type _BYTE byte_1409E9E1C[72];
// 140DC2300: using guessed type int dword_140DC2300;
// 140DC2304: using guessed type int dword_140DC2304;

