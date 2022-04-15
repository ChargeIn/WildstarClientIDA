//----- (000000014084D320) ----------------------------------------------------
__int64 __fastcall sub_14084D320(__int64 a1)
{
	__int64 v2; // rcx
	__int64 result; // rax
	void(__fastcall * **v4)(_QWORD, _QWORD); // rdi
	int v5; // esi

	v2 = *(_QWORD*)(a1 + 120);
	if (v2)
	{
		sub_140873C30(v2);
		result = sub_140873EB0(*(_QWORD*)(a1 + 120));
		v4 = *(void(__fastcall****)(_QWORD, _QWORD))(a1 + 120);
		v5 = dword_140C10F20;
		if (v4)
		{
			(**v4)(v4, 0i64);
			result = sub_140881720(v5, (__int64)v4);
		}
		*(_QWORD*)(a1 + 120) = 0i64;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

