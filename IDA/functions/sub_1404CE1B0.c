#include "../winhttp.h"

//----- (00000001404CE1B0) ----------------------------------------------------
bool __fastcall sub_1404CE1B0(__int64 a1, __int64 a2)
{
	__int16* v3; // rbx
	__int64 v4; // rcx
	__int16* v5; // rax

	v3 = sub_14034BDD0(a1, *(_DWORD*)(a1 + 4));
	v5 = sub_14034BDD0(v4, *(_DWORD*)(a2 + 4));
	return (int)sub_14018E2C0((__int64)v3, (unsigned __int16*)v5) < 0;
}
// 1404CE1CB: variable 'v4' is possibly undefined

