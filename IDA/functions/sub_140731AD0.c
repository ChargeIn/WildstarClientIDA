//----- (0000000140731AD0) ----------------------------------------------------
__int64 __fastcall sub_140731AD0(__int64 a1)
{
	__int64 v2; // rax
	_DWORD* v3; // rdx
	int v4; // r8d

	v2 = sub_1405B1510(&qword_140C7DFB0);
	v3 = *(_DWORD**)(a1 + 16);
	v4 = 0;
	if (v2)
		LOBYTE(v4) = *(_QWORD*)(v2 + 32) == *(_QWORD*)(qword_140C635F0 + 5792);
	*v3 = v4;
	v3[2] = 1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C7DFB0: using guessed type __int64 qword_140C7DFB0;

