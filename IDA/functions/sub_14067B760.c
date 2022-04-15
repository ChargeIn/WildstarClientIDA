//----- (000000014067B760) ----------------------------------------------------
__int64 __fastcall sub_14067B760(_QWORD* a1)
{
	__int64 v1; // rax
	__int64 v2; // rax

	if (qword_140C65970
		&& *(_QWORD*)(qword_140C65898 + 120)
		&& (v1 = sub_140056AB0(a1, 1u)) != 0
		&& (v2 = *(_QWORD*)(v1 + 8)) != 0)
	{
		return sub_1403D7BC0(qword_140C65970, ***(_DWORD***)(v2 + 8));
	}
	else
	{
		return 0i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

