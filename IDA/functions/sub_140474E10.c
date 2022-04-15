#include "../winhttp.h"

//----- (0000000140474E10) ----------------------------------------------------
__int64 __fastcall sub_140474E10(__int64 a1, __int64 a2)
{
	_QWORD* v3; // rcx
	void(__fastcall * **v5)(_QWORD); // rcx
	void(__fastcall * **v6)(_QWORD); // rcx

	v3 = (_QWORD*)(a1 + 8);
	*((_DWORD*)v3 - 2) = *(_DWORD*)a2;
	v3[1] = 0i64;
	v3[2] = 0i64;
	v3[3] = 0i64;
	sub_14001C1B0(v3, *(int**)(a2 + 16), *(_QWORD*)(a2 + 24));
	*(_DWORD*)(a1 + 40) = *(_DWORD*)(a2 + 40);
	*(_DWORD*)(a1 + 44) = *(_DWORD*)(a2 + 44);
	*(_DWORD*)(a1 + 48) = *(_DWORD*)(a2 + 48);
	*(_QWORD*)(a1 + 56) = *(_QWORD*)(a2 + 56);
	*(_QWORD*)(a1 + 64) = *(_QWORD*)(a2 + 64);
	*(_DWORD*)(a1 + 72) = *(_DWORD*)(a2 + 72);
	*(_DWORD*)(a1 + 76) = *(_DWORD*)(a2 + 76);
	*(_DWORD*)(a1 + 80) = *(_DWORD*)(a2 + 80);
	*(_DWORD*)(a1 + 84) = *(_DWORD*)(a2 + 84);
	*(_DWORD*)(a1 + 88) = *(_DWORD*)(a2 + 88);
	*(_OWORD*)(a1 + 96) = *(_OWORD*)(a2 + 96);
	v5 = *(void(__fastcall****)(_QWORD))(a1 + 56);
	if (v5)
		(**v5)(v5);
	v6 = *(void(__fastcall****)(_QWORD))(a1 + 64);
	if (v6)
		(**v6)(v6);
	return a1;
}

