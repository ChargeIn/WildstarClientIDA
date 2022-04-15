//----- (0000000140129EA0) ----------------------------------------------------
__int64 __fastcall sub_140129EA0(__int64 a1)
{
	unsigned __int32 v2; // edi

	v2 = _InterlockedDecrement((volatile signed __int32*)(a1 + 8));
	if (v2 == -1)
	{
		if (a1)
		{
			sub_140129C40(a1);
			sub_14018B900(a1, 0);
		}
		return 0i64;
	}
	else
	{
		if (!v2)
		{
			if (qword_140C63650)
			{
				sub_140198370(a1 + 664, a1, (_QWORD*)(qword_140C63650 + 1992));
				return 0i64;
			}
			if (a1)
			{
				sub_140129C40(a1);
				sub_14018B900(a1, 0);
			}
		}
		return v2;
	}
}
// 140C63650: using guessed type __int64 qword_140C63650;

