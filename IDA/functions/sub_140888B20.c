//----- (0000000140888B20) ----------------------------------------------------
__int64 __fastcall sub_140888B20(__int64 a1, int a2)
{
	__int64 result; // rax

	*(_DWORD*)(a1 + 148) = a2;
	result = sub_1408878E0(a1);
	*(_DWORD*)(a1 + 156) = result;
	return result;
}

