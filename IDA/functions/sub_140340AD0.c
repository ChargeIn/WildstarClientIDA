//----- (0000000140340AD0) ----------------------------------------------------
__int64 __fastcall sub_140340AD0(__int64 a1, __int64(__fastcall* a2)(__int64, __int64), __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // rbx

	if (!a2)
		return 2147942487i64;
	v6 = qword_140C7A0C0;
	for (result = 0i64; v6; v6 = *(_QWORD*)(v6 + 56))
	{
		result = a2(v6, a3);
		if ((int)result < 0)
			break;
	}
	return result;
}
// 140C7A0C0: using guessed type __int64 qword_140C7A0C0;

