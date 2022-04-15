//----- (00000001406B43C0) ----------------------------------------------------
__int64 __fastcall sub_1406B43C0(_QWORD* a1)
{
	unsigned __int64* v2; // rax
	unsigned __int64 v3; // rdx
	__int64 result; // rax

	v2 = (unsigned __int64*)sub_140056AB0(a1, 1u);
	if (v2)
		v3 = *v2;
	else
		v3 = 0i64;
	result = sub_140629AF0(qword_140C65898 + 27592, v3);
	if (result)
	{
		sub_1406B33F0(a1, result);
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

