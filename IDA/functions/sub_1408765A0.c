#include "../winhttp.h"

//----- (00000001408765A0) ----------------------------------------------------
__int64 __fastcall sub_1408765A0(_BYTE* a1, __int64 a2, int a3)
{
	__int64 result; // rax
	__int64 v7; // rdi
	char v8; // cl
	int v9; // r9d
	float* v10; // rcx
	char v11; // cl
	int v12; // [rsp+20h] [rbp-38h] BYREF
	_BYTE* v13; // [rsp+28h] [rbp-30h]
	__int64 v14; // [rsp+30h] [rbp-28h]
	int v15; // [rsp+38h] [rbp-20h]
	int v16; // [rsp+3Ch] [rbp-1Ch]
	int v17; // [rsp+40h] [rbp-18h]
	__int16 v18; // [rsp+44h] [rbp-14h]
	float v19; // [rsp+48h] [rbp-10h]
	char v20; // [rsp+4Ch] [rbp-Ch]

	result = sub_14085A9A0();
	v7 = result;
	if (result)
	{
		v8 = v20 ^ a1[100];
		v9 = a1[62] & 0x1F;
		v18 = 0;
		v14 = a2;
		v15 = a3;
		v17 = v9;
		v16 = 0;
		v20 ^= v8 & 1;
		v10 = (float*)(a1 + 88);
		if ((v20 & 1) != 0)
			v19 = sub_14086C2E0(v10);
		else
			LODWORD(v19) = (int)sub_14086C2E0(v10);
		v11 = 2 * a1[101];
		v12 = 4;
		v20 ^= (v20 ^ v11) & 2;
		v13 = a1 + 64;
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v7 + 136i64))(v7, &v12);
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 16i64))(v7);
	}
	return result;
}

