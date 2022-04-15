#include "../winhttp.h"

//----- (00000001405A1790) ----------------------------------------------------
__int64 __fastcall sub_1405A1790(__int64 a1)
{
	__int64 result; // rax
	int* v3; // rax
	float v4; // xmm0_4
	_QWORD* v5; // rsi
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // edi
	_QWORD* v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rbx
	__int64 v14; // rax
	__int64 v15; // r9
	__int64 v16; // rdx
	__int64 v17; // [rsp+20h] [rbp-48h] BYREF
	__int64 v18; // [rsp+28h] [rbp-40h]
	__int64 v19; // [rsp+30h] [rbp-38h]
	__int64(__fastcall * *v20)(); // [rsp+38h] [rbp-30h] BYREF
	int v21; // [rsp+40h] [rbp-28h]
	_QWORD* v22; // [rsp+48h] [rbp-20h]
	int v23; // [rsp+50h] [rbp-18h]

	result = sub_140245C00(*(_DWORD*)(qword_140C65898 + 6864));
	if (result)
	{
		v3 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(result + 12), 0i64);
		if (v3 && v3[80] == 33)
		{
			v4 = sub_1405A3C40() * (float)(int)*((_QWORD*)v3 + 18);
			if ((int)v4)
			{
				v5 = *(_QWORD**)(a1 + 16);
				v6 = v5[4];
				v19 = 0i64;
				v20 = off_140B569F0;
				v7 = *(_QWORD*)(v6 + 112);
				v18 = 1i64;
				v22 = v5;
				v23 = 1;
				if (*(_QWORD*)(v6 + 120) >= v7)
					sub_14005E2C0((__int64)v5);
				v8 = v5[2];
				v9 = sub_14005C1B0((__int64)v5, 0, 0);
				*(_DWORD*)(v8 + 8) = 5;
				*(_QWORD*)v8 = v9;
				v5[2] += 16i64;
				v10 = sub_1400578C0((__int64)v5);
				v21 = v10;
				v11 = (_QWORD*)sub_140059170(v5, 0x18ui64);
				v12 = v18;
				*v11 = (unsigned int)(int)v4;
				v11[1] = v12;
				v11[2] = v19;
				v13 = v5[4];
				v14 = sub_140062650((__int64)v5, (unsigned __int64*)"Game.Money", 0xAui64);
				v15 = v5[2];
				v17 = v14;
				LODWORD(v18) = 4;
				sub_14005E8E0((__int64)v5, v13 + 160, (int*)&v17, v15);
				v5[2] += 16i64;
				sub_140058BF0((__int64)v5, -2);
				sub_1400FB540((__int64)&v20);
				v5[2] -= 16i64;
				sub_1400FB2A0(a1, (__int64)L"tResult", v10);
				sub_1400579E0((__int64)v5, v16, v10);
			}
			return 1i64;
		}
		else
		{
			return 0i64;
		}
	}
	return result;
}
// 1405A1930: variable 'v16' is possibly undefined
// 140B20800: using guessed type wchar_t aTresult_0[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

