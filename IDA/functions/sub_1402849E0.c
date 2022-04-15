#include "../winhttp.h"

//----- (00000001402849E0) ----------------------------------------------------
__int64 __fastcall sub_1402849E0(__int64 a1, __int64 a2)
{
	int v3; // ebx
	int* v4; // rax
	int* v5; // rsi
	__int64 v6; // rdx
	int* v7; // rcx
	bool v8; // zf
	__int64 v9; // rcx
	__int64 v10; // rcx
	int v11; // r8d
	int* v12; // rcx
	int v13; // eax
	int* v14; // rcx
	_OWORD* v15; // rcx
	_OWORD* v16; // rcx
	__int64 result; // rax
	unsigned int* v18; // rcx
	int v19; // [rsp+38h] [rbp+10h] BYREF

	v3 = a2;
	v19 = 0;
	v4 = sub_140288100(a1, a2, &v19);
	*v4 = v3;
	v5 = v4;
	*((_QWORD*)v4 + 1) = *(_QWORD*)(a1 + 224);
	if ((v3 & 1) != 0)
	{
		v6 = *(_QWORD*)(*(_QWORD*)(a1 + 224) + 16i64);
		v7 = v4 + 44;
		*((_OWORD*)v4 + 11) = *(_OWORD*)v6;
		*((_OWORD*)v4 + 12) = *(_OWORD*)(v6 + 16);
		*((_OWORD*)v4 + 13) = *(_OWORD*)(v6 + 32);
		*((_OWORD*)v4 + 14) = *(_OWORD*)(v6 + 48);
		*((_OWORD*)v4 + 15) = *(_OWORD*)(v6 + 64);
		*((_OWORD*)v4 + 16) = *(_OWORD*)(v6 + 80);
		*((_OWORD*)v4 + 17) = *(_OWORD*)(v6 + 96);
		*((_OWORD*)v4 + 18) = *(_OWORD*)(v6 + 112);
		v4[76] = *(_DWORD*)(v6 + 128);
	}
	else
	{
		v7 = *(int**)(*(_QWORD*)(a1 + 224) + 16i64);
	}
	v8 = (*(_BYTE*)v4 & 2) == 0;
	*((_QWORD*)v4 + 2) = v7;
	v9 = *(_QWORD*)(*(_QWORD*)(a1 + 224) + 24i64);
	if (v8)
	{
		*((_QWORD*)v4 + 3) = v9;
	}
	else
	{
		*((_OWORD*)v4 + 5) = *(_OWORD*)v9;
		*((_OWORD*)v4 + 6) = *(_OWORD*)(v9 + 16);
		*((_QWORD*)v4 + 14) = *(_QWORD*)(v9 + 32);
		*((_QWORD*)v4 + 15) = *(_QWORD*)(v9 + 40);
		v4[32] = *(_DWORD*)(v9 + 48);
		v4[33] = *(_DWORD*)(v9 + 52);
		v10 = *((_QWORD*)v4 + 15);
		*((_QWORD*)v4 + 14) += v10;
		sub_1402626B0((__int64*)(a1 + 328), v10 + *((_QWORD*)v4 + 14));
		sub_1407DB590(
			(int*)(*(_QWORD*)(a1 + 328) + 16i64 * *((_QWORD*)v5 + 14)),
			(int*)(*(_QWORD*)(a1 + 328) + 16i64 * *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 224) + 24i64) + 32i64)),
			16i64 * *((_QWORD*)v5 + 15));
		*((_QWORD*)v5 + 3) = v5 + 20;
	}
	v11 = *v5;
	v12 = *(int**)(*(_QWORD*)(a1 + 224) + 32i64);
	if ((*v5 & 4) != 0)
	{
		v5[36] = *v12;
		v5[37] = v12[1];
		v13 = v12[2];
		*((_QWORD*)v5 + 4) = v5 + 36;
		v5[38] = v13;
	}
	else
	{
		*((_QWORD*)v5 + 4) = v12;
	}
	v14 = *(int**)(*(_QWORD*)(a1 + 224) + 40i64);
	if ((v11 & 8) != 0)
	{
		v5[39] = *v14;
		*((_QWORD*)v5 + 5) = v5 + 39;
	}
	else
	{
		*((_QWORD*)v5 + 5) = v14;
	}
	v15 = *(_OWORD**)(*(_QWORD*)(a1 + 224) + 48i64);
	if ((v11 & 0x10) != 0)
	{
		*((_OWORD*)v5 + 20) = *v15;
		*((_QWORD*)v5 + 6) = v5 + 80;
	}
	else
	{
		*((_QWORD*)v5 + 6) = v15;
	}
	v16 = *(_OWORD**)(*(_QWORD*)(a1 + 224) + 56i64);
	if ((*(_BYTE*)v5 & 0x20) != 0)
	{
		*((_OWORD*)v5 + 21) = *v16;
		*((_QWORD*)v5 + 7) = v5 + 84;
	}
	else
	{
		*((_QWORD*)v5 + 7) = v16;
	}
	result = *(_QWORD*)(a1 + 224);
	v18 = *(unsigned int**)(result + 64);
	if ((*(_BYTE*)v5 & 0x40) != 0)
	{
		result = *v18;
		v5[40] = result;
		*((_QWORD*)v5 + 8) = v5 + 40;
	}
	else
	{
		*((_QWORD*)v5 + 8) = v18;
	}
	*(_QWORD*)(a1 + 224) = v5;
	return result;
}

