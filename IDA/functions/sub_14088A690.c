//----- (000000014088A690) ----------------------------------------------------
__int64 __fastcall sub_14088A690(__int64 a1, int* a2)
{
	__int64 result; // rax

	if (a2)
		dword_140C629C8 = *a2;
	else
		dword_140C629C8 = 1065353216;
	nullsub_1(&unk_140C629F0);
	qword_140C629D0 = CreateEventW(0i64, 0, 0, 0i64);
	result = 2 - (unsigned int)(qword_140C629D0 != 0i64);
	if ((_DWORD)result == 1)
	{
		HIDWORD(qword_140C62A48) = -1;
		dword_140C62A50 = 0;
		qword_140C62A40 = 0i64;
		qword_140C62A58 = 0i64;
		qword_140C62A30 = 0i64;
		qword_140C62A38 = 0i64;
		return 1i64;
	}
	return result;
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C629C8: using guessed type int dword_140C629C8;
// 140C62A30: using guessed type __int64 qword_140C62A30;
// 140C62A38: using guessed type __int64 qword_140C62A38;
// 140C62A40: using guessed type __int64 qword_140C62A40;
// 140C62A48: using guessed type __int64 qword_140C62A48;
// 140C62A50: using guessed type int dword_140C62A50;
// 140C62A58: using guessed type __int64 qword_140C62A58;

