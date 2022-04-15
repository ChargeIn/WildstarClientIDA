//----- (0000000140887120) ----------------------------------------------------
__int64 __fastcall sub_140887120(__int64 a1, int a2)
{
	__int64 result; // rax

	*(_DWORD*)(a1 + 148) = a2;
	result = sub_140886440(a1);
	*(_DWORD*)(a1 + 156) = result;
	return result;
}

