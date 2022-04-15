#include "../winhttp.h"

//----- (0000000140617D30) ----------------------------------------------------
__int64 __fastcall sub_140617D30(__int64 a1, __int64 a2, unsigned int* a3)
{
	__int64 v4; // rdx
	__int64 v6; // r8
	char v8; // al
	__int64 v9; // r9
	unsigned int v10; // r10d
	unsigned int v11; // eax
	bool v12; // cf
	__int64 v13; // rcx
	int* v14; // rcx
	__int64 result; // rax
	__int64 i; // rax
	__int64 v17; // rax
	unsigned int v18; // eax
	bool v19; // cf
	int* v20; // [rsp+40h] [rbp+8h] BYREF

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
			v12 = v10 < v11;
			if (v10 == v11)
				v12 = a3[1] < *(_DWORD*)(v6 + 36);
			v8 = v12;
			if (v12)
				v6 = *(_QWORD*)(v6 + 16);
			else
				v6 = *(_QWORD*)(v6 + 24);
		} while (v6);
	}
	v13 = v9;
	if (v8)
	{
		if (v9 == *(_QWORD*)(v4 + 16))
		{
		LABEL_11:
			v14 = *sub_140618020(a1, &v20, v6, v9, a3);
			result = a2;
			*(_QWORD*)a2 = v14;
			*(_BYTE*)(a2 + 8) = 1;
			return result;
		}
		if (*(_BYTE*)v9 || *(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64) != v9)
		{
			v13 = *(_QWORD*)(v9 + 16);
			if (v13)
			{
				for (i = *(_QWORD*)(v13 + 24); i; i = *(_QWORD*)(i + 24))
					v13 = i;
			}
			else
			{
				v13 = *(_QWORD*)(v9 + 8);
				if (v9 == *(_QWORD*)(v13 + 16))
				{
					do
					{
						v17 = v13;
						v13 = *(_QWORD*)(v13 + 8);
					} while (v17 == *(_QWORD*)(v13 + 16));
				}
			}
		}
		else
		{
			v13 = *(_QWORD*)(v9 + 24);
		}
	}
	v18 = *(_DWORD*)(v13 + 32);
	v19 = v18 < *a3;
	if (v18 == *a3)
		v19 = *(_DWORD*)(v13 + 36) < a3[1];
	if (v19)
		goto LABEL_11;
	*(_QWORD*)a2 = v13;
	*(_BYTE*)(a2 + 8) = 0;
	return a2;
}

