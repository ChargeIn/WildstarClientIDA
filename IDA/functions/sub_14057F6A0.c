#include "../winhttp.h"

//----- (000000014057F6A0) ----------------------------------------------------
void __fastcall sub_14057F6A0(__int64 a1, __int64 a2, int a3)
{
	__int64 v6; // rax
	char v7; // [rsp+30h] [rbp+8h] BYREF

	if (a2)
	{
		*(_QWORD*)(a1 + 704) = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a2 + 48i64))(a2);
		v6 = *(_QWORD*)(*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)a2 + 32i64))(a2, &v7);
		*(_DWORD*)(a1 + 720) = a3;
		*(_QWORD*)(a1 + 712) = v6;
	}
	else
	{
		*(_QWORD*)(a1 + 704) = 0i64;
		*(_DWORD*)(a1 + 712) = 300;
		*(_DWORD*)(a1 + 716) = -1;
		*(_DWORD*)(a1 + 720) = a3;
	}
}

