//----- (00000001401D76E0) ----------------------------------------------------
__int64 __fastcall sub_1401D76E0(__int64 a1)
{
	__int64 v1; // r10
	__int64 v2; // rax
	__int64 v3; // rdx
	__int64 v5; // rdx

	v1 = a1;
	if (!*(_QWORD*)(a1 + 48))
	{
		LODWORD(v2) = 3;
		while (1)
		{
			v2 = (unsigned int)(v2 - 1);
			v3 = *(_QWORD*)(a1 + 8 * v2);
			*(_QWORD*)(a1 + 48) = v3;
			if (v3)
				break;
			if (!(_DWORD)v2)
				return 0i64;
		}
		sub_1401D7680(a1, v3);
		v5 = qword_140C63758;
		*(_DWORD*)(*(_QWORD*)(v1 + 48) + 152i64) = *(_DWORD*)(qword_140C63758 + 40);
		++* (_DWORD*)(v5 + 40);
		*(_DWORD*)(*(_QWORD*)(v1 + 48) + 40i64) = 3;
	}
	return *(_QWORD*)(v1 + 48);
}
// 1401D771F: variable 'v1' is possibly undefined
// 140C63758: using guessed type __int64 qword_140C63758;

