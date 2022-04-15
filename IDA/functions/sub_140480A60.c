#include "../winhttp.h"

//----- (0000000140480A60) ----------------------------------------------------
__int64 __fastcall sub_140480A60(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 v4; // rdx
	__int64 v6; // r8
	char v8; // al
	__int64 v9; // r9
	int v10; // r10d
	int v11; // eax
	bool v12; // sf
	bool v13; // of
	int v14; // eax
	__int64 v15; // rcx
	int* v16; // rcx
	__int64 result; // rax
	__int64 i; // rax
	__int64 v19; // rax
	int v20; // eax
	bool v21; // sf
	bool v22; // of
	int v23; // eax
	int* v24; // [rsp+40h] [rbp+8h] BYREF

	v4 = *(_QWORD*)(a1 + 8);
	v6 = *(_QWORD*)(v4 + 8);
	v8 = 1;
	v9 = v4;
	if (v6)
	{
		v10 = *a3;
		do
		{
			v11 = *(_DWORD*)(v6 + 32);
			v9 = v6;
			v13 = __OFSUB__(v10, v11);
			v12 = v10 - v11 < 0;
			if (v10 == v11)
			{
				v14 = *(_DWORD*)(v6 + 36);
				v13 = __OFSUB__(a3[1], v14);
				v12 = a3[1] - v14 < 0;
			}
			v8 = v12 ^ v13;
			if (v12 != v13)
				v6 = *(_QWORD*)(v6 + 16);
			else
				v6 = *(_QWORD*)(v6 + 24);
		} while (v6);
	}
	v15 = v9;
	if (v8)
	{
		if (v9 == *(_QWORD*)(v4 + 16))
		{
		LABEL_11:
			v16 = *sub_140481980(a1, &v24, v6, v9, a3);
			result = a2;
			*(_QWORD*)a2 = v16;
			*(_BYTE*)(a2 + 8) = 1;
			return result;
		}
		if (*(_BYTE*)v9 || *(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64) != v9)
		{
			v15 = *(_QWORD*)(v9 + 16);
			if (v15)
			{
				for (i = *(_QWORD*)(v15 + 24); i; i = *(_QWORD*)(i + 24))
					v15 = i;
			}
			else
			{
				v15 = *(_QWORD*)(v9 + 8);
				if (v9 == *(_QWORD*)(v15 + 16))
				{
					do
					{
						v19 = v15;
						v15 = *(_QWORD*)(v15 + 8);
					} while (v19 == *(_QWORD*)(v15 + 16));
				}
			}
		}
		else
		{
			v15 = *(_QWORD*)(v9 + 24);
		}
	}
	v20 = *(_DWORD*)(v15 + 32);
	v22 = __OFSUB__(v20, *a3);
	v21 = v20 - *a3 < 0;
	if (v20 == *a3)
	{
		v23 = a3[1];
		v22 = __OFSUB__(*(_DWORD*)(v15 + 36), v23);
		v21 = *(_DWORD*)(v15 + 36) - v23 < 0;
	}
	if (v21 != v22)
		goto LABEL_11;
	*(_QWORD*)a2 = v15;
	*(_BYTE*)(a2 + 8) = 0;
	return a2;
}

