#include "../winhttp.h"

//----- (00000001406449A0) ----------------------------------------------------
_QWORD* __fastcall sub_1406449A0(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // r14
	_QWORD* result; // rax
	_QWORD* v7; // rbx
	__int64* v8; // rdi
	unsigned int v9; // eax
	int v10; // eax
	__int64 v11; // r8
	unsigned int v12; // esi
	__int64 v13; // r8
	bool v14; // al
	__int64 v15; // rdx
	__int64 v16; // rdi
	__int64 v17; // rcx
	__int64 i; // rax
	__int64 v19; // rax
	int* v20; // rcx
	__int64 v21; // rax
	__int64 v22; // rax
	__int64 v23; // rax
	__int64 v24; // rax

	v3 = qword_140C65C28;
	result = *(_QWORD**)(qword_140C65C28 + 112);
	v7 = (_QWORD*)result[2];
	if (v7 != result)
	{
		while (1)
		{
			v8 = *(__int64**)(v7[5] + 40i64);
			v9 = *(_DWORD*)(*v8 + 12);
			if ((v9 & 2) == 0 && a3 == ((v9 >> 2) & 1))
			{
				v10 = sub_140644D30(*v8, *(_DWORD*)(*v8 + 8));
				if (v10 != 5 && v10 != 46)
				{
					v11 = *(unsigned int*)(*v8 + 52);
					if (!(_DWORD)v11
						|| (*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
							+ 24i64))(
								qword_140C659A0,
								*(_QWORD*)(qword_140C65898 + 120),
								v11,
								0i64,
								0i64,
								0))
					{
						v12 = *(_DWORD*)(*v8 + 8);
						if (v12)
							break;
					}
				}
			}
		LABEL_46:
			v24 = v7[3];
			if (v24)
			{
				v7 = (_QWORD*)v7[3];
				for (result = *(_QWORD**)(v24 + 16); result; result = (_QWORD*)result[2])
					v7 = result;
			}
			else
			{
				for (result = (_QWORD*)v7[1]; v7 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v7 = result;
				if ((_QWORD*)v7[3] != result)
					v7 = result;
			}
			if (v7 == *(_QWORD**)(v3 + 112))
				return result;
		}
		while (1)
		{
			v13 = *(_QWORD*)(a2 + 8);
			v14 = 1;
			v15 = *(_QWORD*)(v13 + 8);
			v16 = v13;
			while (v15)
			{
				v16 = v15;
				v14 = v12 < *(_DWORD*)(v15 + 32);
				if (v12 >= *(_DWORD*)(v15 + 32))
					v15 = *(_QWORD*)(v15 + 24);
				else
					v15 = *(_QWORD*)(v15 + 16);
			}
			v17 = v16;
			if (!v14)
				goto LABEL_25;
			if (v16 != *(_QWORD*)(v13 + 16))
				break;
		LABEL_26:
			if (v16 == v13 || v12 < *(_DWORD*)(v16 + 32))
			{
				v20 = sub_14018B280(40i64, 0);
				if (v20 != (int*)-32i64)
					v20[8] = v12;
				*(_QWORD*)(v16 + 16) = v20;
				v22 = *(_QWORD*)(a2 + 8);
				if (v16 == v22)
				{
					*(_QWORD*)(v22 + 8) = v20;
					*(_QWORD*)(*(_QWORD*)(a2 + 8) + 24i64) = v20;
				}
				else if (v16 == *(_QWORD*)(v22 + 16))
				{
					*(_QWORD*)(v22 + 16) = v20;
				}
			}
			else
			{
				v20 = sub_14018B280(40i64, 0);
				if (v20 != (int*)-32i64)
					v20[8] = v12;
				*(_QWORD*)(v16 + 24) = v20;
				v21 = *(_QWORD*)(a2 + 8);
				if (v16 == *(_QWORD*)(v21 + 24))
					*(_QWORD*)(v21 + 24) = v20;
			}
			*((_QWORD*)v20 + 1) = v16;
			*((_QWORD*)v20 + 2) = 0i64;
			*((_QWORD*)v20 + 3) = 0i64;
			sub_1400081C0((__int64)v20, (_QWORD*)(*(_QWORD*)(a2 + 8) + 8i64));
			++* (_QWORD*)(a2 + 16);
		LABEL_39:
			if (qword_140C63840)
			{
				v23 = qword_140C63840(off_140A69170, v12, qword_140C63858);
			}
			else
			{
				if (dword_140C638BC || (int)sub_1401E9680() < 0)
					goto LABEL_46;
				v23 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64768 + 24i64))(qword_140C64768, v12);
			}
			if (v23)
			{
				v12 = *(_DWORD*)(v23 + 12);
				if (v12)
					continue;
			}
			goto LABEL_46;
		}
		if (*(_BYTE*)v16 || *(_QWORD*)(*(_QWORD*)(v16 + 8) + 8i64) != v16)
		{
			v17 = *(_QWORD*)(v16 + 16);
			if (v17)
			{
				for (i = *(_QWORD*)(v17 + 24); i; i = *(_QWORD*)(i + 24))
					v17 = i;
			}
			else
			{
				v17 = *(_QWORD*)(v16 + 8);
				if (v16 == *(_QWORD*)(v17 + 16))
				{
					do
					{
						v19 = v17;
						v17 = *(_QWORD*)(v17 + 8);
					} while (v19 == *(_QWORD*)(v17 + 16));
				}
			}
		}
		else
		{
			v17 = *(_QWORD*)(v16 + 24);
		}
	LABEL_25:
		if (*(_DWORD*)(v17 + 32) >= v12)
			goto LABEL_39;
		goto LABEL_26;
	}
	return result;
}
// 140644B0E: conditional instruction was optimized away because rdx.8==0
// 140A69170: using guessed type wchar_t *off_140A69170[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C638BC: using guessed type int dword_140C638BC;
// 140C64768: using guessed type __int64 qword_140C64768;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65C28: using guessed type __int64 qword_140C65C28;

