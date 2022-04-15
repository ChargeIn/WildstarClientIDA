//----- (000000014074B160) ----------------------------------------------------
__int64 __fastcall sub_14074B160(__int64 a1)
{
	int v2; // edi
	int v3; // eax
	_DWORD* v4; // rcx
	bool v5; // sf
	__int64 result; // rax
	char v7; // [rsp+30h] [rbp+8h] BYREF

	v2 = 0;
	if (*(_QWORD*)(qword_140C65898 + 26392))
	{
		v7 = 0;
		sub_1403F4900(qword_140C65898, 0x190u, (__int64)&v7);
		v3 = 0;
	}
	else
	{
		v3 = -2147467259;
	}
	v4 = *(_DWORD**)(a1 + 16);
	v5 = v3 < 0;
	result = 1i64;
	LOBYTE(v2) = !v5;
	v4[2] = 1;
	*v4 = v2;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

