//----- (0000000140628070) ----------------------------------------------------
__int64 __fastcall sub_140628070(__int64 a1, int a2)
{
	__int64 (**v2)(void); // rax
	__int64 result; // rax

	if (*(_DWORD*)(a1 + 244) != a2)
	{
		v2 = *(__int64 (***)(void))a1;
		*(_DWORD*)(a1 + 244) = a2;
		return (*v2)();
	}
	return result;
}

