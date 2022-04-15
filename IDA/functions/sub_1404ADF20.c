//----- (00000001404ADF20) ----------------------------------------------------
__int64 __fastcall sub_1404ADF20(__int64 a1, unsigned int a2, int a3)
{
	unsigned int v3; // ebx
	unsigned __int64 v5; // [rsp+20h] [rbp-28h] BYREF
	int v6; // [rsp+28h] [rbp-20h]
	int v7; // [rsp+34h] [rbp-14h]

	if (!qword_140C65898 || !*(_QWORD*)(qword_140C65898 + 120))
		return 0i64;
	v3 = 0;
	v6 = 1;
	v5 = 0i64;
	v7 = 0;
	if (!(unsigned int)sub_1404ADC50(a1, a2, &v5, a3))
		return 0i64;
	if (v7 == 9)
	{
		LOBYTE(v3) = v5 <= *(_QWORD*)(*(_QWORD*)(qword_140C635F0 + 5584) + 280i64);
		return v3;
	}
	if (v6 != 1)
		return 0i64;
	LOBYTE(v3) = v5 <= *(_QWORD*)(qword_140C65898 + 5624);
	return v3;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;

