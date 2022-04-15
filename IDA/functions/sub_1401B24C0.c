#include "../winhttp.h"

//----- (00000001401B24C0) ----------------------------------------------------
__int64 __fastcall sub_1401B24C0(int* a1, int* a2, __int64 a3)
{
	int v3; // r9d
	int v4; // eax
	int v5; // r10d
	int v8; // eax
	int v9; // eax
	int v10; // edx
	int v11; // ecx
	int v12; // ecx
	__int64 v13; // r11
	unsigned __int64 i; // r10
	int v15; // ebx
	int v16; // edi
	unsigned __int64 v17; // rdx
	__int64 v18; // r8
	int* v19; // rcx
	int v20; // eax
	int v21; // r9d
	int v23; // [rsp+0h] [rbp-28h]
	int v24[3]; // [rsp+4h] [rbp-24h]
	int v25; // [rsp+10h] [rbp-18h]
	int v26[5]; // [rsp+14h] [rbp-14h]

	v3 = *a1;
	v4 = *a2;
	v5 = a1[2];
	v25 = v3;
	if (v4 >= v3)
	{
		if (v4 > v5)
			v4 = v5;
	}
	else
	{
		v4 = v3;
	}
	v26[0] = v4;
	v8 = a2[2];
	if (v8 >= v3)
	{
		if (v8 > v5)
			v8 = v5;
		v3 = v8;
	}
	v9 = a1[1];
	v10 = a1[3];
	v11 = a2[1];
	v26[1] = v3;
	v26[2] = v5;
	v23 = v9;
	if (v11 >= v9)
	{
		if (v11 > v10)
			v11 = v10;
	}
	else
	{
		v11 = v9;
	}
	v24[0] = v11;
	v12 = a2[3];
	if (v12 >= v9)
	{
		if (v12 > v10)
			v12 = v10;
		v9 = v12;
	}
	v13 = 0i64;
	v24[1] = v9;
	v24[2] = v10;
	for (i = 0i64; i < 3; ++i)
	{
		v15 = v24[i - 1];
		v16 = v24[i];
		if (v15 != v16)
		{
			v17 = 0i64;
			v18 = 0i64;
			v19 = (int*)(16 * v13 + a3 + 4);
			do
			{
				if (v18 != 1)
				{
					v20 = v26[v17 - 1];
					v21 = v26[v17];
					if (v20 != v21)
					{
						if (a3)
						{
							*(v19 - 1) = v20;
							*v19 = v15;
							v19[1] = v21;
							v19[2] = v16;
						}
						++v13;
						v19 += 4;
					}
				}
				++v17;
				v18 += i;
			} while (v17 < 3);
		}
	}
	return v13;
}

