#include "../winhttp.h"

//----- (00000001406C2F10) ----------------------------------------------------
char __fastcall sub_1406C2F10(__int64 a1, __int64 a2, int a3)
{
	__int64 v6; // rcx
	_QWORD* v7; // rdi
	void(__fastcall * **v8)(_QWORD); // rcx

	if (a2)
	{
		v7 = (_QWORD*)(a1 + 1072);
		if (a1 != -1072)
		{
			if (*v7)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v7 + 8i64))(*v7);
				*v7 = 0i64;
			}
			*v7 = *(_QWORD*)(a2 + 120);
			v8 = *(void(__fastcall****)(_QWORD))(a2 + 120);
			if (v8)
				(**v8)(v8);
		}
		*(_BYTE*)(a1 + 1084) = 0;
	}
	else
	{
		v6 = *(_QWORD*)(a1 + 1072);
		if (v6)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
			*(_QWORD*)(a1 + 1072) = 0i64;
		}
		*(_BYTE*)(a1 + 1084) = 1;
	}
	*(_DWORD*)(a1 + 1080) = a3;
	return sub_1406C2FC0(a1, 0);
}

