#include "../winhttp.h"

//----- (00000001400656B0) ----------------------------------------------------
__int64 __fastcall sub_1400656B0(__int64 a1, int a2, int a3, int a4)
{
	bool v7; // zf
	__int64 result; // rax
	char* v9; // rbx
	char* v10; // rax
	const char* v11; // rax
	int v12; // [rsp+20h] [rbp-18h]

	if (*(_DWORD*)(a1 + 16) != a2)
	{
		if (a4 == *(_DWORD*)(a1 + 4))
			sub_140065570(a1, a2);
		v9 = sub_140062C80(a1, a3);
		v10 = sub_140062C80(a1, a2);
		v12 = a4;
		v11 = (const char*)sub_14005B130(
			*(_QWORD*)(a1 + 56),
			(unsigned __int64*)"'%s' expected (to close '%s' at line %d)",
			v10,
			v9,
			v12);
		sub_140062CF0(a1, v11, *(_DWORD*)(a1 + 16));
	}
	v7 = *(_DWORD*)(a1 + 32) == 287;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
	if (v7)
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

