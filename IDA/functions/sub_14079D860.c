//----- (000000014079D860) ----------------------------------------------------
void __fastcall sub_14079D860(_DWORD* a1)
{
	__int64 v2; // rax

	if (!a1[6] && !(*(unsigned int(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 56i64))(a1))
	{
		v2 = *(_QWORD*)a1;
		a1[6] = 1;
		(*(void(__fastcall**)(_DWORD*, __int64))(v2 + 136))(a1, 1i64);
	}
}
