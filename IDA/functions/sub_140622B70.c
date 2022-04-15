#include "../winhttp.h"

//----- (0000000140622B70) ----------------------------------------------------
void __fastcall sub_140622B70(__int64 a1)
{
	bool v2; // zf
	int v3; // ecx
	__int64 v4; // rcx

	if (!*(_DWORD*)(a1 + 676))
	{
		v2 = *(_QWORD*)(a1 + 1088) == 0i64;
		*(_DWORD*)(a1 + 676) = 1;
		if (!v2)
			sub_140195D70(a1 + 1072);
		if (*(_QWORD*)(a1 + 1160))
			sub_140195D70(a1 + 1144);
		if (*(_QWORD*)(a1 + 1232))
			sub_140195D70(a1 + 1216);
		if (*(_QWORD*)(a1 + 1304))
			sub_140195D70(a1 + 1288);
		if (*(_QWORD*)(a1 + 1376))
			sub_140195D70(a1 + 1360);
		if (*(_QWORD*)(a1 + 48) || *(_QWORD*)(a1 + 56) || *(_QWORD*)(a1 + 136) || *(_QWORD*)(a1 + 96))
			sub_14061A140(a1, *(_DWORD*)(a1 + 696) == 0);
		if (*(_DWORD*)(a1 + 968) == 3)
			sub_140620D70(a1);
		if (*(_QWORD*)(a1 + 1440) || *(_QWORD*)(a1 + 1448))
		{
			v3 = *(_DWORD*)(a1 + 1432);
			if (v3)
			{
				if (v3 == 1)
					(*(void(__fastcall**)(_QWORD, _QWORD))(a1 + 1448))(*(_QWORD*)(a1 + 1440), *(_QWORD*)(a1 + 1456));
			}
			else
			{
				(*(void(__fastcall**)(_QWORD))(a1 + 1448))(*(_QWORD*)(a1 + 1440));
			}
		}
		if (!*(_DWORD*)(a1 + 612) || !*(_DWORD*)(a1 + 696))
			*(_DWORD*)(a1 + 700) = 1;
		v4 = *(_QWORD*)(a1 + 1632);
		if (v4)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 72i64))(v4);
	}
}

