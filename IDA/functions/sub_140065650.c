//----- (0000000140065650) ----------------------------------------------------
__int64 __fastcall sub_140065650(__int64 a1, int a2)
{
	bool v3; // zf
	__int64 result; // rax

	if (*(_DWORD*)(a1 + 16) != a2)
		sub_140065570(a1, a2);
	v3 = *(_DWORD*)(a1 + 32) == 287;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
	if (v3)
	{
		result = sub_140063BB0(a1, (__int64*)(a1 + 24));
		*(_DWORD*)(a1 + 16) = result;
	}
	else
	{
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
		result = *(_QWORD*)(a1 + 40);
		*(_DWORD*)(a1 + 32) = 287;
		*(_QWORD*)(a1 + 24) = result;
	}
	return result;
}

