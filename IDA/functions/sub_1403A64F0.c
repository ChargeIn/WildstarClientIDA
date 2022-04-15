//----- (00000001403A64F0) ----------------------------------------------------
_BOOL8 __fastcall sub_1403A64F0(__int64 a1, __m128* a2)
{
	__int64 v2; // rdi
	__m128* v4; // rax
	__int64 v5; // rax
	__int64 v6; // rcx
	_BOOL8 result; // rax

	v2 = qword_140C65898;
	result = a2
		&& (v4 = *(__m128**)(qword_140C65898 + 120), a2 != v4)
		&& v4
		&& !v4[37].m128_i32[0]
		&& a2[8].m128_i32[0] == 18
		&& (v5 = sub_1403967F0(*(_QWORD*)(qword_140C65898 + 32144), a2->m128_u32[2])) != 0
		&& ((v6 = *(_QWORD*)(v5 + 48)) == 0 || (*(_BYTE*)(v6 + 8) & 1) == 0)
		&& !*(_DWORD*)(v5 + 72)
		&& *(_DWORD*)(v5 + 76)
		&& (*(_DWORD*)(v5 + 12) == 2 || sub_14039D230(v2, a2));
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

