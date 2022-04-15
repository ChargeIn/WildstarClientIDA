//----- (000000014056ABA0) ----------------------------------------------------
__int64 __fastcall sub_14056ABA0(__int64 a1, unsigned int a2, int* a3, int a4)
{
	__int64 v6; // rdi
	int* v8; // rax
	__int64 result; // rax

	v6 = a2;
	if (!*(_QWORD*)(a1 + 72))
	{
		v8 = sub_14018B280(312i64, 0);
		if (v8)
			v8 = (int*)sub_1400B52A0((__int64)v8);
		*(_QWORD*)(a1 + 72) = v8;
		sub_1407E4830(v8, 0i64, 0x138ui64);
	}
	*(_DWORD*)(a1 + 184) = v6;
	*(_QWORD*)(a1 + 188) = 0i64;
	*(_QWORD*)(a1 + 196) = 0i64;
	*(_QWORD*)(a1 + 204) = 0i64;
	*(_QWORD*)(a1 + 212) = 0i64;
	sub_1407DB590((int*)(a1 + 188), a3, 4 * v6);
	*(_DWORD*)(a1 + 220) = a4;
	*(_DWORD*)(a1 + 292) = 1;
	result = sub_14056A430(a1);
	if ((int)result >= 0)
		return sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ItemModified", byte_1409EAD24, a1);
	*(_DWORD*)(a1 + 184) = 0;
	return result;
}
// 1409EAD24: using guessed type _BYTE byte_1409EAD24[24];
// 140C65898: using guessed type __int64 qword_140C65898;

