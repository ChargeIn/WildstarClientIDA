//----- (00000001406B4850) ----------------------------------------------------
__int64 __fastcall sub_1406B4850(_QWORD* a1)
{
	unsigned __int64* v2; // rax
	unsigned __int64 v3; // r14
	__int64 v4; // r15
	__int64 v5; // rax
	__int64 v6; // rsi
	__int64* v7; // rbp
	void(__fastcall * **v8)(_QWORD); // rbx
	int* v9; // rcx
	int* v10; // rax
	__int64 v11; // rax
	int* v12; // rax
	__int64 v13; // rax
	int* v14; // rsi
	__int64 v15; // rax
	unsigned int v16; // edi
	__int64 v18[2]; // [rsp+40h] [rbp-168h] BYREF
	__int64 v19[24]; // [rsp+50h] [rbp-158h] BYREF
	__int128 v20; // [rsp+110h] [rbp-98h]
	int* v21; // [rsp+120h] [rbp-88h]
	int v22[20]; // [rsp+130h] [rbp-78h] BYREF

	v2 = (unsigned __int64*)sub_140056AB0(a1, 1u);
	if (!v2)
		return 0i64;
	v3 = *v2;
	if (!*v2)
		return 0i64;
	v4 = qword_140C65898;
	v5 = sub_140629AF0(qword_140C65898 + 27592, v3);
	v6 = v5;
	if (v5 && (v7 = (__int64*)(v5 + 80), *(_DWORD*)(v5 + 80)) && *(_QWORD*)(v5 + 88))
	{
		v8 = 0i64;
		v18[1] = 0i64;
		v18[0] = 0i64;
		if (!(unsigned int)sub_1403F82F0(v4, 0, v7, v22, 0x21u, v18, 0i64))
			LOWORD(v22[0]) = 0;
		sub_1400B7090((__int64)v19, 624326);
		v19[0] = (__int64)off_140B69230;
		v21 = 0i64;
		v20 = 0i64;
		v9 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v20 = v9;
		*((_QWORD*)&v20 + 1) = v9;
		v21 = v9 + 4;
		if (v9)
			*(_WORD*)v9 = 0;
		v10 = sub_14018B280(96i64, 0);
		if (v10)
			v11 = sub_1404DDB40((__int64)v10, *(int**)(v6 + 24));
		else
			v11 = 0i64;
		*(_DWORD*)(v11 + 88) = 0;
		sub_1400B7480((__int64)v19, (_QWORD*)v11);
		v12 = sub_14018B280(96i64, 0);
		if (v12)
			v13 = sub_1404DDB40((__int64)v12, *(int**)(v6 + 32));
		else
			v13 = 0i64;
		*(_DWORD*)(v13 + 88) = 0;
		sub_1400B7480((__int64)v19, (_QWORD*)v13);
		v14 = sub_14018B280(104i64, 0);
		if (v14)
		{
			v15 = sub_1400B7660(v19);
			v8 = (void(__fastcall***)(_QWORD))sub_14073E140((__int64)v14, v22, *(int**)(v15 + 8), 0, 1, v3, v7);
		}
		v16 = sub_14073EB30(a1, v8);
		if (v8)
			(*v8)[1](v8);
		if ((_QWORD)v20)
			sub_14018B900(v20, 0);
		sub_1400B7390(v19);
		return v16;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 1406B4850: using guessed type int var_78[20];

