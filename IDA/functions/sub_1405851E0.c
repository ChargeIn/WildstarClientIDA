//----- (00000001405851E0) ----------------------------------------------------
void __fastcall sub_1405851E0(__int64* a1)
{
	__int64* v1; // r10
	__int64 v2; // rdx
	__int64 v3; // rax
	int v4; // edx
	__int16* v5; // rax
	__int64 v6; // rdx

	v1 = a1;
	v2 = 0i64;
	if (!qword_140C7DE20)
		goto LABEL_4;
	while (1)
	{
		v3 = *(_QWORD*)(qword_140C7DE18 + 8 * v2);
		if (*(_DWORD*)(v3 + 16) == 1)
			break;
		if (++v2 >= (unsigned __int64)qword_140C7DE20)
			goto LABEL_4;
	}
	a1 = *(__int64**)(qword_140C7DE18 + 8 * v2);
	if (!v3)
	{
	LABEL_4:
		v4 = 114120;
	LABEL_5:
		v5 = sub_14034BDD0((__int64)a1, v4);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v5, 0, 0i64);
		return;
	}
	v6 = v1[1];
	if (((v1[2] - v6) & 0xFFFFFFFFFFFFFFFEui64) == 0)
	{
		v4 = 113067;
		goto LABEL_5;
	}
	sub_14057E7B0(a1, v6);
}
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

