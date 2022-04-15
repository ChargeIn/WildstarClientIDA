//----- (00000001402CB720) ----------------------------------------------------
__int64 __fastcall sub_1402CB720(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rax
	unsigned int v4; // r8d
	unsigned int v5; // ecx

	v3 = *(_QWORD*)(a3 + 384);
	v4 = *(_DWORD*)(v3 + 4 * a1);
	v5 = *(_DWORD*)(v3 + 4 * a2);
	if (v4 >= v5)
		return v4 > v5;
	else
		return 0xFFFFFFFFi64;
}

