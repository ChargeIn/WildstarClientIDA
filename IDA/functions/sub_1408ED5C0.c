//----- (00000001408ED5C0) ----------------------------------------------------
__int64 __fastcall sub_1408ED5C0(int a1)
{
	__int64 result; // rax
	unsigned int i; // ecx

	result = 0i64;
	if (a1)
	{
		for (i = a1 - 1; i; i >>= 1)
			result = (unsigned int)(result + 1);
	}
	return result;
}

