#include "../winhttp.h"

//----- (00000001406F4860) ----------------------------------------------------
__int64 __fastcall sub_1406F4860(__int64 a1, _QWORD* a2)
{
	int* v4; // rax
	__int64 v5; // rdx
	__int64 v6; // rdx
	__int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // r9
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // r9
	__int64 v14; // rax
	_DWORD* v15; // rax
	int v16; // ecx
	__int64 v17; // rax
	_DWORD* v18; // rax
	int v19; // ecx
	__int64 v20; // rax
	_DWORD* v21; // rax
	int v22; // ecx
	__int64 v24; // [rsp+20h] [rbp-40h] BYREF
	__int64 v25; // [rsp+28h] [rbp-38h]
	__int64 v26; // [rsp+30h] [rbp-30h]
	_DWORD v27[8]; // [rsp+40h] [rbp-20h] BYREF

	*(_DWORD*)(a1 + 144) = 1;
	v4 = (int*)sub_1400580E0((__int64)a2, -1);
	v5 = v4[2];
	if ((_DWORD)v5 == 5 || (_DWORD)v5 == 7)
		v6 = *(_QWORD*)(*(_QWORD*)v4 + 16i64);
	else
		v6 = *(_QWORD*)(a2[4] + 8 * v5 + 224);
	if (v6)
	{
		v7 = a2[2];
		*(_QWORD*)v7 = v6;
		*(_DWORD*)(v7 + 8) = 5;
		a2[2] += 16i64;
	}
	v8 = a2[2];
	v9 = sub_140062650((__int64)a2, (unsigned __int64*)"idAction", 8ui64);
	v10 = a2[2];
	v24 = v9;
	LODWORD(v25) = 4;
	sub_14005E8E0((__int64)a2, v8 - 16, (int*)&v24, v10);
	a2[2] += 16i64;
	*(_DWORD*)a1 = sub_140056D60(a2, 0xFFFFFFFF);
	a2[2] -= 16i64;
	v11 = a2[2];
	v12 = sub_140062650((__int64)a2, (unsigned __int64*)"arInputs", 8ui64);
	v13 = a2[2];
	v24 = v12;
	LODWORD(v25) = 4;
	sub_14005E8E0((__int64)a2, v11 - 16, (int*)&v24, v13);
	a2[2] += 16i64;
	v14 = a2[2];
	*(_QWORD*)v14 = 0x3FF0000000000000i64;
	*(_DWORD*)(v14 + 8) = 3;
	a2[2] += 16i64;
	sub_14005E8E0((__int64)a2, a2[2] - 32i64, (int*)(a2[2] - 16i64), a2[2] - 16i64);
	v15 = sub_1406F46D0(v27, a2, -1);
	v24 = *(_QWORD*)v15;
	v25 = *((_QWORD*)v15 + 1);
	v26 = *((_QWORD*)v15 + 2);
	v16 = v15[6];
	*(_QWORD*)(a1 + 156) = v24;
	*(_QWORD*)(a1 + 164) = v25;
	*(_QWORD*)(a1 + 172) = v26;
	*(_DWORD*)(a1 + 180) = v16;
	a2[2] -= 16i64;
	v17 = a2[2];
	*(_QWORD*)v17 = 0x4000000000000000i64;
	*(_DWORD*)(v17 + 8) = 3;
	a2[2] += 16i64;
	sub_14005E8E0((__int64)a2, a2[2] - 32i64, (int*)(a2[2] - 16i64), a2[2] - 16i64);
	v18 = sub_1406F46D0(v27, a2, -1);
	v24 = *(_QWORD*)v18;
	v25 = *((_QWORD*)v18 + 1);
	v26 = *((_QWORD*)v18 + 2);
	v19 = v18[6];
	*(_QWORD*)(a1 + 184) = v24;
	*(_QWORD*)(a1 + 192) = v25;
	*(_QWORD*)(a1 + 200) = v26;
	*(_DWORD*)(a1 + 208) = v19;
	a2[2] -= 16i64;
	v20 = a2[2];
	*(_QWORD*)v20 = 0x4008000000000000i64;
	*(_DWORD*)(v20 + 8) = 3;
	a2[2] += 16i64;
	sub_14005E8E0((__int64)a2, a2[2] - 32i64, (int*)(a2[2] - 16i64), a2[2] - 16i64);
	v21 = sub_1406F46D0(v27, a2, -1);
	v24 = *(_QWORD*)v21;
	v25 = *((_QWORD*)v21 + 1);
	v26 = *((_QWORD*)v21 + 2);
	v22 = v21[6];
	*(_QWORD*)(a1 + 212) = v24;
	*(_QWORD*)(a1 + 220) = v25;
	*(_QWORD*)(a1 + 228) = v26;
	*(_DWORD*)(a1 + 236) = v22;
	a2[2] -= 32i64;
	return a1;
}
// 1406F4860: using guessed type _DWORD var_20[8];

