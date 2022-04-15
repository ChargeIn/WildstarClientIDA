//----- (000000014086C7C0) ----------------------------------------------------
__int64 __fastcall sub_14086C7C0(int a1, char a2)
{
	__int64 v4; // rax
	__int64 result; // rax
	__int64 v6; // rbx

	v4 = sub_1408819F0(dword_140C10F20, 488i64);
	if (v4)
	{
		result = sub_14086C340(v4, a1, a2);
		v6 = result;
		if (!result)
			return result;
		if ((unsigned int)sub_14086D3F0(result) == 1)
			return v6;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
	}
	return 0i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

