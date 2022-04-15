#include "../winhttp.h"

//----- (000000014002D9D0) ----------------------------------------------------
__int64 __fastcall sub_14002D9D0(__int64 a1, __int64 a2, __int64 a3)
{
	unsigned int v3; // ebx
	__int64 v6; // r8
	__int64 v7; // r9
	unsigned int v8; // eax
	int v10; // [rsp+20h] [rbp-88h]
	int v11; // [rsp+28h] [rbp-80h]
	__int64 v12; // [rsp+40h] [rbp-68h] BYREF
	unsigned int v13; // [rsp+48h] [rbp-60h]
	__int64 v14; // [rsp+50h] [rbp-58h]
	int v15; // [rsp+58h] [rbp-50h]
	unsigned int v16; // [rsp+5Ch] [rbp-4Ch]
	int* (__fastcall * v17)(__int64, unsigned int, unsigned int); // [rsp+70h] [rbp-38h]
	void(__fastcall * v18)(__int64, __int64); // [rsp+78h] [rbp-30h]
	__int64 v19; // [rsp+80h] [rbp-28h]

	v3 = a3;
	if (!a2 || !a3)
		return 2147500037i64;
	sub_1407E4830((int*)&v12, 0i64, 0x58ui64);
	v17 = sub_14002D9A0;
	v14 = 0i64;
	v18 = sub_14002D9C0;
	v15 = 0;
	v19 = 0i64;
	v12 = a2;
	v13 = v3;
	if ((unsigned int)sub_1401A95F0(&v12, 9u, v6, v7, v10, v11, "1.2.8"))
		return 2684551169i64;
	v8 = sub_1401A9920((__int64)&v12, v3, ((v3 + 7) >> 3) + 5 + v3 + ((v3 + 63) >> 6));
	sub_140033620(a1, v8);
	v14 = *(_QWORD*)a1;
	v15 = *(_DWORD*)(a1 + 8);
	if ((unsigned int)sub_1401A9A90((__int64)&v12) != 1)
	{
		sub_1401AA350((__int64)&v12);
		return 2684551169i64;
	}
	sub_140033620(a1, v16);
	sub_1401AA350((__int64)&v12);
	return 0i64;
}
// 14002DA55: variable 'v6' is possibly undefined
// 14002DA55: variable 'v7' is possibly undefined
// 14002DA55: variable 'v10' is possibly undefined
// 14002DA55: variable 'v11' is possibly undefined

