//----- (00000001408ECE30) ----------------------------------------------------
__int64 __fastcall sub_1408ECE30(int a1, __int64 a2, __int64 a3)
{
	int v3; // ecx
	int v4; // r9d
	__int64 result; // rax
	__int64 i; // r11
	int v7; // ecx

	v3 = a1 >> 2;
	v4 = 0;
	result = 0i64;
	for (i = v3; result < i; *(_DWORD*)(a3 + 4 * result - 4) = *(_DWORD*)(a2 + 4i64 * v7 + 4))
	{
		v7 = 2 * v4;
		++result;
		++v4;
	}
	return result;
}

