#include "../winhttp.h"

//----- (000000014078B630) ----------------------------------------------------
void __fastcall sub_14078B630(_QWORD* a1)
{
	__int64(__fastcall * *v2)(); // r14
	__int64(__fastcall * v3)(); // rdi
	__int64 v4; // rax
	__int64 v5; // r8
	_QWORD* v6; // rax
	__int64 v7; // rcx
	unsigned __int64* v8; // rbp
	unsigned __int64 v9; // rsi
	__int64 v10; // rdi
	__int64 v11; // rax

	if (sub_1407952A0)
	{
		v2 = &off_140B50628;
		do
		{
			v3 = *v2;
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v4 = a1[5];
			if (v4 == a1[10])
				v5 = a1[15];
			else
				v5 = *(_QWORD*)(**(_QWORD**)(v4 + 8) + 24i64);
			v6 = sub_140060AB0((__int64)a1, 0, v5);
			v6[4] = v3;
			v7 = a1[2];
			*(_QWORD*)v7 = v6;
			*(_DWORD*)(v7 + 8) = 6;
			a1[2] += 16i64;
			v8 = (unsigned __int64*)*(v2 - 1);
			if (v8)
			{
				v9 = -1i64;
				do
					++v9;
				while (*((_BYTE*)v8 + v9));
				if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
					sub_14005E2C0((__int64)a1);
				v10 = a1[2];
				v11 = sub_140062650((__int64)a1, v8, v9);
				*(_DWORD*)(v10 + 8) = 4;
				*(_QWORD*)v10 = v11;
			}
			else
			{
				*(_DWORD*)(a1[2] + 8i64) = 0;
			}
			a1[2] += 16i64;
			sub_140061D30((__int64)a1, (char*)(a1[2] - 32i64), 0);
			v2 += 2;
		} while (*v2);
	}
}
// 1407952A0: using guessed type __int64 __fastcall sub_1407952A0();
// 140B50628: using guessed type __int64 (__fastcall *off_140B50628)();

