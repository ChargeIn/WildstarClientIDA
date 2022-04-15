#include "../winhttp.h"

//----- (00000001407E72D0) ----------------------------------------------------
_BOOL8 __fastcall sub_1407E72D0(char* a1)
{
	_QWORD* v2; // rax
	_QWORD* v3; // rbx
	__int64 v5; // rax
	WCHAR v6[120]; // [rsp+30h] [rbp-108h] BYREF

	v2 = sub_1407E3D94();
	v3 = v2 + 40;
	if (sub_1407E8688((__int64)a1, *((_DWORD*)v2 + 86) != 0 ? 3 : 4097, v6, 120))
	{
		if (!(unsigned int)sub_1407F0C28((WCHAR*)*v3, v6))
		{
			v5 = sub_1407E6CA0(a1);
			if ((unsigned int)sub_1407E6D08((__int64)(v3 + 75), 85i64, a1, v5 + 1))
			{
				sub_1407DC390();
				JUMPOUT(0x1407E73ACi64);
			}
			*((_DWORD*)v3 + 4) |= 4u;
		}
		return (v3[2] & 4) == 0;
	}
	else
	{
		*((_DWORD*)v3 + 4) = 0;
		return 1i64;
	}
}
// 1407E73A7: control flows out of bounds to 1407E73AC
// 1407E72D0: using guessed type WCHAR var_108[120];

