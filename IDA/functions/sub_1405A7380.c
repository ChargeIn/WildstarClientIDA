#include "../winhttp.h"

//----- (00000001405A7380) ----------------------------------------------------
_QWORD* __fastcall sub_1405A7380(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // r13
	_QWORD* result; // rax
	_QWORD* v6; // rbx
	unsigned int* v7; // r12
	unsigned int v8; // r9d
	__int64 v9; // rax
	__int64 v10; // rcx
	__int64 v11; // rdx
	__int64* v12; // rax
	__int64 v13; // rax
	_DWORD* v14; // rax
	__int64 v15; // rax
	__int64 v16; // rbp
	__int64 v17; // rax
	unsigned __int64 v18; // rcx
	_DWORD* v19; // rax
	signed int v20; // edi
	unsigned int v21; // esi
	int v22; // edx
	int v23; // edx
	int v24; // edx
	int v25; // eax
	__int64 v26; // rdi
	__int64 v27; // rax
	int v28; // [rsp+20h] [rbp-58h] BYREF
	__int64 v29; // [rsp+28h] [rbp-50h]
	void(__fastcall * v30)(__int64, __int64); // [rsp+30h] [rbp-48h]
	__int64 v31; // [rsp+38h] [rbp-40h]
	__int64 v32; // [rsp+80h] [rbp+8h] BYREF
	__int64 v33; // [rsp+90h] [rbp+18h]
	__int64 v34; // [rsp+98h] [rbp+20h] BYREF

	v33 = a3;
	v32 = a1;
	v3 = qword_140C65898;
	result = *(_QWORD**)(qword_140C65898 + 28064);
	v6 = (_QWORD*)result[2];
	if (v6 != result)
	{
		while (1)
		{
			v7 = (unsigned int*)v6[5];
			if (!v7)
				goto LABEL_47;
			v8 = sub_1403BAD30(v3, *v7, *(_BYTE*)(v3 + 28140));
			v9 = *(_QWORD*)(qword_140C65B70 + 1464);
			v10 = *(_QWORD*)(v9 + 8);
			v11 = v9;
			while (v10)
			{
				if (*(_DWORD*)(v10 + 32) < v8)
				{
					v10 = *(_QWORD*)(v10 + 24);
				}
				else
				{
					v11 = v10;
					v10 = *(_QWORD*)(v10 + 16);
				}
			}
			if (v11 == v9 || v8 < *(_DWORD*)(v11 + 32))
			{
				v34 = *(_QWORD*)(qword_140C65B70 + 1464);
				v12 = &v34;
			}
			else
			{
				v32 = v11;
				v12 = &v32;
			}
			v13 = *v12;
			if (v13 == *(_QWORD*)(qword_140C65B70 + 1464))
				goto LABEL_47;
			v14 = (_DWORD*)(v13 + 36);
			if (!v14)
				goto LABEL_47;
			if (v7[1] >= *v14)
				goto LABEL_47;
			if (!*((_QWORD*)v7 + 3))
				goto LABEL_47;
			v15 = sub_1403ACD90(qword_140C65B70, v8, *(_QWORD*)(v3 + 120));
			v16 = v15;
			if (!v15)
				goto LABEL_47;
			v17 = *(_QWORD*)(v15 + 56);
			if (!v17)
				goto LABEL_47;
			if (*(_DWORD*)a2)
				break;
			if (*(_DWORD*)(*(_QWORD*)(v16 + 112) + 4i64) == *(_DWORD*)(a2 + 4))
				goto LABEL_31;
		LABEL_47:
			v27 = v6[3];
			if (v27)
			{
				v6 = (_QWORD*)v6[3];
				for (result = *(_QWORD**)(v27 + 16); result; result = (_QWORD*)result[2])
					v6 = result;
			}
			else
			{
				for (result = (_QWORD*)v6[1]; v6 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v6 = result;
				if ((_QWORD*)v6[3] != result)
					v6 = result;
			}
			if (v6 == *(_QWORD**)(v3 + 28064))
				return result;
		}
		switch (*(_DWORD*)a2)
		{
		case 1:
			if (**(_DWORD**)(v16 + 112) != *(_DWORD*)(a2 + 4))
				goto LABEL_47;
			break;
		case 2:
			if (!(*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65B70 + 56i64))(
				qword_140C65B70,
				**(unsigned int**)(v16 + 112),
				*(unsigned int*)(a2 + 4)))
				goto LABEL_47;
			break;
		case 3:
			v18 = 0i64;
			v19 = (_DWORD*)(v17 + 4);
			while (*v19 != *(_DWORD*)(a2 + 4))
			{
				++v18;
				++v19;
				if (v18 >= 3)
					goto LABEL_47;
			}
			break;
		}
	LABEL_31:
		v20 = sub_140195F70((__int64)(v7 + 2));
		sub_140195D70((__int64)(v7 + 2));
		v21 = v20;
		if (*(_DWORD*)(v33 + 188) || (unsigned int)sub_1404823A0(v33))
		{
			v25 = sub_14046A890(*(_QWORD*)(v3 + 120), v16, v20);
		}
		else
		{
			v22 = *(_DWORD*)(a2 + 8);
			if (!v22)
			{
				v21 = (int)(float)((float)v20 * *(float*)(a2 + 12));
				if (v21 > v20)
					v21 = v20;
				goto LABEL_46;
			}
			v23 = v22 - 1;
			if (!v23)
			{
				v21 = (int)(float)((float)v20 * *(float*)(a2 + 12));
				goto LABEL_46;
			}
			v24 = v23 - 1;
			if (v24)
			{
				if (v24 == 1)
					v21 = (int)*(float*)(a2 + 12);
				goto LABEL_46;
			}
			v25 = v20 + (int)*(float*)(a2 + 12);
			if (v25 < 0)
			{
				v21 = 0;
			LABEL_46:
				v26 = *v7;
				v28 = 1;
				v29 = sub_14001C280(v3);
				v31 = v26;
				v30 = sub_1405A7090;
				sub_140195960((__int64)(v7 + 2), v21, (__int64)&v28, 4);
				goto LABEL_47;
			}
		}
		v21 = v25;
		goto LABEL_46;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

