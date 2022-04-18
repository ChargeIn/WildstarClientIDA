#include "../winhttp.h"

//----- (000000014042D9B0) ----------------------------------------------------
_QWORD* __fastcall sub_14042D9B0(__int64 a1, __int64 a2)
{
	_QWORD* result; // rax
	__int64 v3; // r14
	_QWORD* v5; // rbx
	__int64 v7; // rcx
	_QWORD* v8; // rsi
	unsigned __int64 v9; // rax
	__int64 v10; // rdi
	__int64 v11; // rax
	unsigned __int64 v12; // rdi
	unsigned int v13; // ebp
	__int64 v14; // rcx
	__int64 v15; // rax
	__int64 v16; // rdx
	__int64 v17; // rax
	__int64 v18; // [rsp+20h] [rbp-58h]
	__int64(__fastcall * *v19)(); // [rsp+30h] [rbp-48h] BYREF
	unsigned int v20; // [rsp+38h] [rbp-40h]
	_QWORD* v21; // [rsp+40h] [rbp-38h]
	int v22; // [rsp+48h] [rbp-30h]

	result = *(_QWORD**)(a2 + 8);
	v3 = *(_QWORD*)(a1 + 400);
	v5 = (_QWORD*)result[2];
	if (v5 != result)
	{
		do
		{
			v7 = *(_QWORD*)(v3 + 32);
			v19 = off_140B569F0;
			v8 = (_QWORD*)v3;
			v9 = *(_QWORD*)(v7 + 112);
			v21 = (_QWORD*)v3;
			v22 = 1;
			if (*(_QWORD*)(v7 + 120) >= v9)
				sub_14005E2C0(v3);
			v10 = *(_QWORD*)(v3 + 16);
			v11 = sub_14005C1B0(v3, 0, 0);
			*(_DWORD*)(v10 + 8) = 5;
			*(_QWORD*)v10 = v11;
			*(_QWORD*)(v3 + 16) += 16i64;
			v12 = 0i64;
			v13 = sub_1400578C0(v3);
			v14 = v5[7] - v5[6];
			v20 = v13;
			if (v14 >> 2)
			{
				do
				{
					v15 = sub_140491C60(qword_140C65968, *(_DWORD*)(v5[6] + 4 * v12));
					if ((unsigned int)sub_140432AC0(v8, v15))
					{
						sub_1400FB470((__int64)&v19);
						v8 = v21;
						v21[2] -= 16i64;
					}
					++v12;
				} while (v12 < (__int64)(v5[7] - v5[6]) >> 2);
				v13 = v20;
			}
			LODWORD(v18) = *((_DWORD*)v5 + 8);
			Apollo_LUAEvent(a1, "PlayerPathAdd", byte_1409ED30C, v13, v18);
			if (v8)
				sub_1400579E0((__int64)v8, v16, v13);
			v17 = v5[3];
			if (v17)
			{
				v5 = (_QWORD*)v5[3];
				for (result = *(_QWORD**)(v17 + 16); result; result = (_QWORD*)result[2])
					v5 = result;
			}
			else
			{
				for (result = (_QWORD*)v5[1]; v5 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v5 = result;
				if ((_QWORD*)v5[3] != result)
					v5 = result;
			}
		} while (v5 != *(_QWORD**)(a2 + 8));
	}
	return result;
}
// 14042DAD9: variable 'v18' is possibly undefined
// 14042DAE9: variable 'v16' is possibly undefined
// 1409ED30C: using guessed type _BYTE byte_1409ED30C[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65968: using guessed type __int64 qword_140C65968;

