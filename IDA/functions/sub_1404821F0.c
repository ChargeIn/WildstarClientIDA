//----- (00000001404821F0) ----------------------------------------------------
__int64 __fastcall sub_1404821F0(__int64 a1, int a2)
{
	__int64 result; // rax

	result = a2 != 0 ? 3 : 0;
	*(_DWORD*)(a1 + 84) = result;
	return result;
}

