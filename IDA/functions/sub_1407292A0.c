#include "../winhttp.h"

//----- (00000001407292A0) ----------------------------------------------------
__int64 __fastcall sub_1407292A0(__int64* a1, unsigned int* a2)
{
	unsigned __int64 v2; // rbp
	unsigned __int64 i; // r14
	int v6; // xmm0_4
	__int64 v7; // rbx
	int* v8; // rax
	int* v9; // rdx
	int* v10; // r15
	__int64 v11; // rcx
	int v12; // xmm6_4
	__int64 v13; // rbx
	int* v14; // rax
	__int64 v15; // rcx
	int* v16; // r14
	int* v17; // rdx
	__int64 v18; // rcx
	__int64 v20; // [rsp+20h] [rbp-58h]
	__int64 v21; // [rsp+80h] [rbp+8h]

	v2 = 0i64;
	a1[189] = 0i64;
	for (i = 0i64; i < *a2; ++i)
	{
		if (i >= a2[8])
			v6 = -1082130432;
		else
			v6 = *(_DWORD*)(*((_QWORD*)a2 + 5) + 4 * i);
		v7 = a1[189];
		HIDWORD(v21) = v6;
		LODWORD(v21) = *(_DWORD*)(*((_QWORD*)a2 + 1) + 4 * i);
		v8 = sub_14018DB00(a1[188], v7 + 1, 8i64);
		*(_QWORD*)&v8[2 * v7] = v21;
		v9 = (int*)a1[188];
		v10 = v8;
		if (v9 != v8)
		{
			sub_1407DB590(v8, v9, 8 * a1[189]);
			v11 = a1[188];
			if (v11)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
			a1[188] = (__int64)v10;
		}
		a1[189] = v7 + 1;
	}
	a1[191] = 0i64;
	if (a2[4])
	{
		do
		{
			if (v2 >= a2[12])
				v12 = -1082130432;
			else
				v12 = *(_DWORD*)(*((_QWORD*)a2 + 7) + 4 * v2);
			v13 = a1[191];
			v20 = *(_QWORD*)(*((_QWORD*)a2 + 3) + 8 * v2);
			v14 = sub_14018DB00(a1[190], v13 + 1, 12i64);
			v15 = 3 * v13;
			v16 = v14;
			*(_QWORD*)&v14[v15] = v20;
			v14[v15 + 2] = v12;
			v17 = (int*)a1[190];
			if (v17 != v14)
			{
				sub_1407DB590(v14, v17, 12 * a1[191]);
				v18 = a1[190];
				if (v18)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v18 - 16) + 8i64))(v18 - 16);
				a1[190] = (__int64)v16;
			}
			a1[191] = v13 + 1;
			++v2;
		} while (v2 < a2[4]);
	}
	return 0i64;
}

