#include "../winhttp.h"

//----- (0000000140342DB0) ----------------------------------------------------
__int64 __fastcall sub_140342DB0(
	__int64 a1,
	unsigned int a2,
	int** a3,
	int a4,
	__int64 a5,
	__int64 a6,
	void(__fastcall*** a7)(_QWORD))
{
	float* v10; // rax
	float v11; // xmm3_4
	__int64 result; // rax
	void(__fastcall * **v13)(_QWORD); // rbx
	unsigned int v14; // edi
	int v15; // [rsp+20h] [rbp-38h]
	__int64 v16[3]; // [rsp+40h] [rbp-18h] BYREF

	if ((a4 & 0x100000) != 0)
	{
		v10 = *(float**)(a1 + 112);
		if (v10)
			v11 = *v10;
		else
			v11 = *(float*)(a1 + 124);
	}
	else
	{
		v11 = 0.0;
	}
	result = sub_140340210(qword_140C65858, v16, a2, v11);
	if ((int)result >= 0)
	{
		v15 = a4;
		v13 = (void(__fastcall***)(_QWORD))v16[0];
		v14 = sub_140346E50((int**)(a1 + 64), a3, a1, (void(__fastcall***)(_QWORD))v16[0], v15, a5, a6, a7);
		if (v13)
			(*v13)[1](v13);
		return v14;
	}
	return result;
}
// 140C65858: using guessed type __int64 qword_140C65858;
// 140342DB0: using guessed type __int64 var_18[3];

