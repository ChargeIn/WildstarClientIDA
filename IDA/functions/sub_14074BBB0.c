//----- (000000014074BBB0) ----------------------------------------------------
__int64 __fastcall sub_14074BBB0(__int64 a1)
{
	int v1; // r8d
	_DWORD* v3; // rdx
	int v4; // eax
	__int64 v5; // r10
	_DWORD* v6; // rcx
	bool v7; // zf
	__int64 result; // rax

	v1 = 0;
	v3 = *(_DWORD**)(qword_140C65898 + 26392);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C65898 + 120);
		if (v5)
		{
			if (*v3 == *(_DWORD*)(v5 + 8))
				v4 = v3[3];
			else
				v4 = v3[1];
		}
	}
	v6 = *(_DWORD**)(a1 + 16);
	v7 = v4 == 0;
	result = 1i64;
	LOBYTE(v1) = !v7;
	v6[2] = 1;
	*v6 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

