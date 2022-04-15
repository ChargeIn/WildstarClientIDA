#include "../winhttp.h"

//----- (00000001406247E0) ----------------------------------------------------
void __fastcall sub_1406247E0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, __int64 a6)
{
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rdi
	__int64 v9; // rbx

	if (!a4)
	{
		if (*(_QWORD*)(a6 + 1304))
			sub_140195D70(a6 + 1288);
		v6 = *(_QWORD*)(a6 + 48);
		if (!v6 || !(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 408i64))(v6, 2018i64))
		{
			v7 = *(_QWORD*)(a6 + 96);
			if (v7)
			{
				v8 = *(_QWORD*)(a6 + 128);
				v9 = (*(__int64 (**)(void))(*(_QWORD*)v7 + 960i64))();
				if (v9 == (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 328i64))(v8))
					(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a6 + 96) + 936i64))(*(_QWORD*)(a6 + 96));
			}
			*(_DWORD*)(a6 + 704) = 1;
			sub_140622B70(a6);
		}
	}
}

