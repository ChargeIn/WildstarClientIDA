//----- (00000001406F46D0) ----------------------------------------------------
_DWORD* __fastcall sub_1406F46D0(_DWORD* a1, _QWORD* a2, int a3)
{
	int* v5; // rax
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // r9
	__int64 v12; // rax
	__int64 v13; // rbx
	__int64 v15; // rax
	__int64 v16; // r9
	int v17; // eax
	__int64 v18; // rbx
	__int64 v19; // rax
	__int64 v20; // r9
	int v21; // eax
	__int64 v22; // [rsp+20h] [rbp-18h] BYREF
	int v23; // [rsp+28h] [rbp-10h]

	v5 = (int*)sub_1400580E0((__int64)a2, a3);
	v6 = v5[2];
	if ((_DWORD)v6 == 5 || (_DWORD)v6 == 7)
		v7 = *(_QWORD*)(*(_QWORD*)v5 + 16i64);
	else
		v7 = *(_QWORD*)(a2[4] + 8 * v6 + 224);
	if (v7)
	{
		v8 = a2[2];
		*(_QWORD*)v8 = v7;
		*(_DWORD*)(v8 + 8) = 5;
		a2[2] += 16i64;
	}
	v9 = a2[2];
	v10 = sub_140062650((__int64)a2, (unsigned __int64*)"eDevice", 7ui64);
	v11 = a2[2];
	v22 = v10;
	v23 = 4;
	sub_14005E8E0((__int64)a2, v9 - 16, (int*)&v22, v11);
	a2[2] += 16i64;
	v12 = sub_140056D60(a2, 0xFFFFFFFF);
	a2[2] -= 16i64;
	v13 = a2[2];
	*a1 = v12;
	if ((_DWORD)v12)
	{
		v15 = sub_140062650((__int64)a2, (unsigned __int64*)"nCode", 5ui64);
		v16 = a2[2];
		v22 = v15;
		v23 = 4;
		sub_14005E8E0((__int64)a2, v13 - 16, (int*)&v22, v16);
		a2[2] += 16i64;
		v17 = sub_140056D60(a2, 0xFFFFFFFF);
		a2[2] -= 16i64;
		v18 = a2[2];
		a1[2] = v17;
		v19 = sub_140062650((__int64)a2, (unsigned __int64*)"eModifier", 9ui64);
		v20 = a2[2];
		v22 = v19;
		v23 = 4;
		sub_14005E8E0((__int64)a2, v18 - 16, (int*)&v22, v20);
		a2[2] += 16i64;
		v21 = sub_140056D60(a2, 0xFFFFFFFF);
		a2[2] -= 16i64;
		a1[1] = v21;
	}
	else
	{
		*(_QWORD*)(a1 + 1) = v12;
	}
	return a1;
}

