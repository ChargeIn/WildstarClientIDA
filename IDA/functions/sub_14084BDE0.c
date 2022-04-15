//----- (000000014084BDE0) ----------------------------------------------------
__int64 __fastcall sub_14084BDE0(__int64 a1)
{
	unsigned __int64 v2; // rdi
	__int64 v3; // rax
	__int64 result; // rax

	v2 = (*(_QWORD*)(a1 + 8) - *(_QWORD*)a1) / 20i64;
	if (v2 >= *(unsigned int*)(a1 + 16) && !sub_14084C110((__int64*)a1, 1) || v2 >= *(unsigned int*)(a1 + 16))
		return 0i64;
	v3 = *(_QWORD*)(a1 + 8);
	if (v3)
	{
		*(_BYTE*)(v3 + 16) &= 0xFCu;
		*(_QWORD*)(v3 + 8) = 0i64;
		*(_QWORD*)v3 = 0i64;
		*(_BYTE*)(v3 + 17) = 0;
	}
	result = *(_QWORD*)(a1 + 8);
	*(_QWORD*)(a1 + 8) = result + 20;
	return result;
}

