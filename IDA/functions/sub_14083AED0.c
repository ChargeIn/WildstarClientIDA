//----- (000000014083AED0) ----------------------------------------------------
__int64 __fastcall sub_14083AED0(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	result = *(unsigned int*)(a2 + 68);
	if ((_DWORD)result == 1)
	{
		*(_DWORD*)(a2 + 68) = 2;
	}
	else if ((_DWORD)result == 4)
	{
		*(_DWORD*)(a2 + 68) = 3;
	}
	return result;
}

