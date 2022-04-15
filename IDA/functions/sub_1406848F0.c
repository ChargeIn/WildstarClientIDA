//----- (00000001406848F0) ----------------------------------------------------
__int64 __fastcall sub_1406848F0(__int64 a1, __int64 a2)
{
	unsigned int v4; // ebx
	__int64 v5; // rax
	__int64 v6; // rax
	unsigned int v7; // edx
	__int64 v8; // rax

	if (!a2 || !qword_140C65898 || *(_QWORD*)(qword_140C65898 + 120) != a2 || !qword_140C65970)
		return 0i64;
	v4 = 0;
	if (!*(_QWORD*)(a1 + 120))
		return 1i64;
	v5 = 0i64;
	while (1)
	{
		if ((unsigned int)sub_1403D7C30(*(_QWORD*)(8 * v5 + *(_QWORD*)(a1 + 112)), a2, 1))
		{
			v6 = sub_14047C430(a2);
			v8 = sub_1403D7BC0(v6, v7);
			if (!v8 || !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v8 + 56i64))(v8))
				break;
		}
		v5 = ++v4;
		if ((unsigned __int64)v4 >= *(_QWORD*)(a1 + 120))
			return 1i64;
	}
	return 0i64;
}
// 14068498A: variable 'v7' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

