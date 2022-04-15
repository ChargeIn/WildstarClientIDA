//----- (0000000140881790) ----------------------------------------------------
_QWORD* __fastcall sub_140881790(int a1)
{
	__int64 v1; // rax
	_QWORD* v2; // rdx

	v1 = qword_140C62918 + 112i64 * a1;
	v2 = *(_QWORD**)(v1 + 24);
	if (v2)
	{
		if (!*v2)
		{
			*(_QWORD*)(v1 + 24) = 0i64;
			*(_QWORD*)(v1 + 32) = 0i64;
			*(_DWORD*)(v1 + 100) += *(_DWORD*)(v1 + 4);
			return v2;
		}
		*(_QWORD*)(v1 + 24) = *v2;
		*(_DWORD*)(v1 + 100) += *(_DWORD*)(v1 + 4);
	}
	return v2;
}
// 140C62918: using guessed type __int64 qword_140C62918;

