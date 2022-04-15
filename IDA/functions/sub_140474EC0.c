#include "../winhttp.h"

//----- (0000000140474EC0) ----------------------------------------------------
__int64 __fastcall sub_140474EC0(__int64 a1, __int64 a2)
{
	void(__fastcall * **v4)(_QWORD); // rcx
	void(__fastcall * **v5)(_QWORD); // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx

	if (a1 != a2)
	{
		v4 = *(void(__fastcall****)(_QWORD))(a2 + 56);
		if (v4)
			(**v4)(v4);
		v5 = *(void(__fastcall****)(_QWORD))(a2 + 64);
		if (v5)
			(**v5)(v5);
		v6 = *(_QWORD*)(a1 + 56);
		if (v6)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
			*(_QWORD*)(a1 + 56) = 0i64;
		}
		v7 = *(_QWORD*)(a1 + 64);
		if (v7)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
			*(_QWORD*)(a1 + 64) = 0i64;
		}
		*(_DWORD*)a1 = *(_DWORD*)a2;
		if (a2 + 8 != a1 + 8)
			sub_14001C480(a1 + 8, *(int**)(a2 + 16), *(int**)(a2 + 24));
		*(_DWORD*)(a1 + 40) = *(_DWORD*)(a2 + 40);
		*(_DWORD*)(a1 + 44) = *(_DWORD*)(a2 + 44);
		*(_DWORD*)(a1 + 48) = *(_DWORD*)(a2 + 48);
		*(_QWORD*)(a1 + 56) = *(_QWORD*)(a2 + 56);
		*(_QWORD*)(a1 + 64) = *(_QWORD*)(a2 + 64);
		*(_DWORD*)(a1 + 72) = *(_DWORD*)(a2 + 72);
		*(_DWORD*)(a1 + 76) = *(_DWORD*)(a2 + 76);
		*(_DWORD*)(a1 + 84) = *(_DWORD*)(a2 + 84);
		*(_OWORD*)(a1 + 96) = *(_OWORD*)(a2 + 96);
		*(_DWORD*)(a1 + 88) = *(_DWORD*)(a2 + 88);
		*(_DWORD*)(a1 + 80) = *(_DWORD*)(a2 + 80);
	}
	return a1;
}

