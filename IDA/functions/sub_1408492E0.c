//----- (00000001408492E0) ----------------------------------------------------
__int64 __fastcall sub_1408492E0(__int64 a1)
{
	__int64 result; // rax
	__int64* v3; // rcx
	void(__fastcall * **v4)(_QWORD, _QWORD); // rdi
	int v5; // esi

	result = sub_140848A40(a1, 0);
	v3 = *(__int64**)(a1 + 24);
	if (v3)
	{
		result = sub_1408614B0(v3, 0);
		v4 = *(void(__fastcall****)(_QWORD, _QWORD))(a1 + 24);
		v5 = dword_140C10F28;
		if (v4)
		{
			(**v4)(v4, 0i64);
			result = sub_140881720(v5, (__int64)v4);
		}
		*(_QWORD*)(a1 + 24) = 0i64;
	}
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;

