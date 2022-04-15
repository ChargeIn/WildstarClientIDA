//----- (0000000140466E60) ----------------------------------------------------
void __fastcall sub_140466E60(__int64 a1)
{
	bool v2; // zf
	__int64 v3; // rcx
	unsigned int v4; // edi

	v2 = *(_QWORD*)(a1 + 5624) == 0i64;
	v3 = *(_QWORD*)(a1 + 3264);
	v4 = !v2;
	if (v3)
	{
		if (v4 != (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v3 + 184i64))(v3))
		{
			sub_140470650(a1, 1, 1);
			(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 3264) + 176i64))(*(_QWORD*)(a1 + 3264), v4);
		}
	}
}

