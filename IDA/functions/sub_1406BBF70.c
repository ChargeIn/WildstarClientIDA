//----- (00000001406BBF70) ----------------------------------------------------
char __fastcall sub_1406BBF70(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	__int64 v4; // rax
	__int64 v6; // rax

	v4 = qword_140C65898;
	*(_QWORD*)(a1 + 16) = a2;
	*(_QWORD*)(a1 + 24) = a3;
	*(_DWORD*)(a1 + 8) = a4;
	*(_BYTE*)(a1 + 32) = 1;
	if (!v4)
		return 1;
	v6 = *(_QWORD*)(v4 + 25744);
	if (!v6 || !*(_DWORD*)(v6 + 684))
		return 1;
	if (a4 == 2)
	{
		if (sub_1400D1A60(a3))
			return 1;
	}
	else if (a4 == 3 && !sub_1400D1A60(a3))
	{
		return 1;
	}
	sub_1400CF300(a3, a1);
	if (!*(_BYTE*)(a1 + 32))
		sub_140059390();
	return *(_BYTE*)(a1 + 32);
}
// 1406BBFF2: variable 'a3' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

