//----- (00000001400C3880) ----------------------------------------------------
__int64 __fastcall sub_1400C3880(__int64 a1, __int64 a2, int a3, char a4, char a5)
{
	__int64 result; // rax

	*(_DWORD*)(a1 + 296) = a3;
	sub_1400C3730(a1, a2);
	*(_BYTE*)(a1 + 414) &= ~1u;
	*(_BYTE*)(a1 + 413) = 0;
	*(_DWORD*)(a1 + 396) = 1048576000;
	*(_QWORD*)(a1 + 400) = 1048576000i64;
	*(_BYTE*)(a1 + 412) = 4 * (a4 & 1 | (2 * (a5 & 1 | 2)));
	result = 0i64;
	*(_QWORD*)(a1 + 388) = 5i64;
	*(_DWORD*)(a1 + 408) = 1056964608;
	*(_DWORD*)(a1 + 384) = 5;
	if (a2)
		result = *(_QWORD*)(a2 + 64);
	*(_QWORD*)(a1 + 288) = result;
	return result;
}

