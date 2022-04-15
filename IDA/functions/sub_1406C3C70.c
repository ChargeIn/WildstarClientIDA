//----- (00000001406C3C70) ----------------------------------------------------
int* __fastcall sub_1406C3C70(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, __int64 a5)
{
	__int64 v9; // rdi
	unsigned __int64 i; // rbx
	wchar_t* v11; // rdx
	__int64 v12; // rax
	wchar_t* v13; // rax
	int* v14; // rbx
	int* result; // rax
	bool v16; // [rsp+40h] [rbp-B8h] BYREF
	_OWORD v17[6]; // [rsp+50h] [rbp-A8h] BYREF

	sub_1400D45E0((__int64)v17, a1, a2, a5, 0i64);
	v9 = 0i64;
	for (i = 0i64; i < 2; ++i)
	{
		v11 = off_140B38E28[i];
		v16 = 0;
		v12 = sub_1401A6B80(a5, v11);
		if (v12)
		{
			v13 = (wchar_t*)sub_1401A4F40(v12 + 32);
			sub_1401A52E0(v13, &v16);
			if (v16)
				v9 |= 1i64 << i;
		}
	}
	v14 = sub_14018B280(1104i64, 0);
	if (!v14)
		return 0i64;
	sub_1400C5920((__int64)v14, a1, a2, a3, v17, a4, v9);
	*((_QWORD*)v14 + 132) = 0i64;
	v14[266] = 0;
	*(_QWORD*)v14 = off_140B70540;
	*((_QWORD*)v14 + 134) = 0i64;
	*((_QWORD*)v14 + 54) |= 0x4000000000ui64;
	result = v14;
	*(_QWORD*)(v14 + 271) = 65537i64;
	return result;
}
// 140B38E28: using guessed type wchar_t *off_140B38E28[2];
// 140B70540: using guessed type __int64 (__fastcall *off_140B70540[25])();
// 1406C3C70: using guessed type _OWORD var_A8[6];

