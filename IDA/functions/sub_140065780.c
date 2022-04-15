//----- (0000000140065780) ----------------------------------------------------
__int64 __fastcall sub_140065780(__int64 a1)
{
	bool v2; // zf
	__int64 v3; // rdi
	__int64 v4; // rax
	const char* v6; // rax

	if (*(_DWORD*)(a1 + 16) != 285)
	{
		v6 = (const char*)sub_14005B130(*(_QWORD*)(a1 + 56), (unsigned __int64*)"'%s' expected", aName_39);
		sub_140062CF0(a1, v6, *(_DWORD*)(a1 + 16));
	}
	v2 = *(_DWORD*)(a1 + 32) == 287;
	v3 = *(_QWORD*)(a1 + 24);
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
	if (v2)
	{
		*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
	}
	else
	{
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
		v4 = *(_QWORD*)(a1 + 40);
		*(_DWORD*)(a1 + 32) = 287;
		*(_QWORD*)(a1 + 24) = v4;
	}
	return v3;
}

