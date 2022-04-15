#include "../winhttp.h"

//----- (000000014043A640) ----------------------------------------------------
signed __int64 __fastcall sub_14043A640(
	__int64* a1,
	__int64 a2,
	unsigned __int64 a3,
	__int64 a4,
	unsigned __int8(__fastcall* a5)(__int64, __int64))
{
	unsigned __int64 v5; // rbx
	__int64* v8; // r15
	__int64 v9; // r12
	__int64 v10; // rbx
	__int64 v11; // rsi
	__int64 v12; // rbp
	bool v13; // zf
	__int64 i; // rbx

	v5 = a3;
	sub_14043A970((__int64)a1, a2, a5);
	v8 = (__int64*)a2;
	if (a2 < v5)
	{
		do
		{
			if (a5(*v8, *a1))
			{
				v9 = *v8;
				v10 = 2i64;
				v11 = 0i64;
				v12 = (a2 - (__int64)a1) >> 3;
				*v8 = *a1;
				v13 = v12 == 2;
				if (v12 > 2)
				{
					do
					{
						if (a5(a1[v10], a1[v10 - 1]))
							--v10;
						a1[v11] = a1[v10];
						v11 = v10;
						v10 = 2 * v10 + 2;
						v13 = v10 == v12;
					} while (v10 < v12);
				}
				if (v13)
				{
					a1[v11] = a1[v10 - 1];
					v11 = v10 - 1;
				}
				for (i = (v11 - 1) / 2; v11 > 0; i = (i - 1) / 2)
				{
					if (!a5(a1[i], v9))
						break;
					a1[v11] = a1[i];
					v11 = i;
				}
				v5 = a3;
				a1[v11] = v9;
			}
			++v8;
		} while ((unsigned __int64)v8 < v5);
	}
	return sub_14043A820((__int64)a1, a2, a5);
}

