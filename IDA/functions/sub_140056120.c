#include "../winhttp.h"

//----- (0000000140056120) ----------------------------------------------------
void __fastcall sub_140056120(__int64 a1)
{
	unsigned __int64 v2; // rax
	char v3; // dl
	char v4; // dl
	char v5; // dl
	char v6; // dl
	__int64 v7; // rax
	int v8[64]; // [rsp+20h] [rbp-118h] BYREF

	v2 = 0i64;
	while (1)
	{
		v3 = byte_140A12170[2 * v2] ^ byte_140A12170[2 * v2 + 1];
		*((_BYTE*)v8 + v2) = v3;
		if (!v3)
			break;
		v4 = byte_140A12170[2 * v2 + 3] ^ byte_140A12170[2 * v2 + 2];
		*((_BYTE*)v8 + v2 + 1) = v4;
		if (!v4)
		{
			++v2;
			break;
		}
		v5 = byte_140A12170[2 * v2 + 5] ^ byte_140A12170[2 * v2 + 4];
		*((_BYTE*)v8 + v2 + 2) = v5;
		if (!v5)
		{
			v2 += 2i64;
			break;
		}
		v6 = byte_140A12170[2 * v2 + 7] ^ byte_140A12170[2 * v2 + 6];
		*((_BYTE*)v8 + v2 + 3) = v6;
		if (!v6)
		{
			v2 += 3i64;
			break;
		}
		v2 += 4i64;
		if (v2 >= 0x100)
			goto LABEL_14;
	}
	if (v2 < 0x100)
	{
		v7 = ((__int64(__fastcall*)(_QWORD, int*, _BYTE*))(*(_QWORD*)(a1 - 5968) + *(_QWORD*)(a1 - 5960)))(
			*(_QWORD*)(a1 - 5968),
			v8,
			byte_140A12170);
		if (v7)
			*(_QWORD*)(a1 - 5952) = v7 - *(_QWORD*)(a1 - 5968);
	}
LABEL_14:
	sub_1407E4830(v8, 0i64, 0x100ui64);
	if (*(_QWORD*)(a1 - 5952))
		sub_140056240(a1);
}
// 140A12170: using guessed type _BYTE byte_140A12170[320];

