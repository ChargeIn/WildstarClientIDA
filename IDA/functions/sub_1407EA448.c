#include "../winhttp.h"

//----- (00000001407EA448) ----------------------------------------------------
__int64 __fastcall sub_1407EA448(int a1, int a2, _OWORD* a3)
{
	__int64 v3; // rdi
	unsigned int v5; // eax
	int v6; // r9d
	__int64 result; // rax
	__int128 v8; // [rsp+40h] [rbp-20h] BYREF
	__int64 v9; // [rsp+50h] [rbp-10h]
	char v10; // [rsp+58h] [rbp-8h]
	WORD v11; // [rsp+80h] [rbp+20h] BYREF
	CHAR v12; // [rsp+98h] [rbp+38h] BYREF
	char v13; // [rsp+99h] [rbp+39h]
	char v14; // [rsp+9Ah] [rbp+3Ah]

	v3 = a1;
	sub_1407DE348((__int64)&v8, a3);
	if ((unsigned int)(v3 + 1) <= 0x100)
	{
		v5 = *(unsigned __int16*)(*(_QWORD*)(v8 + 264) + 2 * v3);
		goto LABEL_11;
	}
	if ((unsigned int)sub_1407DFE88(BYTE1(v3), &v8))
	{
		v12 = BYTE1(v3);
		v13 = v3;
		v14 = 0;
		v6 = 2;
	}
	else
	{
		v12 = v3;
		v13 = 0;
		v6 = 1;
	}
	if ((unsigned int)sub_1407E82FC(&v8, 1u, &v12, v6, &v11, *(_DWORD*)(v8 + 4), 1))
	{
		v5 = v11;
	LABEL_11:
		result = a2 & v5;
		if (v10)
			*(_DWORD*)(v9 + 200) &= ~2u;
		return result;
	}
	if (v10)
		*(_DWORD*)(v9 + 200) &= ~2u;
	return 0i64;
}

