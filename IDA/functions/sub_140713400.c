#include "../winhttp.h"

//----- (0000000140713400) ----------------------------------------------------
__int64 __fastcall sub_140713400(__int64* a1)
{
	int* v2; // rax
	int v3; // ecx
	int v4; // ebp
	int v5; // esi
	int v6; // edi
	__int64 result; // rax
	__int64 v8; // rax
	int v9; // [rsp+30h] [rbp+8h] BYREF
	int v10; // [rsp+34h] [rbp+Ch]

	v2 = (int*)(*(__int64(__fastcall**)(__int64*))(*a1 + 88))(a1);
	v3 = v2[1];
	v4 = v2[3];
	v5 = *v2;
	v6 = v2[2];
	result = 0i64;
	v10 = v3;
	for (a1[6] = 0i64; v3 < v4; v10 = v3)
	{
		v9 = v5;
		if (v5 < v6)
		{
			do
			{
				if (((*(__int64(__fastcall**)(__int64*, int*))(*a1 + 104))(a1, &v9) & 1) == 0)
				{
					v8 = *a1;
					++* ((_DWORD*)a1 + 13);
					if ((*(unsigned int(__fastcall**)(__int64*, int*))(v8 + 136))(a1, &v9))
						++* ((_DWORD*)a1 + 12);
				}
				result = (unsigned int)(v9 + 1);
				v9 = result;
			} while ((int)result < v6);
			v3 = v10;
		}
		++v3;
	}
	return result;
}

