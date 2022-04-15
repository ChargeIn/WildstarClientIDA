#include "../winhttp.h"

//----- (00000001400D7460) ----------------------------------------------------
__int64 __fastcall sub_1400D7460(_QWORD* a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rsi
	__int64 v5; // rbx
	__int64 v6; // rax
	int v7; // eax
	int v8; // r11d
	_QWORD* v9; // rax
	_QWORD* v10; // rbx
	__int64 v11; // rdx
	_QWORD* v12; // rax
	__int64 v13; // rdx
	int v14; // r11d
	__int64 v15; // rcx
	_QWORD* v16; // rax
	__int64 v17; // r8
	__int64(__fastcall * *v19)(); // [rsp+20h] [rbp-28h] BYREF
	int v20; // [rsp+28h] [rbp-20h]
	_QWORD* v21; // [rsp+30h] [rbp-18h]
	int v22; // [rsp+38h] [rbp-10h]

	v1 = a1;
	v2 = sub_1400D66A0(a1, 1u);
	v3 = v1[4];
	v21 = v1;
	v4 = v2;
	v22 = 1;
	v19 = off_140B569F0;
	if (*(_QWORD*)(v3 + 120) >= *(_QWORD*)(v3 + 112))
		sub_14005E2C0((__int64)v1);
	v5 = v1[2];
	v6 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	v1[2] += 16i64;
	v7 = sub_1400578C0((__int64)v1);
	v8 = v7;
	v20 = v7;
	if (v4 && (*(_BYTE*)(v4 + 28) & 1) != 0)
	{
		v9 = *(_QWORD**)(v4 + 576);
		v10 = (_QWORD*)*v9;
		if ((_QWORD*)*v9 != v9)
		{
			do
			{
				v11 = v10[2];
				if ((*(_BYTE*)(v11 + 28) & 1) != 0)
				{
					sub_1400D62A0(v1, v11);
					sub_1400FB470((__int64)&v19);
					v1[2] -= 16i64;
				}
				v10 = (_QWORD*)*v10;
			} while (v10 != *(_QWORD**)(v4 + 576));
			v1 = v21;
			v8 = v20;
		}
		v12 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v8);
		v15 = v1[2];
		*(_QWORD*)v15 = *v12;
		*(_DWORD*)(v15 + 8) = *((_DWORD*)v12 + 2);
	}
	else
	{
		v16 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v7);
		v17 = v1[2];
		*(_QWORD*)v17 = *v16;
		v13 = *((unsigned int*)v16 + 2);
		*(_DWORD*)(v17 + 8) = v13;
	}
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v13, v14);
	return 1i64;
}
// 1400D758E: variable 'v13' is possibly undefined
// 1400D758E: variable 'v14' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

