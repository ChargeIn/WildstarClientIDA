#include "../winhttp.h"

//----- (00000001401CC110) ----------------------------------------------------
__int64 __fastcall sub_1401CC110(_WORD* a1, __int64 a2, int a3)
{
	int v3; // ebx
	int v4; // edi
	int v5; // r10d
	__int64 result; // rax
	int v8; // r11d
	unsigned __int16* v9; // rdx
	__int64 v10; // r8
	__int64 v11; // rcx

	v3 = *(unsigned __int16*)(a2 + 2);
	v4 = -1;
	v5 = 0;
	result = 7i64;
	v8 = 4;
	if (!*(_WORD*)(a2 + 2))
	{
		result = 138i64;
		v8 = 3;
	}
	*(_WORD*)(a2 + 4i64 * a3 + 6) = -1;
	if (a3 >= 0i64)
	{
		v9 = (unsigned __int16*)(a2 + 6);
		v10 = a3 + 1i64;
		do
		{
			++v5;
			v11 = v3;
			v3 = *v9;
			if (v5 >= (int)result || (_DWORD)v11 != v3)
			{
				if (v5 >= v8)
				{
					if ((_DWORD)v11)
					{
						if ((_DWORD)v11 != v4)
							++a1[2 * v11 + 1362];
						++a1[1394];
					}
					else if (v5 > 10)
					{
						++a1[1398];
					}
					else
					{
						++a1[1396];
					}
				}
				else
				{
					a1[2 * v11 + 1362] += v5;
				}
				v5 = 0;
				v4 = v11;
				if (v3)
				{
					if ((_DWORD)v11 == v3)
					{
						result = 6i64;
						v8 = 3;
					}
					else
					{
						result = 7i64;
						v8 = 4;
					}
				}
				else
				{
					result = 138i64;
					v8 = 3;
				}
			}
			v9 += 2;
			--v10;
		} while (v10);
	}
	return result;
}

