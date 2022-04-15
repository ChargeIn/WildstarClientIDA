#include "../winhttp.h"

//----- (00000001405BC5A0) ----------------------------------------------------
void __fastcall sub_1405BC5A0(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 v4; // r10
	unsigned int v5; // r9d
	__int64 v6; // rax
	__int64 v7; // rdx
	__int64 v8; // r9
	unsigned int v9; // edx
	__int64 v10; // r8
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64 v13; // [rsp+40h] [rbp+18h] BYREF

	if (a3 && a2)
	{
		v4 = *(_QWORD*)(a1 + 48);
		v5 = *(_DWORD*)(a2 + 8);
		v6 = *(_QWORD*)(v4 + 8);
		v7 = v4;
		while (v6)
		{
			if (*(_DWORD*)(v6 + 32) < v5)
			{
				v6 = *(_QWORD*)(v6 + 24);
			}
			else
			{
				v7 = v6;
				v6 = *(_QWORD*)(v6 + 16);
			}
		}
		if (v7 == v4 || (v13 = v7, v5 < *(_DWORD*)(v7 + 32)))
			v13 = v4;
		if (v13 != v4)
		{
			v8 = *(_QWORD*)(v13 + 40);
			v9 = a3[6];
			v10 = *(_QWORD*)(v8 + 8);
			v11 = v10;
			v12 = *(_QWORD*)(v10 + 8);
			while (v12)
			{
				if (*(_DWORD*)(v12 + 32) < v9)
				{
					v12 = *(_QWORD*)(v12 + 24);
				}
				else
				{
					v11 = v12;
					v12 = *(_QWORD*)(v12 + 16);
				}
			}
			if (v11 == v10 || (v13 = v11, v9 < *(_DWORD*)(v11 + 32)))
				v13 = v10;
			if (v13 != v10)
			{
				sub_1405BCE50(v8, &v13);
				(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)a3 + 8i64))(a3);
			}
		}
	}
}

