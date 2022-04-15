#include "../winhttp.h"

//----- (00000001408A91D0) ----------------------------------------------------
__int64 __fastcall sub_1408A91D0(__int64 a1, __int64 a2)
{
	int v4; // ecx
	int v5; // ecx
	int v6; // ecx
	int v7; // ecx
	__int64 v8; // rbx
	unsigned int i; // edx
	unsigned int v10; // r14d
	__int64 v11; // rbp
	int v12; // ecx
	__int64 v13; // rbx
	unsigned int j; // edx
	unsigned int v15; // r14d
	__int64 v16; // rbp
	int v17; // ecx
	__int64 v18; // rbx
	unsigned int k; // edx
	unsigned int v20; // r14d
	__int64 v21; // rbp
	int v22; // ecx
	__int64 v23; // rbx
	unsigned int m; // edx
	unsigned int v25; // r14d
	__int64 v26; // rbp
	__int64 result; // rax

	v4 = *(_DWORD*)a1 - 1;
	if (v4)
	{
		v5 = v4 - 1;
		if (v5)
		{
			v6 = v5 - 1;
			if (v6)
			{
				if (v6 == 1)
				{
					v7 = *(_DWORD*)(a2 + 8);
					v8 = 0i64;
					for (i = 0; v7; v7 &= v7 - 1)
						++i;
					v10 = *(unsigned __int16*)(a2 + 18);
					if (i)
					{
						v11 = i;
						do
						{
							sub_1408AA630((float*)a1, (float*)(*(_QWORD*)a2 + 4 * v8 * *(unsigned __int16*)(a2 + 16)), v10);
							++v8;
							--v11;
						} while (v11);
					}
				}
			}
			else
			{
				v12 = *(_DWORD*)(a2 + 8);
				v13 = 0i64;
				for (j = 0; v12; v12 &= v12 - 1)
					++j;
				v15 = *(unsigned __int16*)(a2 + 18);
				if (j)
				{
					v16 = j;
					do
					{
						sub_1408A9E60((float*)a1, (float*)(*(_QWORD*)a2 + 4 * v13 * *(unsigned __int16*)(a2 + 16)), v15);
						++v13;
						--v16;
					} while (v16);
				}
			}
		}
		else
		{
			v17 = *(_DWORD*)(a2 + 8);
			v18 = 0i64;
			for (k = 0; v17; v17 &= v17 - 1)
				++k;
			v20 = *(unsigned __int16*)(a2 + 18);
			if (k)
			{
				v21 = k;
				do
				{
					sub_1408A9890((float*)a1, (float*)(*(_QWORD*)a2 + 4 * v18 * *(unsigned __int16*)(a2 + 16)), v20);
					++v18;
					--v21;
				} while (v21);
			}
		}
	}
	else
	{
		v22 = *(_DWORD*)(a2 + 8);
		v23 = 0i64;
		for (m = 0; v22; v22 &= v22 - 1)
			++m;
		v25 = *(unsigned __int16*)(a2 + 18);
		if (m)
		{
			v26 = m;
			do
			{
				sub_1408A9390((float*)a1, (float*)(*(_QWORD*)a2 + 4 * v23 * *(unsigned __int16*)(a2 + 16)), v25);
				++v23;
				--v26;
			} while (v26);
		}
	}
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
	*(_DWORD*)(a1 + 16) = *(_DWORD*)(a1 + 12);
	result = *(unsigned int*)(a1 + 20);
	*(_DWORD*)(a1 + 24) = result;
	return result;
}

