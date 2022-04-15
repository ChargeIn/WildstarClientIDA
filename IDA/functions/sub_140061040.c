#include "../winhttp.h"

//----- (0000000140061040) ----------------------------------------------------
void __fastcall __noreturn sub_140061040(__int64 a1, int a2)
{
	__int64 v2; // rax
	__int64 v4; // rax

	v2 = *(_QWORD*)(a1 + 168);
	if (v2)
	{
		*(_DWORD*)(v2 + 272) = a2;
		sub_1407DF2C0(*(_QWORD*)(a1 + 168) + 16i64, 1i64);
		__debugbreak();
	}
	v4 = *(_QWORD*)(a1 + 32);
	*(_BYTE*)(a1 + 10) = a2;
	if (*(_QWORD*)(v4 + 152))
	{
		sub_140060FA0(a1, a2);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(a1 + 32) + 152i64))(a1);
	}
	sub_1407DBF40(1u);
	JUMPOUT(0x14006109Ei64);
}
// 140061099: control flows out of bounds to 14006109E

