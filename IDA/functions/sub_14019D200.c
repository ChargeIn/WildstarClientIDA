//----- (000000014019D200) ----------------------------------------------------
__int64 __fastcall sub_14019D200(__int64 a1, unsigned __int16* a2)
{
	_QWORD* v3; // rsi
	_QWORD* v4; // rdi
	_QWORD* v5; // rbx
	_QWORD* v7; // [rsp+40h] [rbp+8h]

	v3 = *(_QWORD**)(qword_140C63750 + 16);
	v4 = v3;
	v5 = (_QWORD*)v3[1];
	while (v5)
	{
		if ((int)sub_14018E2C0(v5[4], a2) < 0)
		{
			v5 = (_QWORD*)v5[3];
		}
		else
		{
			v4 = v5;
			v5 = (_QWORD*)v5[2];
		}
	}
	if (v4 == v3 || (v7 = v4, (int)sub_14018E2C0((__int64)a2, (unsigned __int16*)v4[4]) < 0))
		v7 = v3;
	if (v7 == v3)
		return 0i64;
	else
		return v7[5];
}
// 140C63750: using guessed type __int64 qword_140C63750;

