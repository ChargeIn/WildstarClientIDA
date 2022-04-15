//----- (00000001400D9A20) ----------------------------------------------------
__int64 __fastcall sub_1400D9A20(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rdx
	__int64 v4; // rsi
	int v5; // edi
	_DWORD* v6; // r14
	_DWORD* v7; // rcx
	int v8; // eax
	__int64* v9; // rcx
	int v10; // eax
	__int64 v11; // rdx
	unsigned __int64 v12; // rcx
	int v13; // eax
	__int64 v14; // rdx
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // [rsp+20h] [rbp-48h] BYREF
	int v18; // [rsp+28h] [rbp-40h]
	__int64(__fastcall * *v19)(); // [rsp+30h] [rbp-38h] BYREF
	int v20; // [rsp+38h] [rbp-30h]
	_QWORD* v21; // [rsp+40h] [rbp-28h]
	__int64 v22; // [rsp+78h] [rbp+10h] BYREF

	result = sub_1400D66A0(a1, 1u);
	v4 = result;
	if (!result)
		return result;
	v5 = 0;
	v6 = dword_140A12138;
	v7 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v7 = (_DWORD*)(a1[3] + 16i64);
	v8 = v7[2];
	if (v8 == 3 || v8 == 4 && sub_14005AC80((char*)(*(_QWORD*)v7 + 32i64), (unsigned __int64*)&v22))
	{
		v9 = (__int64*)dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v9 = (__int64*)(a1[3] + 16i64);
		v10 = *((_DWORD*)v9 + 2);
		if (v10 != 3)
		{
			if (v10 != 4 || !sub_14005AC80((char*)(*v9 + 32), (unsigned __int64*)&v22))
				goto LABEL_14;
			v18 = 3;
			v9 = &v17;
			v17 = v22;
		}
		v5 = (int)*(double*)v9;
	}
LABEL_14:
	v21 = a1;
	v20 = -2;
	v19 = off_140B56A08;
	sub_1400579E0((__int64)a1, v3, -2);
	v11 = (__int64)v21;
	v12 = v21[2];
	if (v21[3] + 32i64 < v12)
		v6 = (_DWORD*)(v21[3] + 32i64);
	*(_QWORD*)v12 = *(_QWORD*)v6;
	*(_DWORD*)(v12 + 8) = v6[2];
	*(_QWORD*)(v11 + 16) += 16i64;
	v20 = sub_1400578C0((__int64)v21);
	if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v19[1])(&v19))
		sub_1400C7F50(v4, &v19);
	v13 = sub_1400CD4C0(v4, v5);
	v15 = a1[2];
	*(_DWORD*)(v15 + 8) = 3;
	*(double*)v15 = (double)v13;
	v16 = (__int64)v21;
	a1[2] += 16i64;
	v19 = off_140B56A08;
	if (v16)
		sub_1400579E0(v16, v14, v20);
	return 1i64;
}
// 1400D9B07: variable 'v3' is possibly undefined
// 1400D9BAE: variable 'v14' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

