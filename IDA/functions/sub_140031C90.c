#include "../winhttp.h"

//----- (0000000140031C90) ----------------------------------------------------
void __fastcall sub_140031C90(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 v3; // rbx
	_QWORD* v5; // rcx
	int v6; // r11d
	__int64 v7; // rsi
	_QWORD* v8; // rax
	int v9; // r9d
	unsigned int v10; // r8d
	_DWORD* v11; // rdx
	__int64 v12; // rdx
	_QWORD* i; // rdx
	__int64 j; // rdx
	__int64 v15; // r8
	int* v16; // rax
	__int64 v17; // rcx
	__int64 v18; // rax
	__int64 k; // rax
	__int64 m; // rax
	__int64 v21; // [rsp+58h] [rbp+10h] BYREF
	int* v22; // [rsp+60h] [rbp+18h] BYREF
	int* v23; // [rsp+68h] [rbp+20h] BYREF

	if (a2)
	{
		v2 = *(_QWORD*)(a1 + 64);
		v3 = *(_QWORD*)(v2 + 16);
		while (v3 != v2)
		{
			if (*(_QWORD*)(v3 + 56))
			{
				v5 = *(_QWORD**)(v3 + 48);
				v6 = -1;
				v7 = 0i64;
				v8 = (_QWORD*)v5[2];
				while (v8 != v5)
				{
					v9 = 0;
					v10 = 0;
					v11 = (_DWORD*)(v8[4] + 32i64);
					do
					{
						if (*(v11 - 2) && *v11)
							++v9;
						++v10;
						++v11;
					} while (v10 < 2);
					if (!v7 || v6 < v9)
					{
						v6 = v9;
						v7 = v8[4];
					}
					v12 = v8[3];
					if (v12)
					{
						v8 = (_QWORD*)v8[3];
						for (i = *(_QWORD**)(v12 + 16); i; i = (_QWORD*)i[2])
							v8 = i;
					}
					else
					{
						for (j = v8[1]; v8 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
							v8 = (_QWORD*)j;
						if (v8[3] != j)
							v8 = (_QWORD*)j;
					}
				}
				v15 = *(_QWORD*)(a2 + 8);
				v16 = (int*)v15;
				v17 = *(_QWORD*)(v15 + 8);
				while (v17)
				{
					if (*(_DWORD*)(v17 + 32) < *(_DWORD*)(v3 + 32))
					{
						v17 = *(_QWORD*)(v17 + 24);
					}
					else
					{
						v16 = (int*)v17;
						v17 = *(_QWORD*)(v17 + 16);
					}
				}
				if (v16 == (int*)v15 || *(_DWORD*)(v3 + 32) < (unsigned int)v16[8])
				{
					v21 = *(unsigned int*)(v3 + 32);
					v22 = v16;
					sub_140032B30(a2, &v23, (__int64*)&v22, &v21);
					v16 = v23;
				}
				v16[9] = *(_DWORD*)(v7 + 16);
			}
			else
			{
				*sub_140032640(a2, (_DWORD*)(v3 + 32)) = 0;
			}
			v18 = *(_QWORD*)(v3 + 24);
			if (v18)
			{
				v3 = *(_QWORD*)(v3 + 24);
				for (k = *(_QWORD*)(v18 + 16); k; k = *(_QWORD*)(k + 16))
					v3 = k;
			}
			else
			{
				for (m = *(_QWORD*)(v3 + 8); v3 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
					v3 = m;
				if (*(_QWORD*)(v3 + 24) != m)
					v3 = m;
			}
		}
	}
}

