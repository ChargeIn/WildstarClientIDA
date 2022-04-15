#include "../winhttp.h"

//----- (0000000140508F90) ----------------------------------------------------
__int64 __fastcall sub_140508F90(__int64 a1, __int64 a2, _QWORD* a3, __int64 a4, __int64 a5)
{
	int* v9; // rbx
	_OWORD v11[6]; // [rsp+40h] [rbp-98h] BYREF

	sub_1400D45E0((__int64)v11, a1, a2, a5, 0i64);
	v9 = sub_14018B280(1648i64, 8u);
	if (v9)
	{
		sub_140182490((__int64)v9, a1, a2, a3, v11, a4);
		*(_QWORD*)v9 = off_140B6A440;
		sub_140001EB0((__int64)(v9 + 288));
		v9[410] = 0;
		*((_QWORD*)v9 + 54) |= 0x80000000000ui64;
		v9[411] = -1;
		if (!v9[304])
		{
			BinkSetMemory(byte_140001EA0, sub_140001E60);
			BinkSetSoundSystem(BinkOpenDirectSound, 0i64);
			v9[304] = 1;
		}
	}
	else
	{
		v9 = 0i64;
	}
	return (*(__int64(__fastcall**)(int*, __int64))(*(_QWORD*)v9 + 712i64))(v9, a5);
}
// 140959B70: using guessed type __int64 __fastcall BinkSetMemory(_QWORD, _QWORD);
// 140959B78: using guessed type __int64 __fastcall BinkSetSoundSystem(_QWORD, _QWORD);
// 140B6A440: using guessed type __int64 (__fastcall *off_140B6A440[25])();
// 140508F90: using guessed type _OWORD var_98[6];

