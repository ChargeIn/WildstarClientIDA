#include "../winhttp.h"

//----- (00000001403B51F0) ----------------------------------------------------
int* __fastcall sub_1403B51F0(__int64 a1, unsigned int a2)
{
	int* result; // rax
	unsigned __int64 v4; // r9
	unsigned __int64 v5; // rdx
	_DWORD* v6; // rcx
	unsigned int v7; // [rsp+38h] [rbp+10h] BYREF

	v7 = a2;
	result = (int*)a2;
	*(_DWORD*)(a1 + 16) = a2;
	if (a2 && a2 != 317)
	{
		v4 = *(_QWORD*)(a1 + 8);
		v5 = 0i64;
		*(_DWORD*)(a1 + 24) = 1;
		if (v4)
		{
			v6 = *(_DWORD**)a1;
			while (*v6 != (_DWORD)result)
			{
				if (*v6 <= (int)result)
				{
					++v5;
					++v6;
					if (v5 < v4)
						continue;
				}
				return sub_1401C2E70((__int64*)a1, v5, (int*)&v7);
			}
		}
		else
		{
			return sub_1401C2E70((__int64*)a1, v5, (int*)&v7);
		}
	}
	return result;
}

