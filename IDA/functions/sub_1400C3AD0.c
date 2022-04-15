#include "../winhttp.h"

//----- (00000001400C3AD0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1400C3AD0(__int64 a1, _DWORD* a2)
{
	int v3; // ecx
	int v4; // ebx
	int* v5; // rax
	bool v6; // zf
	unsigned __int64 result; // rax
	int v8; // ecx
	int* v9; // rax
	int v10; // ecx
	int v11; // edx
	int v12; // eax
	_DWORD* v13; // rax
	int v14[4]; // [rsp+20h] [rbp-28h] BYREF
	int v15[6]; // [rsp+30h] [rbp-18h] BYREF
	int v16; // [rsp+50h] [rbp+8h] BYREF

	*(_DWORD*)(a1 + 336) = *a2;
	*(_DWORD*)(a1 + 340) = a2[1];
	*(_DWORD*)(a1 + 344) = a2[2];
	*(_DWORD*)(a1 + 348) = a2[3];
	*(_DWORD*)(a1 + 352) = *a2;
	*(_DWORD*)(a1 + 356) = a2[1];
	*(_DWORD*)(a1 + 360) = a2[2];
	*(_DWORD*)(a1 + 364) = a2[3];
	*(_DWORD*)(a1 + 368) = *(_DWORD*)(a1 + 336);
	*(_DWORD*)(a1 + 372) = *(_DWORD*)(a1 + 340);
	*(_DWORD*)(a1 + 376) = *(_DWORD*)(a1 + 344);
	v3 = *(_DWORD*)(a1 + 348);
	*(_DWORD*)(a1 + 380) = v3;
	if ((*(_BYTE*)(a1 + 412) & 4) != 0)
	{
		v4 = *(_DWORD*)(a1 + 364) - *(_DWORD*)(a1 + 356);
		*(_DWORD*)(a1 + 356) += (v4 - sub_1400C3930((_QWORD**)a1, &v16)[1]) / 2;
		v5 = sub_1400C3930((_QWORD**)a1, &v16);
		v6 = (*(_BYTE*)(a1 + 412) & 8) == 0;
		*(_DWORD*)(a1 + 364) = *(_DWORD*)(a1 + 356) + v5[1];
		if (v6)
		{
			v9 = sub_1400C3930((_QWORD**)a1, &v16);
			v10 = *(_DWORD*)(a1 + 384);
			result = (unsigned int)*v9;
			v11 = result + *(_DWORD*)(a1 + 352);
			*(_DWORD*)(a1 + 360) = v11;
			*(_DWORD*)(a1 + 368) = v11 + v10;
		}
		else
		{
			result = (unsigned __int64)sub_1400C3930((_QWORD**)a1, &v16);
			v8 = *(_DWORD*)(a1 + 360) - *(_DWORD*)result;
			*(_DWORD*)(a1 + 352) = v8;
			*(_DWORD*)(a1 + 376) = v8 - *(_DWORD*)(a1 + 384);
		}
	}
	else if (*(_BYTE*)(a1 + 413))
	{
		v12 = *(_DWORD*)(a1 + 368);
		v14[3] = v3;
		v14[0] = v12;
		v14[1] = *(_DWORD*)(a1 + 372);
		v14[2] = *(_DWORD*)(a1 + 376);
		v13 = sub_140109900(a1, v15, v14, 0xFFFFFFFF);
		*(_DWORD*)(a1 + 368) = *v13;
		*(_DWORD*)(a1 + 372) = v13[1];
		*(_DWORD*)(a1 + 376) = v13[2];
		result = (unsigned int)v13[3];
		*(_DWORD*)(a1 + 380) = result;
	}
	else
	{
		*(_DWORD*)(a1 + 368) += *(_DWORD*)(a1 + 384);
		*(_DWORD*)(a1 + 372) += *(_DWORD*)(a1 + 388);
		*(_DWORD*)(a1 + 376) -= *(_DWORD*)(a1 + 384);
		result = *(unsigned int*)(a1 + 388);
		*(_DWORD*)(a1 + 380) -= result;
	}
	return result;
}
// 1400C3AD0: using guessed type int var_18[6];

