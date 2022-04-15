#include "../winhttp.h"

//----- (0000000140574E10) ----------------------------------------------------
__int64 __fastcall sub_140574E10(__int64 a1, __int64 a2, int* a3)
{
	__int64 v4; // rdx
	__int64 v6; // r8
	bool v8; // al
	__int64 v9; // r9
	int v10; // r10d
	int v11; // eax
	__int64 v12; // rcx
	int* v13; // rcx
	__int64 result; // rax
	__int64 i; // rax
	__int64 v16; // rax
	int v17; // eax
	bool v18; // al
	int* v19; // [rsp+40h] [rbp+8h] BYREF

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
			if (v10 == v11)
				v8 = (unsigned int)a3[1] < *(_DWORD*)(v6 + 36);
			else
				v8 = v10 < v11;
			if (v8)
				v6 = *(_QWORD*)(v6 + 16);
			else
				v6 = *(_QWORD*)(v6 + 24);
		} while (v6);
	}
	v12 = v9;
	if (v8)
	{
		if (v9 == *(_QWORD*)(v4 + 16))
		{
		LABEL_12:
			v13 = *sub_1405750F0(a1, &v19, v6, v9, (__int64)a3);
			result = a2;
			*(_QWORD*)a2 = v13;
			*(_BYTE*)(a2 + 8) = 1;
			return result;
		}
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
						v16 = v12;
						v12 = *(_QWORD*)(v12 + 8);
					} while (v16 == *(_QWORD*)(v12 + 16));
				}
			}
		}
		else
		{
			v12 = *(_QWORD*)(v9 + 24);
		}
	}
	v17 = *(_DWORD*)(v12 + 32);
	if (v17 == *a3)
		v18 = *(_DWORD*)(v12 + 36) < (unsigned int)a3[1];
	else
		v18 = v17 < *a3;
	if (v18)
		goto LABEL_12;
	*(_QWORD*)a2 = v12;
	*(_BYTE*)(a2 + 8) = 0;
	return a2;
}

