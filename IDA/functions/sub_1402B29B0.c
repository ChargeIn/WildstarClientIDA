#include "../winhttp.h"

//----- (00000001402B29B0) ----------------------------------------------------
char __fastcall sub_1402B29B0(unsigned __int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, unsigned __int64 a6)
{
	__int64 v7; // r8
	unsigned __int64 v8; // r14
	unsigned __int64 v10; // rbx
	int v11; // eax
	unsigned __int64 v12; // rdi
	unsigned __int64 v13; // rsi
	unsigned __int64 v14; // rbp
	__int64 v15; // r13
	__int64 v16; // r9
	__int64 v17; // rdx
	unsigned __int64 v18; // r8
	__int64 v19; // rax
	int v20; // ecx
	unsigned __int64 v21; // rax
	unsigned __int64 v22; // rdx
	unsigned __int64 v23; // rdi
	unsigned __int64 v24; // rsi
	__int64 v25; // rbp
	__int64 v26; // r12
	int v27; // eax
	unsigned __int64 v28; // [rsp+30h] [rbp-48h]
	unsigned __int64 v29; // [rsp+38h] [rbp-40h] BYREF
	unsigned __int64 v30; // [rsp+40h] [rbp-38h] BYREF
	__int64 v31; // [rsp+48h] [rbp-30h] BYREF
	int v32; // [rsp+98h] [rbp+20h]

	v32 = a4;
	v7 = a5;
	v8 = a1;
	if (!a5)
		return 0;
	v10 = 0i64;
	v28 = a1 + a2;
	v11 = *(_DWORD*)(a3 + 52);
	if (v11 >= 2)
	{
		if (v11 <= 3)
		{
			if (*(_QWORD*)(a3 + 24))
			{
				v21 = *(_QWORD*)(a3 + 32);
				if (v21)
				{
					v22 = 0i64;
					v29 = 0i64;
					while (1)
					{
						v23 = *(_QWORD*)a3;
						v24 = *(_QWORD*)(a3 + 8);
						v25 = 0i64;
						if (v21)
							break;
					LABEL_35:
						v29 = ++v22;
						if (v22 >= *(_QWORD*)(a3 + 24))
							return 1;
					}
					v26 = 48 * v10 + v7 + 16;
					while (v10 < a6)
					{
						sub_1402B23F0(*(_DWORD*)(a3 + 48), v23, v24, &v30, &v31, a4);
						*(_QWORD*)(v26 - 16) = v23;
						*(_QWORD*)(v26 - 8) = v24;
						v27 = *(_DWORD*)(a3 + 48);
						*(_QWORD*)(v26 + 24) = v8;
						*(_DWORD*)v26 = v27;
						++v10;
						*(_QWORD*)(v26 + 8) = v30;
						v26 += 48i64;
						v8 += v31;
						*(_QWORD*)(v26 - 32) = v31;
						if (v8 > v28)
							break;
						if (v24 > 1)
							v24 >>= 1;
						if (v23 > 1)
							v23 >>= 1;
						v21 = *(_QWORD*)(a3 + 32);
						a4 = v32;
						if (++v25 >= v21)
						{
							v22 = v29;
							v7 = a5;
							goto LABEL_35;
						}
					}
				}
			}
		}
		else if (v11 == 4)
		{
			if (*(_QWORD*)(a3 + 32))
			{
				v12 = *(_QWORD*)(a3 + 16);
				if (v12)
				{
					v13 = *(_QWORD*)a3;
					v14 = *(_QWORD*)(a3 + 8);
					v15 = 0i64;
					while (1)
					{
						sub_1402B23F0(*(_DWORD*)(a3 + 48), v13, v14, &v30, &v29, a4);
						v16 = 0i64;
						if (v12)
							break;
					LABEL_14:
						if (v14 > 1)
							v14 >>= 1;
						if (v13 > 1)
							v13 >>= 1;
						if (v12 > 1)
							v12 >>= 1;
						if ((unsigned __int64)++v15 >= *(_QWORD*)(a3 + 32))
							return 1;
						a4 = v32;
					}
					v17 = v29;
					v18 = v30;
					v19 = a5 + 16 + 48 * v10;
					while (v10 < a6)
					{
						*(_QWORD*)(v19 - 16) = v13;
						*(_QWORD*)(v19 - 8) = v14;
						v20 = *(_DWORD*)(a3 + 48);
						*(_QWORD*)(v19 + 24) = v8;
						v8 += v17;
						*(_QWORD*)(v19 + 8) = v18;
						*(_DWORD*)v19 = v20;
						*(_QWORD*)(v19 + 16) = v17;
						v19 += 48i64;
						++v10;
						if (v8 > v28)
							break;
						if (++v16 >= v12)
							goto LABEL_14;
					}
				}
			}
		}
	}
	return 0;
}
// 1402B2A53: conditional instruction was optimized away because rax.8!=0
// 1402B2B49: conditional instruction was optimized away because rcx.8!=0

