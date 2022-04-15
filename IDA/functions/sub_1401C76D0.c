//----- (00000001401C76D0) ----------------------------------------------------
void __fastcall sub_1401C76D0(__int64 a1, int a2)
{
	_QWORD* v3; // r10
	__int64 v4; // rcx
	__int64 v5; // r8
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rax

	if (*(_DWORD*)(a1 + 40) == 2)
	{
		v3 = (_QWORD*)(a1 + 144);
		**(_QWORD**)(a1 + 136) = *(_QWORD*)(a1 + 144);
		v4 = *(_QWORD*)(a1 + 144);
		v5 = qword_140C63758;
		v6 = *(_QWORD*)(a1 + 136);
		if (v4)
			*(_QWORD*)(v4 + 136) = v6;
		else
			*(_QWORD*)(qword_140C63758 + 8i64 * *(int*)(a1 + 44) + 72) = v6;
		v7 = v5 + 8i64 * a2;
		*(_QWORD*)(a1 + 136) = 0i64;
		*v3 = 0i64;
		v8 = *(_QWORD*)(v7 + 72);
		*v3 = 0i64;
		*(_QWORD*)(a1 + 136) = v8;
		**(_QWORD**)(v7 + 72) = a1;
		*(_QWORD*)(v7 + 72) = v3;
	}
}
// 140C63758: using guessed type __int64 qword_140C63758;

