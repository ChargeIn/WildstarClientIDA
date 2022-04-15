#include "../winhttp.h"

//----- (00000001400FCA40) ----------------------------------------------------
__int64 __fastcall sub_1400FCA40(__int64 a1, float* a2)
{
	_QWORD* v4; // rax
	__int64 v5; // r10
	__int64 v6; // rdx
	_QWORD* v7; // rax
	__int64 v8; // r10
	__int64 v9; // rdx
	__int64 v10; // rdi
	__int64 v11; // rax
	_DWORD* v12; // rcx
	__int64 v13; // rax
	int v14; // ecx
	__int64* v15; // rax
	double v16; // xmm0_8
	__int64 v17; // rax
	__int64 v19; // [rsp+20h] [rbp-18h] BYREF
	int v20; // [rsp+28h] [rbp-10h]
	__int64 v21; // [rsp+40h] [rbp+8h] BYREF

	v4 = sub_14005C3C0(
		*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 24) + 16i64) + 32i64) + 160i64),
		*(_DWORD*)(*(_QWORD*)(a1 + 24) + 8i64));
	v6 = *(_QWORD*)(v5 + 16);
	*(_QWORD*)v6 = *v4;
	*(_DWORD*)(v6 + 8) = *((_DWORD*)v4 + 2);
	*(_QWORD*)(v5 + 16) += 16i64;
	v7 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v9 = *(_QWORD*)(v8 + 16);
	*(_QWORD*)v9 = *v7;
	*(_DWORD*)(v9 + 8) = *((_DWORD*)v7 + 2);
	*(_QWORD*)(v8 + 16) += 16i64;
	v10 = *(_QWORD*)(a1 + 16);
	if ((unsigned int)sub_14005BA70(v10, *(_QWORD*)(*(_QWORD*)(v10 + 16) - 32i64), *(_QWORD*)(v10 + 16) - 16i64))
	{
		*(_QWORD*)(v10 + 16) += 16i64;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 16i64))(a1, 4294967294i64);
		v11 = *(_QWORD*)(a1 + 16);
		v12 = (_DWORD*)(*(_QWORD*)(v11 + 16) - 16i64);
		if (v12 != dword_140A12138 && v12[2] == 3)
		{
			v13 = *(_QWORD*)(v11 + 16);
			v14 = *(_DWORD*)(v13 - 8);
			v15 = (__int64*)(v13 - 16);
			if (v14 != 3)
			{
				if (v14 != 4 || !sub_14005AC80((char*)(*v15 + 32), (unsigned __int64*)&v21))
				{
					v16 = 0.0;
					goto LABEL_9;
				}
				v20 = 3;
				v15 = &v19;
				v19 = v21;
			}
			v16 = *(double*)v15;
		LABEL_9:
			v17 = *(_QWORD*)(a1 + 16);
			*a2 = v16;
			*(_QWORD*)(v17 + 16) -= 48i64;
			return 0i64;
		}
		*(_QWORD*)(v11 + 16) -= 48i64;
	}
	else
	{
		*(_QWORD*)(v10 + 16) -= 16i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	}
	return 2147500037i64;
}
// 1400FCA70: variable 'v5' is possibly undefined
// 1400FCA9C: variable 'v8' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];

