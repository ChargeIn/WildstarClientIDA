//----- (0000000140843C20) ----------------------------------------------------
__int64 __fastcall sub_140843C20(__int64 a1, int a2, int a3, float a4)
{
	__int64* v4; // r9
	__int64* v8; // rax
	__int64 result; // rax

	v4 = (__int64*)qword_140C61FB0;
	if (!qword_140C61FB0)
	{
		if (dword_140C61FC0 >= HIDWORD(qword_140C61FB8)
			|| (v8 = (__int64*)sub_1408819F0(dword_140C10F20, (unsigned int)(qword_140C61FB0 + 32)), (v4 = v8) == 0i64))
		{
		LABEL_9:
			sub_1408441B0();
			result = sub_1408439A0((__int64)&qword_140C61FA0);
			goto LABEL_10;
		}
		*v8 = qword_140C61FB0;
		qword_140C61FB0 = (__int64)v8;
	}
	if (qword_140C61FA8)
	{
		*(_QWORD*)qword_140C61FA8 = v4;
		v4 = (__int64*)qword_140C61FB0;
	}
	else
	{
		qword_140C61FA0 = (__int64)v4;
	}
	qword_140C61FA8 = (__int64)v4;
	qword_140C61FB0 = *v4;
	*v4 = 0i64;
	++dword_140C61FC0;
	result = qword_140C61FA8 + 8;
	if (qword_140C61FA8 == -8)
		goto LABEL_9;
LABEL_10:
	*(float*)(result + 16) = a4;
	*(_QWORD*)result = a1;
	*(_DWORD*)(result + 12) = a3;
	*(_DWORD*)(result + 8) = a2;
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61FA0: using guessed type __int64 qword_140C61FA0;
// 140C61FA8: using guessed type __int64 qword_140C61FA8;
// 140C61FB0: using guessed type __int64 qword_140C61FB0;
// 140C61FB8: using guessed type __int64 qword_140C61FB8;
// 140C61FC0: using guessed type int dword_140C61FC0;

