#include "../winhttp.h"

//----- (00000001405DE9C0) ----------------------------------------------------
void __fastcall sub_1405DE9C0(__int64 a1, _QWORD* a2)
{
	_QWORD* v2; // rbx
	unsigned __int64 v4; // rsi
	int* v5; // rax
	__int64 v6; // rdx
	int* v7; // r15
	int* v8; // rax
	int* v9; // r12
	unsigned __int64 v10; // r13
	int v11; // ebp
	unsigned __int64 v12; // rdi
	_QWORD* v13; // rbx
	__int64 v14; // rax
	__int64 v15; // rdi
	unsigned __int64 v16; // rbp
	int* v17; // rbx
	unsigned __int64 v18; // r8
	__int64 v19; // r15
	int* v20; // rbx
	unsigned __int64 v21; // rdi
	int* v22; // rax
	__int64* v23; // rbx
	__int64 v24; // rdi
	unsigned __int64 v25; // rbp
	int* v26; // rax
	unsigned __int64 v27; // rsi
	int* v28; // rbx
	int* v29; // rax
	unsigned __int64 i; // rbp
	__int64 v31; // r13
	unsigned __int64 v32; // rdx
	__int64 v33; // r8
	__int64 v34; // rax
	int* v35; // rax
	int* v36; // rdi
	__int64 v37; // rdi
	unsigned __int64 v38; // [rsp+20h] [rbp-68h]
	__int64 v39[12]; // [rsp+28h] [rbp-60h] BYREF
	int* v41; // [rsp+A0h] [rbp+18h] BYREF
	unsigned __int64 v42; // [rsp+A8h] [rbp+20h]

	v2 = a2;
	v4 = 0i64;
	v5 = sub_14018DBC0(0i64, a2[1], 16i64);
	v6 = v2[1];
	v7 = 0i64;
	v42 = 0i64;
	if (v5)
		v7 = v5;
	v41 = v7;
	v8 = sub_14018DBC0(0i64, v6, 8i64);
	v9 = 0i64;
	if (v8)
		v9 = v8;
	v10 = 0i64;
	v38 = v2[1];
	if (v38)
	{
		do
		{
			v11 = *(_DWORD*)(*v2 + 4 * v10);
			LODWORD(v41) = v11;
			v12 = (*(__int64(__fastcall**)(int**))(a1 + 104))(&v41);
			v13 = *(_QWORD**)(*(_QWORD*)(a1 + 96) + 8 * (v12 % *(_QWORD*)(a1 + 88)));
			if (!v13)
				goto LABEL_10;
			while (v12 != *v13 || !(*(unsigned int(__fastcall**)(int**, _QWORD*))(a1 + 112))(&v41, v13 + 2))
			{
				v13 = (_QWORD*)v13[1];
				if (!v13)
					goto LABEL_10;
			}
			v23 = v13 + 3;
			if (v23 && (v24 = *v23) != 0)
			{
				v25 = v4 + 1;
				v26 = sub_14018DB00((__int64)v7, v4 + 1, 16i64);
				v27 = 4 * v4;
				*(_QWORD*)&v26[v27] = *(_QWORD*)(v24 + 184);
				v28 = v26;
				*(_QWORD*)&v26[v27 + 2] = *(_QWORD*)(v24 + 192);
				if (v7 != v26)
				{
					sub_1407DB590(v26, v7, v27 * 4);
					if (v7)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v7 - 2) + 8i64))(v7 - 4);
					v7 = v28;
				}
				v4 = v25;
			}
			else
			{
			LABEL_10:
				v14 = sub_1405E2000(a1, v11);
				v15 = v14;
				if (v14 && *(_QWORD*)(v14 + 112))
				{
					v16 = v42 + 1;
					v17 = sub_14018DB00((__int64)v9, v42 + 1, 8i64);
					v18 = 8 * v42;
					*(_QWORD*)&v17[2 * v42] = v15;
					if (v9 != v17)
					{
						sub_1407DB590(v17, v9, v18);
						if (v9)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v9 - 2) + 8i64))(v9 - 4);
						v9 = v17;
					}
					v42 = v16;
				}
			}
			v2 = a2;
			++v10;
		} while (v10 < v38);
		v41 = v7;
	}
	v19 = 0i64;
	v20 = 0i64;
	v21 = a2[1] - v4;
	if (v21)
	{
		v22 = sub_14018B280(8 * v21 + 16, 0);
		if (v22)
		{
			*((_QWORD*)v22 + 1) = v21;
			*(_QWORD*)v22 = off_140B55060;
		}
		v29 = v22 + 4;
		if (v29)
			v20 = v29;
	}
	for (i = 0i64; i < v42; ++i)
	{
		v31 = *(_QWORD*)&v9[2 * i];
		v32 = 0i64;
		v33 = **(_QWORD**)(v31 + 104);
		if (v4)
		{
			v34 = (__int64)v41;
			while (*(_DWORD*)v34 != *(_DWORD*)(v33 + 8) || *(_QWORD*)(v34 + 8) != *(_QWORD*)(v33 + 16))
			{
				++v32;
				v34 += 16i64;
				if (v32 >= v4)
					goto LABEL_37;
			}
		}
		else
		{
		LABEL_37:
			v35 = sub_14018DB00((__int64)v20, v19 + 1, 8i64);
			v36 = v35;
			*(_QWORD*)&v35[2 * v19] = *(_QWORD*)(v31 + 24);
			if (v20 != v35)
			{
				sub_1407DB590(v35, v20, 8 * v19);
				if (v20)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v20 - 2) + 8i64))(v20 - 4);
				v20 = v36;
			}
			++v19;
		}
	}
	v37 = (__int64)v41;
	v39[1] = (__int64)v41;
	v39[0] = (unsigned __int8)v4;
	v39[2] = (unsigned __int8)v19;
	v39[3] = (__int64)v20;
	sub_1403F4740(qword_140C65898, 0x3BFu, (__int64)v39);
	if (v20)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v20 - 2) + 8i64))(v20 - 4);
	if (v9)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v9 - 2) + 8i64))(v9 - 4);
	if (v37)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v37 - 16) + 8i64))(v37 - 16);
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;

