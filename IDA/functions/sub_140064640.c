//----- (0000000140064640) ----------------------------------------------------
__int64 __fastcall sub_140064640(__int64 a1)
{
	bool v1; // zf
	__int64 result; // rax

	v1 = *(_DWORD*)(a1 + 32) == 287;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
	if (v1)
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

