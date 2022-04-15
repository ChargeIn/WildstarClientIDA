#include "../winhttp.h"

//----- (00000001402B2830) ----------------------------------------------------
_QWORD* __fastcall sub_1402B2830(__int64 a1, int a2, _QWORD* a3, _QWORD* a4, int a5)
{
	__int64 v5; // r14
	__int64 v8; // r12
	__int64 v9; // rbp
	unsigned __int64 v10; // rdi
	unsigned __int64 v11; // rsi
	unsigned __int64 v12; // rbx
	int v13; // r15d
	__int64 v14; // rax
	__int64 v15; // r13
	unsigned __int64 v16; // rbx
	unsigned __int64 v17; // rdi
	int v18; // ebp
	__int64 v19; // rsi
	_QWORD* result; // rax
	__int64 v21; // [rsp+30h] [rbp-58h] BYREF
	unsigned __int64 v22; // [rsp+38h] [rbp-50h] BYREF
	unsigned __int64 v23[9]; // [rsp+40h] [rbp-48h] BYREF

	v5 = 0i64;
	v8 = 0i64;
	if (a5 <= 3)
	{
		v14 = *(_QWORD*)(a1 + 24);
		v21 = v14;
		if (v14)
		{
			v15 = *(_QWORD*)(a1 + 32);
			do
			{
				v16 = *(_QWORD*)a1;
				v17 = *(_QWORD*)(a1 + 8);
				if (v15)
				{
					v18 = *(_DWORD*)(a1 + 48);
					v19 = v15;
					v8 += v15;
					do
					{
						sub_1402B23F0(v18, v16, v17, v23, &v22, a2);
						v5 += v22;
						if (v17 > 1)
							v17 >>= 1;
						if (v16 > 1)
							v16 >>= 1;
						--v19;
					} while (v19);
					v15 = *(_QWORD*)(a1 + 32);
					v14 = v21;
				}
				v21 = --v14;
			} while (v14);
		}
	}
	else if (a5 == 4)
	{
		v9 = *(_QWORD*)(a1 + 32);
		v10 = *(_QWORD*)a1;
		v11 = *(_QWORD*)(a1 + 8);
		v12 = *(_QWORD*)(a1 + 16);
		if (v9)
		{
			v13 = *(_DWORD*)(a1 + 48);
			do
			{
				sub_1402B23F0(v13, v10, v11, &v22, &v21, a2);
				if (v12)
				{
					v5 += v12 * v21;
					v8 += v12;
				}
				if (v11 > 1)
					v11 >>= 1;
				if (v10 > 1)
					v10 >>= 1;
				if (v12 > 1)
					v12 >>= 1;
				--v9;
			} while (v9);
		}
	}
	*a3 = v8;
	result = a4;
	*a4 = v5;
	return result;
}
// 1402B2830: using guessed type unsigned __int64 var_48[9];

