#include "../winhttp.h"

//----- (00000001400E9C20) ----------------------------------------------------
void __fastcall sub_1400E9C20(__int64 a1, __int64 a2, int a3)
{
	__int64 v5; // rbp
	_QWORD* v6; // rbx
	__int64 v7; // r14
	unsigned __int64* v8; // rdi
	__int64 v9; // rax
	__int64 v10; // r8
	_QWORD* v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rbx
	unsigned __int64 v14; // r8
	__int64 v15; // rax
	unsigned int* v16; // r9
	__int64 v17; // [rsp+20h] [rbp-28h] BYREF
	int v18; // [rsp+28h] [rbp-20h]

	if (a3 > 0)
	{
		v5 = a3;
		do
		{
			v6 = *(_QWORD**)(a1 + 400);
			v7 = *(_QWORD*)(a2 + 8);
			v8 = *(unsigned __int64**)a2;
			if (v6)
			{
				if (*(_QWORD*)(v6[4] + 120i64) >= *(_QWORD*)(v6[4] + 112i64))
					sub_14005E2C0(*(_QWORD*)(a1 + 400));
				v9 = v6[5];
				if (v9 == v6[10])
					v10 = v6[15];
				else
					v10 = *(_QWORD*)(**(_QWORD**)(v9 + 8) + 24i64);
				v11 = sub_140060AB0((__int64)v6, 0, v10);
				v11[4] = v7;
				v12 = v6[2];
				*(_QWORD*)v12 = v11;
				*(_DWORD*)(v12 + 8) = 6;
				v6[2] += 16i64;
				v13 = *(_QWORD*)(a1 + 400);
				v14 = -1i64;
				do
					++v14;
				while (*((_BYTE*)v8 + v14));
				v15 = sub_140062650(*(_QWORD*)(a1 + 400), v8, v14);
				v16 = (unsigned int*)(*(_QWORD*)(v13 + 16) - 16i64);
				v17 = v15;
				v18 = 4;
				sub_14005EA50(v13, (__int64*)(v13 + 120), (int*)&v17, v16);
				*(_QWORD*)(v13 + 16) -= 16i64;
			}
			a2 += 16i64;
			--v5;
		} while (v5);
	}
}

