//----- (00000001408EA960) ----------------------------------------------------
__int64 __fastcall sub_1408EA960(__int64 a1, unsigned int a2, unsigned int* a3, _DWORD* a4)
{
	__int64 result; // rax

	result = sub_1408EB730(a1 + 128, a2, a3, a4);
	if ((_DWORD)result != 2)
	{
		*a4 += *(_DWORD*)(a1 + 52);
		return 1i64;
	}
	return result;
}

