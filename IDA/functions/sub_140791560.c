//----- (0000000140791560) ----------------------------------------------------
__int64 __fastcall sub_140791560(_QWORD* a1)
{
	_DWORD* v1; // rax
	_QWORD* v2; // r14
	bool v3; // cf
	int v4; // r15d
	_DWORD* v5; // rcx
	__int64 v6; // rbx
	unsigned __int8* v7; // rdi
	_DWORD* v8; // rax
	__int64 v9; // rcx
	const char* v10; // r9
	const char* v11; // rax
	__int64 v12; // rax
	unsigned __int64 v13; // rdx
	_BYTE* v14; // r12
	_DWORD* v15; // rax
	int v16; // esi
	_DWORD* v17; // rax
	int v18; // r13d
	int v19; // r12d
	__int64 v20; // rsi
	__int64 v21; // rax
	unsigned __int8* v22; // rbx
	_BYTE* v23; // rcx
	unsigned __int64 v24; // r15
	_QWORD* v25; // rsi
	__int64 v26; // rbx
	__int64 v27; // rax
	int v28; // edx
	__int64 v29; // rcx
	__int64 result; // rax
	char* v31; // [rsp+20h] [rbp-E0h]
	__int64 v33; // [rsp+30h] [rbp-D0h]
	unsigned __int64* v34; // [rsp+40h] [rbp-C0h] BYREF
	int v35; // [rsp+48h] [rbp-B8h]
	_QWORD* v36; // [rsp+50h] [rbp-B0h]
	unsigned __int64 v37[64]; // [rsp+58h] [rbp-A8h] BYREF
	unsigned __int64 v38; // [rsp+258h] [rbp+158h] BYREF
	unsigned __int8* v39; // [rsp+260h] [rbp+160h] BYREF
	unsigned __int64 v40; // [rsp+268h] [rbp+168h]
	_QWORD* v41; // [rsp+270h] [rbp+170h]
	int v42; // [rsp+278h] [rbp+178h]

	v1 = (_DWORD*)a1[3];
	v2 = a1;
	v3 = (unsigned __int64)v1 < a1[2];
	v4 = 1;
	v5 = dword_140A12138;
	if (v3)
		v5 = v1;
	if (v5[2] != 4)
	{
		if (!(unsigned int)sub_14005E620((__int64)v2, (__int64)v5))
		{
		LABEL_10:
			v8 = (_DWORD*)v2[3];
			if ((unsigned __int64)v8 >= v2[2] || v8 == dword_140A12138 || (v9 = (int)v8[2], (_DWORD)v9 == -1))
				v10 = aNoValue;
			else
				v10 = off_140A123B0[v9];
			v11 = (const char*)sub_140058780((__int64)v2, (unsigned __int64*)"%s expected, got %s", aString_0, v10);
			sub_140056570(v2, 1u, v11);
		}
		if (*(_QWORD*)(v2[4] + 120i64) >= *(_QWORD*)(v2[4] + 112i64))
			sub_14005E2C0((__int64)v2);
		v5 = dword_140A12138;
		if (v2[3] < v2[2])
			v5 = (_DWORD*)v2[3];
	}
	v6 = *(_QWORD*)(*(_QWORD*)v5 + 16i64);
	v7 = (unsigned __int8*)(*(_QWORD*)v5 + 32i64);
	if (*(_QWORD*)v5 == -32i64)
		goto LABEL_10;
	v12 = sub_140056BB0(v2, 2u, 0i64);
	v13 = v2[2];
	v14 = (_BYTE*)v12;
	v31 = (char*)v12;
	v15 = (_DWORD*)v2[3];
	if ((unsigned __int64)(v15 + 8) >= v13 || v15 + 8 == dword_140A12138)
		v16 = -1;
	else
		v16 = v15[10];
	v17 = v15 + 12;
	v18 = v6 + 1;
	if ((unsigned __int64)v17 < v13 && v17 != dword_140A12138 && (int)v17[2] > 0)
		v18 = sub_140056D60(v2, 4u);
	if (*v14 == 94)
		v31 = v14 + 1;
	else
		v4 = 0;
	v19 = 0;
	if ((unsigned int)(v16 - 3) > 3)
		sub_140056570(v2, 3u, aStringFunction);
	v20 = v4;
	v36 = v2;
	v34 = v37;
	v35 = 0;
	v41 = v2;
	v39 = v7;
	v33 = v4;
	v40 = (unsigned __int64)&v7[v6];
	if (v18 > 0)
	{
		do
		{
			v42 = 0;
			v21 = sub_1407905D0((__int64)&v39, v7, v31);
			v22 = (unsigned __int8*)v21;
			if (v21 && (++v19, sub_1407913C0((__int64)&v39, (__int64)&v34, (char*)v7, v21), v22 > v7))
			{
				v7 = v22;
			}
			else
			{
				if ((unsigned __int64)v7 >= v40)
					break;
				v23 = v34;
				if (v34 >= &v38)
				{
					v24 = (char*)v34 - (char*)v37;
					if (v34 != v37)
					{
						v25 = v36;
						if (*(_QWORD*)(v36[4] + 120i64) >= *(_QWORD*)(v36[4] + 112i64))
							sub_14005E2C0((__int64)v36);
						v26 = v25[2];
						v27 = sub_140062650((__int64)v25, v37, v24);
						*(_DWORD*)(v26 + 8) = 4;
						*(_QWORD*)v26 = v27;
						v25[2] += 16i64;
						++v35;
						v34 = v37;
						sub_1400575B0((__int64)&v34);
						v23 = v34;
						v20 = v33;
					}
				}
				*v23 = *v7;
				v34 = (unsigned __int64*)((char*)v34 + 1);
				++v7;
			}
		} while (!v20 && v19 < v18);
		v2 = a1;
	}
	sub_1400576C0((__int64)&v34, (char*)v7, v40 - (_QWORD)v7);
	if (v34 == v37)
	{
		v28 = v35;
	}
	else
	{
		sub_140058710((__int64)v36, v37, (char*)v34 - (char*)v37);
		v28 = v35 + 1;
		v34 = v37;
		++v35;
	}
	sub_1400590E0(v36, v28);
	v29 = v2[2];
	result = 2i64;
	*(_DWORD*)(v29 + 8) = 3;
	*(double*)v29 = (double)v19;
	v2[2] += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];
// 140791560: using guessed type unsigned __int64 var_458[64];
// 140791560: using guessed type unsigned __int64 var_258;

