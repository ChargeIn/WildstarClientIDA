#include "../winhttp.h"

//----- (00000001400D6950) ----------------------------------------------------
__int64 __fastcall sub_1400D6950(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rbp
	_DWORD* v4; // rsi
	_DWORD* v5; // rcx
	int v6; // eax
	_DWORD* v7; // rcx
	int v8; // eax
	unsigned __int64 v9; // rcx
	_DWORD* v10; // rax
	_DWORD* v11; // rdx
	unsigned __int64 v12; // r8
	unsigned int v13; // eax
	unsigned int v14; // ebx
	__int64 v15; // rax
	unsigned __int64 v16; // r8
	unsigned int v17; // eax
	bool v18; // al
	_DWORD* v19; // rdx
	__int64 v20; // rcx
	const char* v21; // r9
	const char* v22; // rax
	bool v23; // al
	_DWORD* v24; // rcx
	unsigned __int64 v25; // [rsp+38h] [rbp+10h] BYREF

	result = sub_1400D66A0(a1, 1u);
	v3 = result;
	if (result)
	{
		v4 = dword_140A12138;
		v5 = dword_140A12138;
		if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
			v5 = (_DWORD*)(a1[3] + 16i64);
		v6 = v5[2];
		if (v6 != 3 && (v6 != 4 || !sub_14005AC80((char*)(*(_QWORD*)v5 + 32i64), &v25)))
			goto LABEL_12;
		v7 = dword_140A12138;
		if ((unsigned __int64)(a1[3] + 32i64) < a1[2])
			v7 = (_DWORD*)(a1[3] + 32i64);
		v8 = v7[2];
		if (v8 != 3 && (v8 != 4 || !sub_14005AC80((char*)(*(_QWORD*)v7 + 32i64), &v25)))
		{
		LABEL_12:
			v9 = a1[2];
			v10 = (_DWORD*)(a1[3] + 16i64);
			if ((unsigned __int64)v10 >= v9)
				goto LABEL_24;
			if (v10 != dword_140A12138 && *(_DWORD*)(a1[3] + 24i64) == 5)
			{
				*(_DWORD*)(v9 + 8) = 3;
				v11 = dword_140A12138;
				*(_QWORD*)v9 = 0x3FF0000000000000i64;
				a1[2] += 16i64;
				v12 = a1[2];
				if (a1[3] + 16i64 < v12)
					v11 = (_DWORD*)(a1[3] + 16i64);
				sub_14005E8E0((__int64)a1, (__int64)v11, (int*)(v12 - 16), v12 - 16);
				v13 = sub_140056D60(a1, 0xFFFFFFFF);
				a1[2] -= 16i64;
				v14 = v13;
				v15 = a1[2];
				*(_QWORD*)v15 = 0x4000000000000000i64;
				*(_DWORD*)(v15 + 8) = 3;
				a1[2] += 16i64;
				v16 = a1[2];
				if (a1[3] + 16i64 < v16)
					v4 = (_DWORD*)(a1[3] + 16i64);
				sub_14005E8E0((__int64)a1, (__int64)v4, (int*)(v16 - 16), v16 - 16);
				v17 = sub_140056D60(a1, 0xFFFFFFFF);
				a1[2] -= 16i64;
				v25 = __PAIR64__(v17, v14);
				v18 = sub_140001D30(v3, (int*)&v25);
				v19 = (_DWORD*)a1[2];
				v19[2] = 1;
				*v19 = v18;
				goto LABEL_27;
			}
			if ((unsigned __int64)v10 >= v9 || v10 == dword_140A12138 || (v20 = *(int*)(a1[3] + 24i64), (_DWORD)v20 == -1))
				LABEL_24:
			v21 = aNoValue;
			else
				v21 = off_140A123B0[v20];
			v22 = (const char*)sub_140058780(
				(__int64)a1,
				(unsigned __int64*)"%s expected, got %s",
				"table or 2 numbers",
				v21);
			sub_140056570(a1, 2u, v22);
		}
		LODWORD(v25) = sub_140056D60(a1, 2u);
		HIDWORD(v25) = sub_140056D60(a1, 3u);
		v23 = sub_140001D30(v3, (int*)&v25);
		v24 = (_DWORD*)a1[2];
		v24[2] = 1;
		*v24 = v23;
	LABEL_27:
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A123B0: using guessed type char *off_140A123B0[11];

