//----- (0000000140859B70) ----------------------------------------------------
__int64 __fastcall sub_140859B70(int a1)
{
	__int64 v2; // rax
	__int64 result; // rax
	__int64 v4; // rbx
	__int64 v5; // rax

	v2 = sub_1408819F0(dword_140C10F20, 336i64);
	if (!v2)
		return 0i64;
	result = sub_140859300(v2, a1);
	v4 = result;
	if (!result)
		return result;
	if ((unsigned int)sub_14085AD70(result) != 1)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 16i64))(v4);
		return 0i64;
	}
	v5 = qword_140C62458;
	if (!qword_140C62458)
		v5 = v4;
	qword_140C62458 = v5;
	return v4;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C62458: using guessed type __int64 qword_140C62458;

