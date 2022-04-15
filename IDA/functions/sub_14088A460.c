//----- (000000014088A460) ----------------------------------------------------
__int64 __fastcall sub_14088A460(int* a1)
{
	__int64 result; // rax
	__int64 v3; // rax

	result = qword_140C629C0;
	if (!qword_140C629C0)
	{
		v3 = sub_1408819F0(dword_140C10F20, (unsigned int)(qword_140C629C0 + 1));
		if (v3)
		{
			qword_140C629C0 = v3;
			if ((unsigned int)sub_14088A690(v3, a1) == 1)
				return qword_140C629C0;
			sub_14088A4D0(qword_140C629C0);
		}
		result = 0i64;
		qword_140C629C0 = 0i64;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C629C0: using guessed type __int64 qword_140C629C0;

