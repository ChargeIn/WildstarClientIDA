//----- (000000014049DDD0) ----------------------------------------------------
_BOOL8 __fastcall sub_14049DDD0(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	unsigned __int64 v4; // rax
	__int64 v5; // rcx

	if (!a2)
		return 0i64;
	if (a2 != *(_QWORD*)(qword_140C65898 + 120))
		return 0i64;
	if (!qword_140C65B98)
		return 0i64;
	v4 = 0i64;
	if (!qword_140C7DE20)
		return 0i64;
	while (1)
	{
		if (v4 < qword_140C7DE20)
		{
			v5 = *(_QWORD*)(qword_140C7DE18 + 8 * v4);
			if (v5)
			{
				if (*(_DWORD*)(v5 + 16) == 3)
					break;
			}
		}
		if (++v4 >= qword_140C7DE20)
			return 0i64;
	}
	return sub_1404A2090(v5, a3, *(_DWORD*)(v5 + 520), a4);
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

