#include "../winhttp.h"

//----- (00000001406FD0B0) ----------------------------------------------------
__int64 __fastcall sub_1406FD0B0(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // rdx
	__int64 v4; // r14
	int v5; // ebp
	__int64 v6; // rcx
	__int64 v7; // rbx
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rdi
	__int64 v11; // rax
	__int64 v12; // rax
	__int64* v13; // rax
	__int64 v14; // rax
	__int64 i; // rax
	__int64 j; // rax

	v2 = sub_140437990();
	v4 = v2;
	if (v2 && *(_QWORD*)(v2 + 16))
	{
		v5 = 0;
		sub_140058900(a1, v3, 0);
		v6 = *(_QWORD*)(v4 + 8);
		v7 = *(_QWORD*)(v6 + 16);
		if (v7 != v6)
		{
			do
			{
				v8 = *(_QWORD*)(a1 + 16);
				++v5;
				*(_DWORD*)(v8 + 8) = 3;
				*(double*)v8 = (double)v5;
				v9 = *(_QWORD*)(a1 + 32);
				*(_QWORD*)(a1 + 16) += 16i64;
				if (*(_QWORD*)(v9 + 120) >= *(_QWORD*)(v9 + 112))
					sub_14005E2C0(a1);
				v10 = *(_QWORD*)(a1 + 16);
				v11 = sub_14005C1B0(a1, 0, 0);
				*(_DWORD*)(v10 + 8) = 5;
				*(_QWORD*)v10 = v11;
				*(_QWORD*)(a1 + 16) += 16i64;
				LODWORD(v10) = *(_DWORD*)(v7 + 32);
				sub_140058710(a1, (unsigned __int64*)"nTutorialId", 0xBui64);
				v12 = *(_QWORD*)(a1 + 16);
				*(_DWORD*)(v12 + 8) = 3;
				*(double*)v12 = (double)(int)v10;
				*(_QWORD*)(a1 + 16) += 16i64;
				v13 = (__int64*)sub_1400580E0(a1, -3);
				sub_14005EA50(a1, v13, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				*(_QWORD*)(a1 + 16) -= 32i64;
				sub_14005EA50(
					a1,
					(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
					(int*)(*(_QWORD*)(a1 + 16) - 32i64),
					(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
				*(_QWORD*)(a1 + 16) -= 32i64;
				v14 = *(_QWORD*)(v7 + 24);
				if (v14)
				{
					v7 = *(_QWORD*)(v7 + 24);
					for (i = *(_QWORD*)(v14 + 16); i; i = *(_QWORD*)(i + 16))
						v7 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v7 + 8); v7 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v7 = j;
					if (*(_QWORD*)(v7 + 24) != j)
						v7 = j;
				}
			} while (v7 != *(_QWORD*)(v4 + 8));
		}
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return 0i64;
	}
}
// 1406FD0EC: variable 'v3' is possibly undefined

