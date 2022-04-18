#include "../winhttp.h"

//----- (00000001403B92A0) ----------------------------------------------------
__int64 __fastcall sub_1403B92A0(__int64 a1, __int64 a2)
{
	__int64 i; // rsi
	__int64 v5; // rdx
	__int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rcx
	__int64* v9; // rax
	__int64 v10; // rax
	__int64 v11; // rdx
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64* v14; // rax
	_QWORD* v15; // rax
	__int64 v16; // rdi
	__int64 v17; // rcx
	__int64 v19; // [rsp+20h] [rbp-38h] BYREF
	__int64 v20; // [rsp+68h] [rbp+10h] BYREF
	__int64 v21; // [rsp+70h] [rbp+18h] BYREF
	__int64 v22; // [rsp+78h] [rbp+20h] BYREF

	for (i = 0i64; (unsigned int)i < *(_DWORD*)a2; i = (unsigned int)(i + 1))
	{
		v5 = *(_QWORD*)(a1 + 2728);
		v6 = *(_QWORD*)(v5 + 8);
		v7 = *(_QWORD*)(*(_QWORD*)(a2 + 8) + 8 * i);
		v8 = v5;
		while (v6)
		{
			if (*(_DWORD*)(v6 + 32) < (unsigned int)v7)
			{
				v6 = *(_QWORD*)(v6 + 24);
			}
			else
			{
				v8 = v6;
				v6 = *(_QWORD*)(v6 + 16);
			}
		}
		if (v8 == v5 || (unsigned int)v7 < *(_DWORD*)(v8 + 32))
		{
			v21 = *(_QWORD*)(a1 + 2728);
			v9 = &v21;
		}
		else
		{
			v20 = v8;
			v9 = &v20;
		}
		v10 = *v9;
		if (v10 == v5)
		{
			sub_1403BA550(a1, v7);
			v11 = *(_QWORD*)(a1 + 2728);
			v12 = *(_QWORD*)(v11 + 8);
			v13 = v11;
			while (v12)
			{
				if (*(_DWORD*)(v12 + 32) < (unsigned int)v7)
				{
					v12 = *(_QWORD*)(v12 + 24);
				}
				else
				{
					v13 = v12;
					v12 = *(_QWORD*)(v12 + 16);
				}
			}
			if (v13 == v11 || (unsigned int)v7 < *(_DWORD*)(v13 + 32))
			{
				v19 = *(_QWORD*)(a1 + 2728);
				v14 = &v19;
			}
			else
			{
				v22 = v13;
				v14 = &v22;
			}
			v10 = *v14;
			if (v10 == v11)
				continue;
		}
		v15 = *(_QWORD**)(v10 + 40);
		if (v15[1] > (unsigned __int64)BYTE5(v7))
		{
			v16 = *(_QWORD*)(*v15 + 8i64 * BYTE5(v7));
			*(_BYTE*)(v16 + 8) = BYTE4(v7);
			v17 = BYTE4(v7);
			if (!BYTE4(v7))
				v17 = 1i64;
			*(_DWORD*)(v16 + 4) = sub_1407A1440(v17, v7, v17);
		}
	}
	Apollo_LUAEvent(*(_QWORD*)(a1 + 29504), "AbilityBookChange", &unk_1409D10C6);
	return 0i64;
}

