#include "../winhttp.h"

//----- (00000001402ADA40) ----------------------------------------------------
__int64* __fastcall sub_1402ADA40(__int64* a1)
{
	__int64* result; // rax
	__int64 v2; // r11
	int v3; // r8d
	int v4; // r8d
	int v5; // r8d
	__int64 v6; // rdx
	__int64 v7; // rdx
	__int64 v8; // rdx
	__int64 v9; // r8

	result = a1 + 2;
	v2 = 4i64;
	do
	{
		v3 = *((_DWORD*)result - 2);
		if (v3)
		{
			v4 = v3 - 1;
			if (v4)
			{
				v5 = v4 - 1;
				if (v5)
				{
					if (v5 == 1)
					{
						v6 = *result;
						if (*result)
						{
							if (*(_DWORD*)(v6 + 52) == 5)
								*(_DWORD*)(*(_QWORD*)(v6 + 168)
									+ 4i64
									* (unsigned int)(*((_DWORD*)result + 3) + *(_DWORD*)(v6 + 44) * *((_DWORD*)result + 2))) = *(_DWORD*)(*a1 + 240);
						}
					}
				}
				else
				{
					v7 = *result;
					if (*result && *(_DWORD*)(v7 + 52) == 5)
						*(_DWORD*)(*(_QWORD*)(v7 + 504)
							+ 4i64 * (unsigned int)(*((_DWORD*)result + 3) + *(_DWORD*)(v7 + 44) * *((_DWORD*)result + 2))) = *(_DWORD*)(*a1 + 240);
				}
			}
			else
			{
				v8 = *result;
				if (*result && *(_DWORD*)(v8 + 52) == 5)
					*(_DWORD*)(*(_QWORD*)(v8 + 224) + 4i64 * *((unsigned int*)result + 3)) = *(_DWORD*)(*a1 + 240);
			}
		}
		else
		{
			v9 = *result;
			if (!*result)
				v9 = *(_QWORD*)(*a1 + 8584);
			*(_DWORD*)(v9 + 120) = *(_DWORD*)(*a1 + 240);
		}
		result += 3;
		--v2;
	} while (v2);
	return result;
}

