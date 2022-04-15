#include "../winhttp.h"

//----- (000000014076EEB0) ----------------------------------------------------
__int64 __fastcall sub_14076EEB0(__int64 a1, int* a2, int a3, _OWORD* a4)
{
	int v4; // edi
	int* v8; // rsi
	int* v9; // r14
	int v10; // r9d
	int v11; // r8d
	int v12; // edx
	int v13; // ecx
	int v14; // ecx

	v4 = 0;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)a1 = 0i64;
	*(_OWORD*)(a1 + 16) = *a4;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	if (a3 > 0)
	{
		v8 = a2;
		do
		{
			v9 = &a2[2 * v4];
			sub_140527690((__int64*)(a1 + 32), v9);
			if (v4)
			{
				v10 = *(_DWORD*)(a1 + 56);
				v11 = *(_DWORD*)(a1 + 60);
				v12 = *(_DWORD*)(a1 + 48);
				if (v10 < *v9 + 1)
					v10 = *v9 + 1;
				if (v11 < v9[1] + 1)
					v11 = v9[1] + 1;
				v13 = *(_DWORD*)(a1 + 52);
				if (*v9 < v12)
					v12 = *v9;
				if (v9[1] < v13)
					v13 = v9[1];
				*(_DWORD*)(a1 + 48) = v12;
				*(_DWORD*)(a1 + 52) = v13;
				*(_DWORD*)(a1 + 56) = v10;
				*(_DWORD*)(a1 + 60) = v11;
			}
			else
			{
				v14 = *v8;
				*(_DWORD*)(a1 + 56) = *v8;
				*(_DWORD*)(a1 + 60) = v8[1];
				*(_DWORD*)(a1 + 48) = v14;
				*(_DWORD*)(a1 + 52) = *(_DWORD*)(a1 + 60);
			}
			++v4;
			v8 += 2;
		} while (v4 < a3);
	}
	return a1;
}

