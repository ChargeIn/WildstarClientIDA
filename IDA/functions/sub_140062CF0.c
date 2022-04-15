//----- (0000000140062CF0) ----------------------------------------------------
void __fastcall __noreturn sub_140062CF0(__int64 a1, const char* a2, int a3)
{
	const char* v6; // rbx
	char* v7; // rax
	char v8[80]; // [rsp+30h] [rbp-78h] BYREF

	sub_14005B160(v8, (char*)(*(_QWORD*)(a1 + 80) + 32i64), 0x50ui64);
	v6 = (const char*)sub_14005B130(
		*(_QWORD*)(a1 + 56),
		(unsigned __int64*)"%s:%d: %s",
		v8,
		*(unsigned int*)(a1 + 4),
		a2);
	if (a3)
	{
		if ((unsigned int)(a3 - 284) > 2)
		{
			v7 = sub_140062C80(a1, a3);
		}
		else
		{
			sub_140062AA0(a1, 0);
			v7 = **(char***)(a1 + 72);
		}
		sub_14005B130(*(_QWORD*)(a1 + 56), (unsigned __int64*)"%s near '%s'", v6, v7);
	}
	sub_140061040(*(_QWORD*)(a1 + 56), 3);
}

