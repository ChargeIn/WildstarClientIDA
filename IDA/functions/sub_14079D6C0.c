//----- (000000014079D6C0) ----------------------------------------------------
__int64 __fastcall sub_14079D6C0(__int64 a1)
{
	__int64 result; // rax

	result = (unsigned int)(*(_DWORD*)(a1 + 40) + 1);
	*(_DWORD*)(a1 + 40) = result;
	return result;
}

