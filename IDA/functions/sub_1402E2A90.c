#include "../winhttp.h"

//----- (00000001402E2A90) ----------------------------------------------------
__int64 __fastcall sub_1402E2A90(__int64 a1, __int64 a2, __int64 a3)
{
	int v3; // ebx
	__int64 v7; // rax
	int v8; // ebp
	int* v9; // rax
	__int64 v10; // r8
	__int64 v11; // r9
	__int64 v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rcx
	int v15; // [rsp+20h] [rbp-88h]
	int v16; // [rsp+28h] [rbp-80h]
	__int64 v17; // [rsp+40h] [rbp-68h] BYREF
	int v18; // [rsp+48h] [rbp-60h]
	__int64 v19; // [rsp+50h] [rbp-58h]
	int v20; // [rsp+58h] [rbp-50h]
	unsigned int v21; // [rsp+5Ch] [rbp-4Ch]
	int* (__fastcall * v22)(__int64, int, int); // [rsp+70h] [rbp-38h]
	void(__fastcall * v23)(__int64, __int64); // [rsp+78h] [rbp-30h]
	__int64 v24; // [rsp+80h] [rbp-28h]

	v3 = a3;
	if (a3)
	{
		if (!a2)
			return 2147942487i64;
		v7 = ((unsigned int)a3 >> 25) + (_DWORD)a3 + ((unsigned int)a3 >> 14) + ((unsigned int)a3 >> 12) + 13;
		v8 = ((unsigned int)a3 >> 25) + a3 + ((unsigned int)a3 >> 14) + ((unsigned int)a3 >> 12) + 13;
		*(_QWORD*)(a1 + 16) = v7 + 4;
		v9 = sub_14018B280(v7 + 4, 1u);
		*(_QWORD*)(a1 + 24) = v9;
		if (!v9)
			return 2147942414i64;
		*v9 = v3;
		v12 = *(_QWORD*)(a1 + 24) + 4i64;
		v17 = a2;
		v19 = v12;
		v18 = v3;
		v22 = sub_1402E30D0;
		v20 = v8;
		v23 = sub_14002D9C0;
		v24 = 0i64;
		if ((unsigned int)sub_1401A95F0(&v17, 0xFFFFFFFF, v10, v11, v15, v16, "1.2.8"))
			return 2147500037i64;
		if ((unsigned int)sub_1401A9A90((__int64)&v17) != 1)
		{
			sub_1401AA350((__int64)&v17);
			return 2147500037i64;
		}
		v13 = v21;
		sub_1401AA350((__int64)&v17);
		v14 = *(_QWORD*)(a1 + 24);
		*(_QWORD*)(a1 + 16) = v13 + 4;
		*(_QWORD*)(a1 + 24) = sub_14018C320(v14, v13 + 4, 0);
	}
	return 0i64;
}
// 1402E2B5B: variable 'v10' is possibly undefined
// 1402E2B5B: variable 'v11' is possibly undefined
// 1402E2B5B: variable 'v15' is possibly undefined
// 1402E2B5B: variable 'v16' is possibly undefined

