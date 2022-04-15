#include "../winhttp.h"

//----- (00000001405EEE80) ----------------------------------------------------
unsigned __int64 __fastcall sub_1405EEE80(__int64* a1, int* a2, _QWORD* a3)
{
	unsigned __int64 result; // rax
	unsigned __int64 v7; // rdx
	unsigned __int64 v8; // r8
	unsigned __int64 v9; // r9
	unsigned __int64 v10; // rcx
	int v11; // r8d
	int v12; // r8d
	_DWORD* v13; // rdx

	sub_140052360(a1, a3[1]);
	result = a3[1];
	v7 = 0i64;
	v8 = result >> 1;
	if (result)
	{
		do
		{
			++v7;
			result = *a1;
			*(_DWORD*)(*a1 + 4 * v7 - 4) = *(_DWORD*)(*a3 + 4 * v7 - 4) - *(_DWORD*)(*a3 + 4 * v8);
		} while (v7 < a3[1]);
	}
	v9 = 1i64;
	v10 = -1i64;
	*a2 = 0;
	if ((unsigned __int64)a1[1] > 1)
	{
		do
		{
			result = abs32(*(_DWORD*)(*a1 + 4 * v9) - *(_DWORD*)(*a1 + 4 * v9 - 4));
			if ((int)result > (int)abs32(*a2))
			{
				v10 = v9;
				*a2 = *(_DWORD*)(*a1 + 4 * v9) - *(_DWORD*)(*a1 + 4 * v9 - 4);
			}
			++v9;
		} while (v9 < a1[1]);
		if (v10 != -1i64)
		{
			v11 = *a2;
			result = abs32(*a2);
			if ((unsigned int)result > 0x1388)
			{
				if (v11 <= 0)
					v12 = v11 + 1000;
				else
					v12 = v11 - 1000;
				for (*a2 = v12; v10 < a1[1]; *v13 -= result)
				{
					v13 = (_DWORD*)(*a1 + 4 * v10);
					result = (unsigned int)*a2;
					++v10;
				}
			}
		}
	}
	return result;
}

