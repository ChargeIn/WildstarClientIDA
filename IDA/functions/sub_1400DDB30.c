//----- (00000001400DDB30) ----------------------------------------------------
__int64 __fastcall sub_1400DDB30(_QWORD* a1)
{
	__int64* v2; // rbx
	__int64 v3; // r14
	__int64* v4; // rcx
	int v5; // esi
	int v6; // eax
	int v7; // ebp
	int v8; // eax
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // rax
	__int64* v12; // rax
	__int64 v13; // rcx
	__int64* v14; // rax
	__int64 v16; // [rsp+20h] [rbp-28h] BYREF
	int v17; // [rsp+28h] [rbp-20h]
	__int64 v18; // [rsp+50h] [rbp+8h] BYREF

	v2 = (__int64*)dword_140A12138;
	v3 = sub_1400D66A0(a1, 1u);
	v4 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v4 = (__int64*)(a1[3] + 16i64);
	v5 = 0;
	v6 = *((_DWORD*)v4 + 2);
	if (v6 == 3)
		goto LABEL_7;
	if (v6 == 4 && sub_14005AC80((char*)(*v4 + 32), (unsigned __int64*)&v18))
	{
		v17 = 3;
		v4 = &v16;
		v16 = v18;
	LABEL_7:
		v7 = (int)*(double*)v4;
		goto LABEL_8;
	}
	v7 = 0;
LABEL_8:
	if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
		v2 = (__int64*)(a1[3] + 32i64);
	v8 = *((_DWORD*)v2 + 2);
	if (v8 == 3)
		goto LABEL_14;
	if (v8 == 4 && sub_14005AC80((char*)(*v2 + 32), (unsigned __int64*)&v18))
	{
		v17 = 3;
		v2 = &v16;
		v16 = v18;
	LABEL_14:
		v5 = (int)*(double*)v2;
	}
	if (v3)
	{
		v7 -= *(_DWORD*)(v3 + 716);
		v5 -= *(_DWORD*)(v3 + 720);
	}
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v9 = a1[2];
	v10 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v9 + 8) = 5;
	*(_QWORD*)v9 = v10;
	a1[2] += 16i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"x", 1ui64);
	v11 = a1[2];
	*(_DWORD*)(v11 + 8) = 3;
	*(double*)v11 = (double)v7;
	a1[2] += 16i64;
	v12 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v12, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	sub_140058710((__int64)a1, (unsigned __int64*)"y", 1ui64);
	v13 = a1[2];
	*(_DWORD*)(v13 + 8) = 3;
	*(double*)v13 = (double)v5;
	a1[2] += 16i64;
	v14 = (__int64*)sub_1400580E0((__int64)a1, -3);
	sub_14005EA50((__int64)a1, v14, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
	a1[2] -= 32i64;
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

