#include "../winhttp.h"

//----- (00000001400680D0) ----------------------------------------------------
void __fastcall sub_1400680D0(__int64 a1, __int64 a2, int a3)
{
	_DWORD* v3; // rbp
	__int64 v5; // rbx
	bool v7; // zf
	__int64 v8; // rax
	__int64 v9; // rbp
	int v10; // edx
	int v11; // eax
	int v12; // ecx
	int v13; // ecx
	unsigned int v14; // edx
	__int64* v15; // rbx
	__int64 v16; // rcx
	__int64 v17; // r8
	const char* v18; // rax
	int v19; // eax
	int v20; // ebx
	__int64 v21; // rcx
	_DWORD* v22; // rdx
	int v23; // eax
	__int64 v24; // rcx
	unsigned int v25; // eax
	_DWORD* v26; // [rsp+30h] [rbp-68h]
	__int64 v27; // [rsp+38h] [rbp-60h] BYREF
	int v28; // [rsp+40h] [rbp-58h] BYREF
	int v29; // [rsp+48h] [rbp-50h]
	int v30; // [rsp+58h] [rbp-40h] BYREF
	int v31; // [rsp+60h] [rbp-38h]
	__int64 v32; // [rsp+68h] [rbp-30h]

	v3 = (_DWORD*)(a2 + 8);
	v5 = a2;
	v26 = (_DWORD*)(a2 + 8);
	if ((unsigned int)(*(_DWORD*)(a2 + 8) - 6) > 3)
		sub_140062CF0(a1, aSyntaxError, *(_DWORD*)(a1 + 16));
	if (*(_DWORD*)(a1 + 16) == 44)
	{
		v7 = *(_DWORD*)(a1 + 32) == 287;
		*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
		if (v7)
		{
			*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
		}
		else
		{
			*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
			v8 = *(_QWORD*)(a1 + 40);
			*(_DWORD*)(a1 + 32) = 287;
			*(_QWORD*)(a1 + 24) = v8;
		}
		v27 = v5;
		sub_140067740(a1, &v28);
		if (v28 == 6)
		{
			v9 = *(_QWORD*)(a1 + 48);
			v10 = v29;
			v11 = 0;
			v12 = *(_DWORD*)(v9 + 60);
			do
			{
				if (*(_DWORD*)(v5 + 8) == 9)
				{
					if (*(_DWORD*)(v5 + 16) == v10)
					{
						*(_DWORD*)(v5 + 16) = v12;
						v10 = v29;
						v11 = 1;
					}
					if (*(_DWORD*)(v5 + 20) == v10)
					{
						*(_DWORD*)(v5 + 20) = v12;
						v10 = v29;
						v11 = 1;
					}
				}
				v5 = *(_QWORD*)v5;
			} while (v5);
			if (v11)
			{
				sub_14006BBF0(v9, (*(_DWORD*)(v9 + 60) | (v10 << 17)) << 6, *(_DWORD*)(*(_QWORD*)(v9 + 24) + 8i64));
				v13 = *(_DWORD*)(v9 + 60) + 1;
				if (v13 > *(unsigned __int8*)(*(_QWORD*)v9 + 115i64))
				{
					if (v13 >= 250)
						sub_140062CF0(*(_QWORD*)(v9 + 24), aFunctionOrExpr, *(_DWORD*)(*(_QWORD*)(v9 + 24) + 16i64));
					*(_BYTE*)(*(_QWORD*)v9 + 115i64) = v13;
				}
				++* (_DWORD*)(v9 + 60);
			}
			v3 = v26;
		}
		v14 = 200 - *(unsigned __int16*)(*(_QWORD*)(a1 + 56) + 96i64);
		if (a3 > (int)v14)
		{
			v15 = *(__int64**)(a1 + 48);
			v16 = v15[4];
			v17 = *(unsigned int*)(*v15 + 96);
			if ((_DWORD)v17)
				v18 = (const char*)sub_14005B130(
					v16,
					(unsigned __int64*)"function at line %d has more than %d %s",
					v17,
					v14,
					aVariablesInAss);
			else
				v18 = (const char*)sub_14005B130(
					v16,
					(unsigned __int64*)"main function has more than %d %s",
					v14,
					aVariablesInAss);
			sub_140062CF0(v15[3], v18, 0);
		}
		sub_1400680D0(a1, &v27, (unsigned int)(a3 + 1));
	LABEL_27:
		v21 = *(_QWORD*)(a1 + 48);
		v22 = v3;
		v23 = *(_DWORD*)(v21 + 60);
		v32 = -1i64;
		v30 = 12;
		v31 = v23 - 1;
		goto LABEL_28;
	}
	sub_140065650(a1, 61);
	v19 = sub_1400673D0(a1, &v30);
	v20 = v19;
	if (v19 != a3)
	{
		sub_140065D50(a1, a3, v19, (unsigned int*)&v30);
		if (v20 > a3)
			*(_DWORD*)(*(_QWORD*)(a1 + 48) + 60i64) += a3 - v20;
		goto LABEL_27;
	}
	v24 = *(_QWORD*)(a1 + 48);
	if (v30 == 13)
	{
		v30 = 12;
		v25 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)v24 + 24i64) + 4i64 * v31);
		v21 = *(_QWORD*)(a1 + 48);
		v22 = v3;
		v31 = (unsigned __int8)(v25 >> 6);
	}
	else
	{
		if (v30 == 14)
		{
			*(_DWORD*)(*(_QWORD*)(*(_QWORD*)v24 + 24i64) + 4i64 * v31) = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)v24 + 24i64)
				+ 4i64 * v31) & 0x7FFFFF | 0x1000000;
			v30 = 11;
		}
		v21 = *(_QWORD*)(a1 + 48);
		v22 = v3;
	}
LABEL_28:
	sub_14006ACC0(v21, v22, &v30);
}

