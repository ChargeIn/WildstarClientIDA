#include "../winhttp.h"

//----- (000000014066E4C0) ----------------------------------------------------
void __fastcall sub_14066E4C0(__int64 a1)
{
	__int64 v1; // rsi
	__int64 v3; // rdi
	__int64 v4; // r15
	__int64 v5; // r12
	__int64 v6; // rax
	unsigned int v7; // ebx
	_DWORD* v8; // rax
	_DWORD* v9; // r14
	__int64 v10; // rbx
	__int64 v11; // rcx
	unsigned int v12; // esi
	unsigned int* v13; // rdi
	__int64 v14; // rbp
	unsigned int v15; // ebx
	_DWORD* v16; // rax
	unsigned int v17; // eax
	__int64 v18; // r8
	int* v19; // rax
	__int64 v20; // rcx
	__int64 v21; // [rsp+60h] [rbp+8h] BYREF
	int* v22; // [rsp+68h] [rbp+10h] BYREF
	int* v23; // [rsp+70h] [rbp+18h] BYREF

	v1 = a1 + 88;
	sub_140008410(a1 + 88);
	sub_140008410(a1 + 120);
	if (!*(_DWORD*)(a1 + 1340))
		return;
	v3 = a1 + 504;
	if (a1 == -504)
		return;
	v4 = 0i64;
	v5 = 8i64;
	do
	{
		v6 = 0i64;
		if (*(_DWORD*)(a1 + 1340))
			v6 = v3;
		v7 = *(_DWORD*)(v4 + v6 + 144);
		if (qword_140C63840)
		{
			v8 = (_DWORD*)qword_140C63840(off_140A6AEC0, v7, qword_140C63858);
		}
		else
		{
			if (dword_140C63F84 || (int)sub_14020D000() < 0)
				goto LABEL_36;
			v8 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64608 + 24i64))(
				qword_140C64608,
				v7);
		}
		v9 = v8;
		if (!v8)
			goto LABEL_36;
		v10 = 0i64;
		v11 = v1;
		if (*(_DWORD*)(a1 + 1340))
			v10 = v3;
		v12 = 0;
		v13 = v8 + 2;
		*sub_140032640(v11, v8) = *(_DWORD*)(v4 + v10 + 148);
		v14 = 12i64;
		do
		{
			v15 = *v13;
			if (!*v13)
				goto LABEL_26;
			if (qword_140C63840)
			{
				v16 = (_DWORD*)qword_140C63840(off_140A6AEF8, v15, qword_140C63858);
			}
			else
			{
				if (dword_140C655C0 || (int)sub_14020D440() < 0)
					goto LABEL_26;
				v16 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65560 + 24i64))(
					qword_140C65560,
					v15);
			}
			if (v16 && (v16[5] || v16[2]))
			{
				v17 = v16[1];
				if (v12 < v17)
					v12 = v17;
			}
		LABEL_26:
			++v13;
			--v14;
		} while (v14);
		v18 = *(_QWORD*)(a1 + 128);
		v19 = (int*)v18;
		v20 = *(_QWORD*)(v18 + 8);
		while (v20)
		{
			if (*(_DWORD*)(v20 + 32) < *v9)
			{
				v20 = *(_QWORD*)(v20 + 24);
			}
			else
			{
				v19 = (int*)v20;
				v20 = *(_QWORD*)(v20 + 16);
			}
		}
		if (v19 == (int*)v18 || *v9 < (unsigned int)v19[8])
		{
			v21 = (unsigned int)*v9;
			v22 = v19;
			sub_140032B30(a1 + 120, &v23, (__int64*)&v22, &v21);
			v19 = v23;
		}
		v19[9] = v12;
		v3 = a1 + 504;
		v1 = a1 + 88;
	LABEL_36:
		v4 += 8i64;
		--v5;
	} while (v5);
}
// 140A6AEC0: using guessed type wchar_t *off_140A6AEC0[2];
// 140A6AEF8: using guessed type wchar_t *off_140A6AEF8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63F84: using guessed type int dword_140C63F84;
// 140C64608: using guessed type __int64 qword_140C64608;
// 140C65560: using guessed type __int64 qword_140C65560;
// 140C655C0: using guessed type int dword_140C655C0;

