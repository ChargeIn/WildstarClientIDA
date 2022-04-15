#include "../winhttp.h"

//----- (000000014005F210) ----------------------------------------------------
__int64 __fastcall sub_14005F210(__int64 a1, int a2, int a3)
{
	__int64 v4; // rcx
	int v5; // edi
	__int64 v6; // r12
	__int64 v7; // rsi
	unsigned __int64 v8; // rbx
	__int64 result; // rax
	int v10; // r15d
	__int64 v11; // r14
	_DWORD* v12; // rdi
	unsigned __int64 v13; // rbp
	__int64 v14; // rdi
	unsigned __int64 v15; // r8
	unsigned __int64* v16; // r15
	unsigned __int64 v17; // rbp
	__int64 v18; // r14
	__int64 v19; // rdi
	unsigned __int64 v20; // rbx
	__int64 v21; // rsi
	__int64 v22; // rax
	__int64 v23; // r11
	_DWORD* v24; // r10
	__int64 v25; // rsi
	__int64 v26; // rdx
	__int64 v27; // r9
	_DWORD* v28; // r8
	int v29; // eax
	__int64 v30; // rdx
	__int64 v31; // r9
	__int64 v32; // [rsp+70h] [rbp+8h]
	int v33; // [rsp+78h] [rbp+10h]
	int v34; // [rsp+80h] [rbp+18h]

	v33 = a2;
	v4 = a3;
	v32 = a3;
	do
	{
		v5 = 2;
		v6 = 2i64;
		v7 = *(_QWORD*)(a1 + 24) + 16 * (v4 + 1);
		if ((unsigned int)(*(_DWORD*)(v7 - 24) - 3) <= 1)
		{
			if (*(_DWORD*)(v7 - 8) == 4)
				goto LABEL_6;
			if ((unsigned int)sub_14005E620(a1, v7 - 16))
			{
				a2 = v33;
				v4 = v32;
			LABEL_6:
				v8 = *(_QWORD*)(*(_QWORD*)(v7 - 16) + 16i64);
				if (v8)
				{
					v10 = 1;
					v11 = a2;
					v34 = 1;
					v6 = 1i64;
					if (a2 > 1i64)
					{
						v12 = (_DWORD*)(v7 - 32);
						do
						{
							if (v12[2] != 4 && !(unsigned int)sub_14005E620(a1, v7 - 16 * (v10 + 1i64)))
								break;
							v13 = *(_QWORD*)(*(_QWORD*)v12 + 16i64);
							if (v13 >= -3i64 - v8)
								sub_14005ABE0(a1, aStringLengthOv);
							++v6;
							v8 += v13;
							++v10;
							v12 -= 4;
						} while (v6 < v11);
						v34 = v10;
					}
					v14 = *(_QWORD*)(a1 + 32);
					v15 = *(_QWORD*)(v14 + 104);
					if (v8 > v15)
					{
						if (v8 < 0x20)
							v8 = 32i64;
						if (v8 + 1 > 0xFFFFFFFFFFFFFFFDui64)
							sub_14005ABE0(a1, aMemoryAllocati);
						*(_QWORD*)(v14 + 88) = sub_140064780(a1, *(_QWORD*)(v14 + 88), v15, v8);
						*(_QWORD*)(v14 + 104) = v8;
					}
					v16 = *(unsigned __int64**)(v14 + 88);
					v17 = 0i64;
					v18 = v6;
					if (v6 > 0)
					{
						v19 = v7 - 16 * v6;
						do
						{
							v20 = *(_QWORD*)(*(_QWORD*)v19 + 16i64);
							sub_1407DB590((int*)((char*)v16 + v17), (int*)(*(_QWORD*)v19 + 32i64), v20);
							--v18;
							v17 += v20;
							v19 += 16i64;
						} while (v18 > 0);
					}
					v21 = v7 - 16 * v6;
					v22 = sub_140062650(a1, v16, v17);
					v5 = v34;
					a2 = v33;
					v4 = v32;
					*(_DWORD*)(v21 + 8) = 4;
					*(_QWORD*)v21 = v22;
				}
				else if (*(_DWORD*)(v7 - 24) != 4)
				{
					sub_14005E620(a1, v7 - 32);
					a2 = v33;
					v4 = v32;
				}
				goto LABEL_9;
			}
		}
		v23 = *(int*)(v7 - 24);
		v24 = (_DWORD*)(v7 - 16);
		v25 = v7 - 32;
		if ((_DWORD)v23 == 5 || (_DWORD)v23 == 7)
			v26 = *(_QWORD*)(*(_QWORD*)v25 + 16i64);
		else
			v26 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8 * v23 + 224);
		if (v26)
		{
			v27 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 416i64);
			v28 = (_DWORD*)(*(_QWORD*)(v26 + 32)
				+ 40 * (*(int*)(v27 + 12) & (unsigned __int64)(int)((1i64 << *(_BYTE*)(v26 + 11)) - 1)));
			while (v28[6] != 4 || *((_QWORD*)v28 + 2) != v27)
			{
				v28 = (_DWORD*)*((_QWORD*)v28 + 4);
				if (!v28)
					goto LABEL_38;
			}
		}
		else
		{
		LABEL_38:
			v28 = dword_140A12138;
		}
		if (!v28[2])
		{
			v29 = v24[2];
			if (v29 == 5 || v29 == 7)
				v30 = *(_QWORD*)(*(_QWORD*)v24 + 16i64);
			else
				v30 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 8i64 * (int)v24[2] + 224);
			if (v30)
			{
				v31 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 416i64);
				v28 = (_DWORD*)(*(_QWORD*)(v30 + 32)
					+ 40 * (*(int*)(v31 + 12) & (unsigned __int64)(int)((1i64 << *(_BYTE*)(v30 + 11)) - 1)));
				while (v28[6] != 4 || *((_QWORD*)v28 + 2) != v31)
				{
					v28 = (_DWORD*)*((_QWORD*)v28 + 4);
					if (!v28)
						goto LABEL_49;
				}
			}
			else
			{
			LABEL_49:
				v28 = dword_140A12138;
			}
			if (!v28[2])
			{
				if ((unsigned int)(v23 - 3) <= 1)
					v25 = (__int64)v24;
				sub_14005A950(a1, v25, aConcatenate);
			}
		}
		sub_14005E780(a1, v25, (__int64)v28, v25, (__int64)v24);
		a2 = v33;
		v4 = v32;
	LABEL_9:
		a2 += 1 - v5;
		result = 1 - v6;
		v33 = a2;
		v4 += 1 - v6;
		v32 = v4;
	} while (a2 > 1);
	return result;
}
// 14005ABE0: using guessed type void __noreturn sub_14005ABE0(_QWORD, const char *, ...);
// 140A12138: using guessed type _DWORD dword_140A12138[4];

