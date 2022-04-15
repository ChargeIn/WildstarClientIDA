#include "../winhttp.h"

//----- (00000001405D8D60) ----------------------------------------------------
void __fastcall sub_1405D8D60(__int64 a1)
{
	__int64 v1; // r8
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // rax
	unsigned int* v6; // r9
	__int64(__fastcall * *v7)(); // [rsp+40h] [rbp+8h] BYREF

	v1 = qword_140C65898;
	*(_QWORD*)a1 = off_140B6E140;
	*(_QWORD*)(a1 + 336) = &off_140B6E190;
	v3 = *(_QWORD*)(v1 + 120);
	v4 = *(unsigned int*)(a1 + 92);
	if (v3 && *(_DWORD*)(v3 + 8) == (_DWORD)v4
		|| (v5 = *(_QWORD*)(v1 + 25744)) != 0 && *(_DWORD*)(v5 + 8) == (_DWORD)v4)
	{
		v6 = *(unsigned int**)(a1 + 176);
		v7 = off_140B6DF08;
		sub_1405DA6B0(
			v4,
			qword_140C65B70,
			v1,
			(__int64)v6,
			*v6,
			(void(__fastcall***)(_QWORD, _QWORD, __int64, __int64)) & v7);
	}
	*(_QWORD*)(a1 + 336) = off_140B68F20;
	sub_1405D6680(a1);
}
// 140B68F20: using guessed type __int64 (__fastcall *off_140B68F20[7])();
// 140B6DF08: using guessed type __int64 (__fastcall *off_140B6DF08[59])();
// 140B6E140: using guessed type __int64 (__fastcall *off_140B6E140[11])();
// 140B6E190: using guessed type __int64 (__fastcall *off_140B6E190)();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

