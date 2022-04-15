#include "../winhttp.h"

//----- (0000000140627BC0) ----------------------------------------------------
void __fastcall sub_140627BC0(_DWORD* a1, int a2)
{
	__int64 v3; // rax

	if (a1[47] != a2)
	{
		v3 = *(_QWORD*)a1;
		a1[47] = a2;
		if ((*(unsigned int (**)(void))(v3 + 64))())
		{
			(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)a1 + 8i64))(a1);
			(**(void(__fastcall***)(_DWORD*))a1)(a1);
		}
	}
}

