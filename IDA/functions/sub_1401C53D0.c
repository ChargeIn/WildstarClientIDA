//----- (00000001401C53D0) ----------------------------------------------------
int* sub_1401C53D0()
{
	if (*((_QWORD*)&xmmword_140C78590 + 1))
	{
		sub_1407E4830(*((int**)&xmmword_140C78590 + 1), 0i64, 56 * qword_140C78560);
		sub_1401C5450();
	}
	dword_140C796CC = 0;
	dword_140C785B0 = dword_140C636A8;
	if ((_QWORD)xmmword_140C785A0)
		sub_1407E4830((int*)xmmword_140C785A0, 0i64, 16 * qword_140C78560);
	qword_140C796C0 = 0i64;
	return sub_1407E4830(dword_140C785C0, 0i64, 0x1100ui64);
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C78560: using guessed type __int64 qword_140C78560;
// 140C78590: using guessed type __int128 xmmword_140C78590;
// 140C785A0: using guessed type __int128 xmmword_140C785A0;
// 140C785B0: using guessed type int dword_140C785B0;
// 140C785C0: using guessed type int dword_140C785C0[1088];
// 140C796C0: using guessed type __int64 qword_140C796C0;
// 140C796CC: using guessed type int dword_140C796CC;

