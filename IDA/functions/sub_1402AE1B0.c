#include "../winhttp.h"

//----- (00000001402AE1B0) ----------------------------------------------------
void __fastcall sub_1402AE1B0(__int64* a1)
{
	int v1; // edx
	int v2; // edx
	int v3; // edx
	__int64 v4; // rdx
	__int64 v5; // r9
	int v6; // r8d
	int v7; // edx
	__int64 v8; // r8
	__int64 v9; // rax
	__int64 v10; // r8
	__int64 v11; // rdx
	int v12; // r9d
	__int64 v13; // rdx
	int v14; // r8d
	__int64 v15; // rdx
	__int64 v16; // rax
	__int64 v17; // rcx

	v1 = *((_DWORD*)a1 + 2);
	if (v1)
	{
		v2 = v1 - 1;
		if (v2)
		{
			v3 = v2 - 1;
			if (v3)
			{
				if (v3 != 1)
					return;
				v4 = a1[2];
				if (!v4 || *(_DWORD*)(v4 + 52) != 5)
					return;
				v5 = *(_QWORD*)(v4 + 168);
			}
			else
			{
				v4 = a1[2];
				if (!v4 || *(_DWORD*)(v4 + 52) != 5)
					return;
				v5 = *(_QWORD*)(v4 + 504);
			}
			v6 = *(_DWORD*)(v4 + 44);
			v7 = *(_DWORD*)(*a1 + 240);
			v8 = (unsigned int)(*((_DWORD*)a1 + 7) + *((_DWORD*)a1 + 6) * v6);
			if (*(_DWORD*)(v5 + 4 * v8) == v7)
				return;
			*(_DWORD*)(v5 + 4 * v8) = v7;
		}
		else
		{
			v9 = a1[2];
			if (!v9)
				return;
			if (*(_DWORD*)(v9 + 52) != 5)
				return;
			v10 = *(_QWORD*)(v9 + 224);
			v11 = *((unsigned int*)a1 + 7);
			v12 = *(_DWORD*)(*a1 + 240);
			if (*(_DWORD*)(v10 + 4 * v11) == v12)
				return;
			*(_DWORD*)(v10 + 4 * v11) = v12;
		}
		goto LABEL_21;
	}
	v13 = a1[2];
	if (!v13)
		v13 = *(_QWORD*)(*a1 + 8584);
	v14 = *(_DWORD*)(*a1 + 240);
	if (*(_DWORD*)(v13 + 144) != v14)
	{
		*(_DWORD*)(v13 + 144) = v14;
	LABEL_21:
		v15 = a1[4];
		if (v15)
		{
			v16 = *a1;
			v17 = *(_QWORD*)(*a1 + 6360);
			if (v17)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 944i64))(v17);
			else
				(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(v16 + 6352) + 424i64))(
					*(_QWORD*)(v16 + 6352),
					v15,
					3i64);
		}
	}
}

