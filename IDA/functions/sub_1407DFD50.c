#include "../winhttp.h"

//----- (00000001407DFD50) ----------------------------------------------------
__m128 __fastcall sub_1407DFD50(WCHAR* a1, unsigned __int16** a2, _OWORD* a3)
{
	unsigned __int16* v4; // rdi
	__int128 v6; // xmm6
	WCHAR i; // cx
	__int64 v8; // rax
	char v10[16]; // [rsp+20h] [rbp-58h] BYREF
	__int64 v11; // [rsp+30h] [rbp-48h]
	char v12; // [rsp+38h] [rbp-40h]
	char v13[24]; // [rsp+40h] [rbp-38h] BYREF

	v4 = a1;
	sub_1407DE348((__int64)v10, a3);
	if (a2)
		*a2 = v4;
	if (!a1)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		v6 = 0i64;
		goto LABEL_20;
	}
	for (i = *a1; (unsigned int)sub_1407ED1C8(i, 8); i = *v4)
		++v4;
	v8 = sub_1407ED27C((__int64)v13, v4, (__int64)v10);
	if (a2)
		*a2 = &v4[*(int*)(v8 + 4)];
	if ((*(_DWORD*)v8 & 0x240) == 0)
	{
		if ((*(_BYTE*)v8 & 0x81) != 0)
		{
			v6 = (unsigned __int64)qword_140C104A0;
			if (*v4 == 45)
			{
				*(double*)&v6 = -*(double*)&qword_140C104A0;
				*((double*)&v6 + 1) = -0.0;
			}
		}
		else if ((*(_DWORD*)v8 & 0x100) == 0 || (v6 = 0i64, *(double*)(v8 + 16) != 0.0))
		{
			v6 = *(unsigned __int64*)(v8 + 16);
			goto LABEL_20;
		}
		*(_DWORD*)sub_1407DE1B0() = 34;
		goto LABEL_20;
	}
	v6 = 0i64;
	if (a2)
		*a2 = a1;
LABEL_20:
	if (v12)
		*(_DWORD*)(v11 + 200) &= ~2u;
	return (__m128)v6;
}
// 140C104A0: using guessed type __int64 qword_140C104A0;
// 1407DFD50: using guessed type char var_38[24];

