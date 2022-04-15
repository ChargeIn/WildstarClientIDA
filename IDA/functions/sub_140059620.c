#include "../winhttp.h"

//----- (0000000140059620) ----------------------------------------------------
__int64 __fastcall sub_140059620(__int64 a1)
{
	__int64 v1; // rsi
	__int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 32);
	sub_140059520(a1, a1);
	v3 = sub_14005C1B0(a1, 0, 2);
	*(_DWORD*)(a1 + 128) = 5;
	*(_QWORD*)(a1 + 120) = v3;
	v4 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(v4 + 160) = sub_14005C1B0(a1, 0, 2);
	*(_DWORD*)(v4 + 168) = 5;
	sub_140062450(a1, 32);
	sub_140062220(a1);
	sub_140062B50(a1);
	v5 = sub_140062650(a1, (unsigned __int64*)aNotEnoughMemor, 0x11ui64);
	*(_BYTE*)(v5 + 9) |= 0x20u;
	result = 4i64 * *(_QWORD*)(v1 + 120);
	*(_QWORD*)(v1 + 112) = result;
	return result;
}

