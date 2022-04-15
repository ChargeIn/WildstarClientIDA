#include "../winhttp.h"

//----- (00000001407DC450) ----------------------------------------------------
LPVOID __fastcall sub_1407DC450(char* a1)
{
	unsigned __int64 v3; // rax
	unsigned __int64 v4; // rsi
	LPVOID v5; // rax
	LPVOID v6; // rbx

	if (!a1)
		return 0i64;
	v3 = sub_1407E6CBC(a1, 0x55ui64);
	v4 = v3;
	if (v3 >= 0x55)
		return 0i64;
	v5 = sub_1407E2C30(2 * v3 + 2);
	v6 = v5;
	if (!v5)
		return 0i64;
	if ((unsigned int)sub_1407E6D08((__int64)v5, v4 + 1, a1, v4 + 1))
	{
		sub_1407DC390();
		JUMPOUT(0x1407DC4D1i64);
	}
	return v6;
}
// 1407DC4CC: control flows out of bounds to 1407DC4D1

