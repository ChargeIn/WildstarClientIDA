#include "../winhttp.h"

//----- (000000014005B960) ----------------------------------------------------
__int64 __fastcall sub_14005B960(__int64 a1, __int64 a2, int* a3)
{
	int v3; // edi
	int v8; // eax
	__int64 v9; // r11
	int v10; // edx
	int v11; // edx
	int v12; // ecx
	bool v13; // zf

	v3 = a3[2];
	if (!v3)
		return 0xFFFFFFFFi64;
	if (v3 == 3)
	{
		v8 = (int)*(double*)a3;
		if ((double)v8 == *(double*)a3 && v8 > 0 && v8 <= *(_DWORD*)(a2 + 56))
			return (unsigned int)(v8 - 1);
	}
	v9 = sub_14005B880(a2, a3);
	while (1)
	{
		v10 = *(_DWORD*)(v9 + 24);
		if (v10 != v3)
			goto LABEL_18;
		if (!v10)
			return (unsigned int)(*(_DWORD*)(a2 + 56) + ((int)v9 - *(_DWORD*)(a2 + 32)) / 40);
		v11 = v10 - 1;
		if (v11)
		{
			if (v11 == 2)
			{
				if (*(double*)a3 == *(double*)(v9 + 16))
					return (unsigned int)(*(_DWORD*)(a2 + 56) + ((int)v9 - *(_DWORD*)(a2 + 32)) / 40);
				goto LABEL_18;
			}
			v12 = 0;
			v13 = *(_QWORD*)(v9 + 16) == *(_QWORD*)a3;
		}
		else
		{
			v12 = 0;
			v13 = *(_DWORD*)(v9 + 16) == *a3;
		}
		LOBYTE(v12) = v13;
		if (v12)
			return (unsigned int)(*(_DWORD*)(a2 + 56) + ((int)v9 - *(_DWORD*)(a2 + 32)) / 40);
	LABEL_18:
		if (*(_DWORD*)(v9 + 24) == 11 && v3 >= 4 && *(_QWORD*)(v9 + 16) == *(_QWORD*)a3)
			return (unsigned int)(*(_DWORD*)(a2 + 56) + ((int)v9 - *(_DWORD*)(a2 + 32)) / 40);
		v9 = *(_QWORD*)(v9 + 32);
		if (!v9)
			sub_14005ABE0(a1, aInvalidKeyToNe);
	}
}

