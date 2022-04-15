//----- (00000001403BDB30) ----------------------------------------------------
__int64 __fastcall sub_1403BDB30(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	__int64 v3; // rbx
	__int64 v4; // rcx
	__int64 v5; // rcx

	result = sub_1403C1F50(a1, a2, *(_BYTE*)(qword_140C65898 + 28140));
	v3 = result;
	if (result)
	{
		sub_1403BDAC0(qword_140C65898);
		sub_1405CA990(v4, (__int64*)(v3 + 416));
		return sub_1405CA990(v5, (__int64*)(v3 + 408));
	}
	return result;
}
// 1403BDB65: variable 'v4' is possibly undefined
// 1403BDB76: variable 'v5' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

