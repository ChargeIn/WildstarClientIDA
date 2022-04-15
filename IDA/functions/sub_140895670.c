//----- (0000000140895670) ----------------------------------------------------
__int64 __fastcall sub_140895670(__int64* a1, __int64 a2, __int64 a3, signed int a4, _DWORD* a5)
{
	_DWORD* v5; // r15
	int v8; // ebx
	__int64(__fastcall * **v10)(_QWORD, _QWORD); // rax
	__int64 v11; // rbx
	_QWORD* v12; // rsi
	__int64 v13; // rax
	int v14; // ebx
	int v15; // eax
	unsigned int v16; // eax
	char v17; // [rsp+68h] [rbp+20h] BYREF

	v5 = a5;
	*a5 = 0;
	v8 = sub_140891630(a1[19]);
	if (a4 >= (int)(sub_1408922F0(a1[19]) + v8))
		return 2i64;
	v10 = sub_1408917A0(a1[19], (__int64)a1);
	v11 = (__int64)v10;
	if (!v10)
		return 2i64;
	v12 = sub_14088FB00((__int64)a1, 0i64, (__int64)v10);
	sub_14088B630(v11);
	if (!v12)
		return 2i64;
	v13 = *a1;
	a1[14] = 0i64;
	*v5 = (*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD, _QWORD, char*, _DWORD))(v13 + 88))(
		a1,
		0i64,
		(unsigned int)a4,
		0i64,
		&v17,
		0);
	v14 = sub_140891630(a1[19]);
	v15 = sub_1408922F0(a1[19]);
	sub_14088C9F0((__int64)v12, 0, 4, v15 + v14);
	v16 = sub_140891630(a1[19]);
	return 2 - (unsigned int)(sub_14088FB00((__int64)a1, v16, 0i64) != 0i64);
}

