//----- (000000014083B0C0) ----------------------------------------------------
__int64 __fastcall sub_14083B0C0(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	result = *(unsigned int*)(a2 + 68);
	if ((_DWORD)result == 3)
	{
		*(_DWORD*)(a2 + 68) = 4;
	}
	else if ((_DWORD)result == 2)
	{
		*(_DWORD*)(a2 + 68) = 1;
	}
	return result;
}

