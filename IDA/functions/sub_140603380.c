//----- (0000000140603380) ----------------------------------------------------
__int64 __fastcall sub_140603380(__int64 a1, _QWORD* a2)
{
	__int64 v2; // rdi
	__int64 v4; // rcx
	__int64 v6; // rdi
	__int64 v7; // rcx
	unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF

	v2 = *(_QWORD*)(a1 + 64);
	if (v2 && *(_QWORD*)(v2 + 72) == *a2)
	{
		if (sub_14079EE60(*(_QWORD*)(a1 + 64), (__int64)(a2 + 1), &v8))
			v4 = *(_QWORD*)(*(_QWORD*)(v2 + 88) + 8 * v8);
		else
			v4 = 0i64;
		sub_140607490(v4, (__int64)a2);
		sub_1400A8020(*(_QWORD*)(qword_140C65898 + 29504) + 4536i64);
		return 0i64;
	}
	else
	{
		v6 = *(_QWORD*)(a1 + 72);
		if (v6 && *(_QWORD*)(v6 + 72) == *a2)
		{
			if (sub_14079EE60(*(_QWORD*)(a1 + 72), (__int64)(a2 + 1), &v8))
				v7 = *(_QWORD*)(*(_QWORD*)(v6 + 88) + 8 * v8);
			else
				v7 = 0i64;
			sub_140607490(v7, (__int64)a2);
		}
		return 0i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;

