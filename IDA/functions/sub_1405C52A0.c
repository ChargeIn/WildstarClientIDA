#include "../winhttp.h"

//----- (00000001405C52A0) ----------------------------------------------------
__int64 __fastcall sub_1405C52A0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // r11
	__int64 v6; // r8
	bool v8; // al
	__int64 v9; // r9
	int v10; // ecx
	__int64 v11; // rcx
	__int64 i; // rax
	__int64 v13; // rax
	int v14; // r10d
	__int64 result; // rax
	int* v16; // rcx
	int* v17; // [rsp+40h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 8);
	v6 = *(_QWORD*)(v3 + 8);
	v8 = 1;
	v9 = v3;
	while (v6)
	{
		v10 = *(_DWORD*)(v6 + 32);
		v9 = v6;
		v8 = (unsigned __int16)*(_DWORD*)a3 < (unsigned int)(unsigned __int16)v10
			|| *(_BYTE*)(a3 + 2) < *(_BYTE*)(v6 + 34)
			|| (int)((*(_DWORD*)a3 & 0xFF000000) << 6) < (int)((v10 & 0xFF000000) << 6);
		if (v8)
			v6 = *(_QWORD*)(v6 + 16);
		else
			v6 = *(_QWORD*)(v6 + 24);
	}
	v11 = v9;
	if (v8)
	{
		if (v9 == *(_QWORD*)(v3 + 16))
			goto LABEL_26;
		if (*(_BYTE*)v9 || *(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64) != v9)
		{
			v11 = *(_QWORD*)(v9 + 16);
			if (v11)
			{
				for (i = *(_QWORD*)(v11 + 24); i; i = *(_QWORD*)(i + 24))
					v11 = i;
			}
			else
			{
				v11 = *(_QWORD*)(v9 + 8);
				if (v9 == *(_QWORD*)(v11 + 16))
				{
					do
					{
						v13 = v11;
						v11 = *(_QWORD*)(v11 + 8);
					} while (v13 == *(_QWORD*)(v11 + 16));
				}
			}
		}
		else
		{
			v11 = *(_QWORD*)(v9 + 24);
		}
	}
	v14 = *(_DWORD*)(v11 + 32);
	if ((unsigned __int16)v14 >= (unsigned __int16)*(_DWORD*)a3
		&& *(_BYTE*)(v11 + 34) >= *(_BYTE*)(a3 + 2)
		&& (int)((v14 & 0xFF000000) << 6) >= (int)((*(_DWORD*)a3 & 0xFF000000) << 6))
	{
		*(_QWORD*)a2 = v11;
		result = a2;
		*(_BYTE*)(a2 + 8) = 0;
		return result;
	}
LABEL_26:
	v16 = *sub_1405C5890(a1, &v17, v6, v9, a3);
	result = a2;
	*(_QWORD*)a2 = v16;
	*(_BYTE*)(a2 + 8) = 1;
	return result;
}

