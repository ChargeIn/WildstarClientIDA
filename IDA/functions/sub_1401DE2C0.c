//----- (00000001401DE2C0) ----------------------------------------------------
__int64 __fastcall sub_1401DE2C0(__int64 a1, _QWORD* a2)
{
	__int64 v2; // rdi
	__int64 v4; // rsi
	int* v5; // r14
	__int64 result; // rax

	v2 = qword_140C799F8;
	v4 = qword_140C799F8 + 1;
	v5 = sub_14018DB00(qword_140C799F0, qword_140C799F8 + 1, 8i64);
	*(_QWORD*)&v5[2 * v2] = *a2;
	if ((int*)qword_140C799F0 != v5)
	{
		sub_1407DB590(v5, (int*)qword_140C799F0, 8 * qword_140C799F8);
		if (qword_140C799F0)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(qword_140C799F0 - 16) + 8i64))(qword_140C799F0 - 16);
		qword_140C799F0 = (__int64)v5;
	}
	result = v2;
	qword_140C799F8 = v4;
	return result;
}
// 140C799F0: using guessed type __int64 qword_140C799F0;
// 140C799F8: using guessed type __int64 qword_140C799F8;

