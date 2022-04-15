//----- (000000014058BF90) ----------------------------------------------------
void __fastcall sub_14058BF90(__int64 a1)
{
	__int64 v1; // rax
	__int16* v2; // rax

	v1 = 0i64;
	if (!qword_140C7DE20)
		goto LABEL_4;
	while (1)
	{
		a1 = *(_QWORD*)(qword_140C7DE18 + 8 * v1);
		if (*(_DWORD*)(a1 + 16) == 3)
			break;
		if (++v1 >= (unsigned __int64)qword_140C7DE20)
			goto LABEL_4;
	}
	if (a1)
	{
		sub_14057E8D0((__int64*)a1);
	}
	else
	{
	LABEL_4:
		v2 = sub_14034BDD0(a1, 282577);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v2, 0, 0i64);
	}
}
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

