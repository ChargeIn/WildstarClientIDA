//----- (00000001408692F0) ----------------------------------------------------
__int64 __fastcall sub_1408692F0(__int64 a1, __int64 a2)
{
	unsigned int v3; // ebx
	unsigned int v5; // esi

	v3 = 1;
	if (*(_QWORD*)(a2 + 64))
		return 21i64;
	v5 = *(_DWORD*)(a2 + 24);
	if (sub_1408591D0((__int64*)(a1 + 168), v5))
		return 5i64;
	if (*(_DWORD*)(a1 + 24) == v5)
		return 23;
	return v3;
}

