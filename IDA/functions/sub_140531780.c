#include "../winhttp.h"

//----- (0000000140531780) ----------------------------------------------------
__int64 __fastcall sub_140531780(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__m128* v4; // rbx
	__m128* v5; // rax
	int v6; // ebp
	__int32 v7; // ecx
	int v8; // eax
	__int32 v9; // eax
	int* v10; // rax
	__m128 v12; // [rsp+20h] [rbp-28h] BYREF
	unsigned __int64 v13; // [rsp+58h] [rbp+10h] BYREF
	int v14; // [rsp+60h] [rbp+18h] BYREF
	int v15; // [rsp+64h] [rbp+1Ch]

	v2 = sub_14052E9B0(a1);
	v3 = v2;
	if (v2 && *(_QWORD*)(v2 + 1152))
	{
		sub_14052B440(v2, (int*)&v12);
		v4 = (__m128*)dword_140A12138;
		v5 = (__m128*)dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v5 = (__m128*)(a1[3] + 16i64);
		v6 = 0;
		v7 = v5->m128_i32[2];
		if (v7 != 3)
		{
			if (v7 != 4 || !sub_14005AC80((char*)(v5->m128_u64[0] + 32), &v13))
			{
				v8 = 0;
			LABEL_10:
				v14 = v8;
				if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
					v4 = (__m128*)(a1[3] + 32i64);
				v9 = v4->m128_i32[2];
				if (v9 != 3)
				{
					if (v9 != 4 || !sub_14005AC80((char*)(v4->m128_u64[0] + 32), &v13))
						goto LABEL_17;
					v12.m128_i32[2] = 3;
					v4 = &v12;
					v12.m128_u64[0] = v13;
				}
				v6 = (int)*(double*)v4->m128_u64;
			LABEL_17:
				v15 = v6;
				sub_14052AF60(v3, (__int128*)&v12, &v14);
				LODWORD(v13) = (***(__int64(__fastcall****)(_QWORD))(v3 + 1152))(*(_QWORD*)(v3 + 1152));
				v10 = sub_140538120(v3 + 1376, (int*)&v13);
				return sub_140771B60((__int64)v10, (__int64)a1, &v12);
			}
			v12.m128_i32[2] = 3;
			v5 = &v12;
			v12.m128_u64[0] = v13;
		}
		v8 = (int)*(double*)v5->m128_u64;
		goto LABEL_10;
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

