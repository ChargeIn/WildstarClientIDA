//----- (0000000140469A70) ----------------------------------------------------
__int64 __fastcall sub_140469A70(__int64 a1, int a2, unsigned int a3)
{
	__int64 v3; // rbx
	_DWORD* v6; // rcx
	__int64 v7; // rdi
	unsigned int v8; // eax

	v3 = *(_QWORD*)(a1 + 5576);
	if (!v3)
		return 0i64;
	while (1)
	{
		v6 = *(_DWORD**)(v3 + 56);
		if (v6[85] == a2)
		{
			v7 = *(_QWORD*)qword_140C65B70;
			v8 = (*(__int64(__fastcall**)(_DWORD*))(*(_QWORD*)v6 + 8i64))(v6);
			if ((*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD))(v7 + 56))(qword_140C65B70, v8, a3))
				break;
		}
		v3 = *(_QWORD*)(v3 + 24);
		if (!v3)
			return 0i64;
	}
	return 1i64;
}
// 140C65B70: using guessed type __int64 qword_140C65B70;

