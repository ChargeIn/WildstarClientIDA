#include "../winhttp.h"

//----- (0000000140510C50) ----------------------------------------------------
__int64 __fastcall sub_140510C50(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4)
{
	__int64 v6; // rbx
	__int64 v7; // rax
	void* v8; // rax
	__int64 result; // rax
	__int64 v10; // rcx
	int v11; // eax
	__int64 v12; // rax
	int v13; // ecx
	__int64* v14; // rax
	int v15; // ebx
	__int64 v16; // rax
	int v17; // ecx
	__int64* v18; // rax
	unsigned __int64 v19; // [rsp+20h] [rbp-48h] BYREF
	__int64 v20; // [rsp+28h] [rbp-40h] BYREF
	int v21; // [rsp+30h] [rbp-38h]
	__int64 v22; // [rsp+38h] [rbp-30h] BYREF
	int v23; // [rsp+40h] [rbp-28h]
	__int64 v24; // [rsp+70h] [rbp+8h] BYREF
	__int64 v25; // [rsp+80h] [rbp+18h] BYREF

	v25 = a3;
	*a4 = 0i64;
	a4[1] = 0i64;
	a4[2] = 0i64;
	a4[3] = 0i64;
	a4[4] = 0i64;
	a4[5] = 0i64;
	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v6 = *(_QWORD*)(a1 + 16);
	v7 = sub_140062650(a1, (unsigned __int64*)"format", 6ui64);
	*(_DWORD*)(v6 + 8) = 4;
	*(_QWORD*)v6 = v7;
	*(_QWORD*)(a1 + 16) += 16i64;
	v8 = sub_1400580E0(a1, -2);
	sub_14005E8E0(a1, (__int64)v8, (int*)(*(_QWORD*)(a1 + 16) - 16i64), *(_QWORD*)(a1 + 16) - 16i64);
	result = *(_QWORD*)(a1 + 16);
	if ((_DWORD*)(result - 16) != dword_140A12138 && *(_DWORD*)(result - 16 + 8) == 5)
	{
		*(_DWORD*)(result + 8) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
		while (1)
		{
			result = sub_14005BA70(a1, *(_QWORD*)(*(_QWORD*)(a1 + 16) - 32i64), *(_QWORD*)(a1 + 16) - 16i64);
			if (!(_DWORD)result)
			{
				*(_QWORD*)(a1 + 16) -= 16i64;
				break;
			}
			*(_QWORD*)(a1 + 16) += 16i64;
			v10 = *(_QWORD*)(a1 + 16);
			v11 = *(_DWORD*)(v10 - 24);
			if (v11 != 3 && (v11 != 4 || !sub_14005AC80((char*)(*(_QWORD*)(v10 - 32) + 32i64), &v19)))
				goto LABEL_20;
			v12 = *(_QWORD*)(a1 + 16);
			v13 = *(_DWORD*)(v12 - 24);
			v14 = (__int64*)(v12 - 32);
			if (v13 == 3)
				goto LABEL_14;
			if (v13 == 4 && sub_14005AC80((char*)(*v14 + 32), (unsigned __int64*)&v25))
			{
				v21 = 3;
				v14 = &v20;
				v20 = v25;
			LABEL_14:
				v15 = (int)*(double*)v14;
				if ((unsigned int)(v15 - 1) > 0xB)
					goto LABEL_20;
				v16 = *(_QWORD*)(a1 + 16);
				v17 = *(_DWORD*)(v16 - 8);
				v18 = (__int64*)(v16 - 16);
				if (v17 == 3)
					goto LABEL_19;
				if (v17 == 4 && sub_14005AC80((char*)(*v18 + 32), (unsigned __int64*)&v24))
				{
					v23 = 3;
					v18 = &v22;
					v22 = v24;
				LABEL_19:
					*((_DWORD*)a4 + v15 - 1) = (int)*(double*)v18;
					goto LABEL_20;
				}
				*((_DWORD*)a4 + v15 - 1) = 0;
				*(_QWORD*)(a1 + 16) -= 16i64;
			}
			else
			{
			LABEL_20:
				*(_QWORD*)(a1 + 16) -= 16i64;
			}
		}
	}
	*(_QWORD*)(a1 + 16) -= 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

