//----- (0000000140742E10) ----------------------------------------------------
__int64 __fastcall sub_140742E10(__int64 a1)
{
	__int64 v2; // rcx
	int v3; // edi
	_QWORD* v4; // rbx
	int v5; // eax
	__int64 v6; // r8
	_DWORD* v7; // rcx
	__int64 result; // rax

	v2 = qword_140C65898;
	v3 = 0;
	v4 = (_QWORD*)(qword_140C65898 + 27696);
	if (*(_QWORD*)(qword_140C65898 + 27696))
	{
		v6 = qword_140C65898 + 27696;
		*(_DWORD*)(qword_140C65898 + 27704) = 1;
		sub_1403F4900(v2, 0x453u, v6);
		v5 = 1;
		*v4 = 0i64;
		v4[1] = 0i64;
		v4[2] = 0i64;
		v4[3] = 0i64;
	}
	else
	{
		v5 = 0;
	}
	v7 = *(_DWORD**)(a1 + 16);
	LOBYTE(v3) = v5 != 0;
	v7[2] = 1;
	result = 1i64;
	*v7 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

