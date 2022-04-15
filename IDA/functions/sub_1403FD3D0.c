#include "../winhttp.h"

//----- (00000001403FD3D0) ----------------------------------------------------
__int64 __fastcall sub_1403FD3D0(__int64 a1, __int64 a2, _QWORD* a3)
{
	__int64 v4; // rdx
	__int64 v6; // r8
	bool v8; // al
	__int64 v9; // r9
	unsigned int v10; // r10d
	unsigned int v11; // eax
	__int64 v12; // rcx
	__int64 i; // rax
	__int64 v14; // rax
	unsigned int v15; // eax
	__int64 result; // rax
	int* v17; // rcx
	int* v18; // [rsp+40h] [rbp+8h] BYREF

	v4 = *(_QWORD*)(a1 + 8);
	v6 = *(_QWORD*)(v4 + 8);
	v8 = 1;
	v9 = v4;
	if (v6)
	{
		v10 = *(_DWORD*)a3;
		do
		{
			v11 = *(_DWORD*)(v6 + 32);
			v9 = v6;
			if (v10 >= v11)
			{
				if (v10 <= v11)
				{
					v8 = a3[1] < *(_QWORD*)(v6 + 40);
					if (a3[1] < *(_QWORD*)(v6 + 40))
					{
						v6 = *(_QWORD*)(v6 + 16);
						continue;
					}
				}
				else
				{
					v8 = 0;
				}
				v6 = *(_QWORD*)(v6 + 24);
			}
			else
			{
				v6 = *(_QWORD*)(v6 + 16);
				v8 = 1;
			}
		} while (v6);
	}
	v12 = v9;
	if (v8)
	{
		if (v9 == *(_QWORD*)(v4 + 16))
			goto LABEL_26;
		if (*(_BYTE*)v9 || *(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64) != v9)
		{
			v12 = *(_QWORD*)(v9 + 16);
			if (v12)
			{
				for (i = *(_QWORD*)(v12 + 24); i; i = *(_QWORD*)(i + 24))
					v12 = i;
			}
			else
			{
				v12 = *(_QWORD*)(v9 + 8);
				if (v9 == *(_QWORD*)(v12 + 16))
				{
					do
					{
						v14 = v12;
						v12 = *(_QWORD*)(v12 + 8);
					} while (v14 == *(_QWORD*)(v12 + 16));
				}
			}
		}
		else
		{
			v12 = *(_QWORD*)(v9 + 24);
		}
	}
	v15 = *(_DWORD*)(v12 + 32);
	if (v15 >= *(_DWORD*)a3 && (v15 > *(_DWORD*)a3 || *(_QWORD*)(v12 + 40) >= a3[1]))
	{
		*(_QWORD*)a2 = v12;
		result = a2;
		*(_BYTE*)(a2 + 8) = 0;
		return result;
	}
LABEL_26:
	v17 = *sub_1403FE990(a1, &v18, v6, v9, a3);
	result = a2;
	*(_QWORD*)a2 = v17;
	*(_BYTE*)(a2 + 8) = 1;
	return result;
}

