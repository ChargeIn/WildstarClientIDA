//----- (0000000140854D30) ----------------------------------------------------
__int64 __fastcall sub_140854D30(
	_QWORD* a1,
	unsigned int a2,
	unsigned __int32 a3,
	int a4,
	int a5,
	int* a6,
	unsigned int a7)
{
	__int64 result; // rax
	__int32 v12; // eax

	result = 1i64 << a3;
	a1[12] |= 1i64 << a3;
	if (qword_140C61BB0)
	{
		v12 = (*(__int64(__fastcall**)(_QWORD*))(*a1 + 616i64))(a1);
		sub_1408382F0(qword_140C61BB0, (__int64)a1, a2, a3, a4, a5, a6, a7, 0i64, v12);
		return (*(__int64(__fastcall**)(_QWORD*, _QWORD))(*a1 + 224i64))(a1, a3);
	}
	return result;
}
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

