//----- (00000001406B4C70) ----------------------------------------------------
__int64 __fastcall sub_1406B4C70(__int64 a1)
{
	int v1; // r8d
	unsigned __int64 v3; // r9
	int v4; // edi
	__int64 v5; // rdx
	_DWORD* v6; // rcx
	__int64 result; // rax

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C65898 + 27632);
	v4 = 0;
	v5 = 0i64;
	if (v3)
	{
		while ((*(_BYTE*)(*(_QWORD*)(*(_QWORD*)(qword_140C65898 + 27624) + 8 * v5) + 76i64) & 2) != 0)
		{
			if (++v5 >= v3)
				goto LABEL_6;
		}
		v4 = 1;
	}
LABEL_6:
	v6 = *(_DWORD**)(a1 + 16);
	LOBYTE(v1) = v4 != 0;
	v6[2] = 1;
	result = 1i64;
	*v6 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 1406B4C9C: conditional instruction was optimized away because r9.8!=0
// 140C65898: using guessed type __int64 qword_140C65898;

