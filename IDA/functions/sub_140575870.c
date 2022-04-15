//----- (0000000140575870) ----------------------------------------------------
__int64 __fastcall sub_140575870(__int64 a1)
{
	unsigned __int64 v1; // rax

	if (*(_DWORD*)(a1 + 288) == 4 && (v1 = *(int*)(a1 + 8), v1 < 4))
		return *(unsigned int*)(a1 + 4 * v1 + 32);
	else
		return 0i64;
}

