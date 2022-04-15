//----- (0000000140065570) ----------------------------------------------------
void __fastcall __noreturn sub_140065570(__int64 a1, int a2)
{
	int v4; // eax
	__int64 v5; // rcx
	const char* v6; // rax
	const char* v7; // rax

	if (a2 >= 257)
	{
		v6 = off_140A124D0[a2 - 257];
	}
	else
	{
		v4 = sub_1407DE7F8(a2);
		v5 = *(_QWORD*)(a1 + 56);
		if (v4)
			v6 = (const char*)sub_14005B130(v5, (unsigned __int64*)"char(%d)", (unsigned int)a2);
		else
			v6 = (const char*)sub_14005B130(v5, (unsigned __int64*)"%c", (unsigned int)a2);
	}
	v7 = (const char*)sub_14005B130(*(_QWORD*)(a1 + 56), (unsigned __int64*)"'%s' expected", v6);
	sub_140062CF0(a1, v7, *(_DWORD*)(a1 + 16));
}
// 140A124D0: using guessed type char *off_140A124D0[31];

