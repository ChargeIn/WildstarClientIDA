//----- (00000001404E9A00) ----------------------------------------------------
__int64 __fastcall sub_1404E9A00(_QWORD* a1)
{
	__int64* v2; // rax
	__int64* v3; // rbx
	__int64* v4; // rcx
	unsigned int v5; // esi
	int v6; // eax
	unsigned int v7; // ebp
	int v8; // eax
	__int64 v9; // rbx
	__int64 v10; // rax
	_QWORD* v11; // rax
	__int64 v12; // rdx
	int v13; // r9d
	_QWORD* v14; // rax
	int v15; // r9d
	__int64 v16; // r10
	__int64 v17; // rdx
	_QWORD* v18; // rax
	int v19; // r9d
	__int64 v20; // r10
	__int64 v21; // rdx
	_QWORD* v22; // rax
	__int64 v23; // r10
	__int64 v24; // rdx
	__int64 v26; // [rsp+20h] [rbp-18h] BYREF
	int v27; // [rsp+28h] [rbp-10h]
	__int64 v28; // [rsp+48h] [rbp+10h] BYREF

	if (!qword_140C63658)
		sub_140056830(a1, (unsigned __int64*)"AlienFx not loaded.");
	v2 = (__int64*)a1[3];
	v3 = (__int64*)dword_140A12138;
	v4 = (__int64*)dword_140A12138;
	if ((unsigned __int64)v2 < a1[2])
		v4 = v2;
	v5 = 0;
	v6 = *((_DWORD*)v4 + 2);
	if (v6 == 3)
		goto LABEL_9;
	if (v6 == 4 && sub_14005AC80((char*)(*v4 + 32), (unsigned __int64*)&v28))
	{
		v27 = 3;
		v4 = &v26;
		v26 = v28;
	LABEL_9:
		v7 = (int)*(double*)v4;
		goto LABEL_10;
	}
	v7 = 0;
LABEL_10:
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (__int64*)(a1[3] + 16i64);
	v8 = *((_DWORD*)v3 + 2);
	if (v8 == 3)
		goto LABEL_16;
	if (v8 == 4 && sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v28))
	{
		v27 = 3;
		v3 = &v26;
		v26 = v28;
	LABEL_16:
		v5 = (int)*(double*)v3;
	}
	if ((int)sub_1400FD3D0((__int64)v4, v7, v5, &v26) < 0)
		sub_140056830(a1, (unsigned __int64*)"GetLightLocation failed to get light %d location on device %d", v5, v7);
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v9 = a1[2];
	v10 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v9 + 8) = 5;
	*(_QWORD*)v9 = v10;
	a1[2] += 16i64;
	LODWORD(v9) = sub_1400578C0((__int64)a1);
	v11 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v9);
	v12 = a1[2];
	v13 = v26;
	*(_QWORD*)v12 = *v11;
	*(_DWORD*)(v12 + 8) = *((_DWORD*)v11 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v12, L"nX", v13);
	a1[2] -= 16i64;
	v14 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v9);
	v15 = HIDWORD(v26);
	*(_QWORD*)v16 = *v14;
	*(_DWORD*)(v16 + 8) = *((_DWORD*)v14 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v17, L"nY", v15);
	a1[2] -= 16i64;
	v18 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v9);
	v19 = v27;
	*(_QWORD*)v20 = *v18;
	*(_DWORD*)(v20 + 8) = *((_DWORD*)v18 + 2);
	a1[2] += 16i64;
	sub_1400F06F0((__int64)a1, v21, L"nZ", v19);
	a1[2] -= 16i64;
	v22 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v9);
	*(_QWORD*)v23 = *v22;
	*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v24, v9);
	return 1i64;
}
// 1404E9AEB: variable 'v4' is possibly undefined
// 1404E9BB7: variable 'v16' is possibly undefined
// 1404E9BC9: variable 'v17' is possibly undefined
// 1404E9BF8: variable 'v20' is possibly undefined
// 1404E9C0A: variable 'v21' is possibly undefined
// 1404E9C30: variable 'v23' is possibly undefined
// 1404E9C42: variable 'v24' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B0CC70: using guessed type wchar_t aNx_0[3];
// 140B0CF1C: using guessed type wchar_t aNy_0[3];
// 140B0CF24: using guessed type wchar_t aNz[3];
// 140C63658: using guessed type __int64 qword_140C63658;

