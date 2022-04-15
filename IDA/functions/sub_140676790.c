#include "../winhttp.h"

//----- (0000000140676790) ----------------------------------------------------
void __fastcall sub_140676790(__int64 a1, __int64 a2, unsigned int a3)
{
	__int64 v5; // rax
	int v6; // edi
	int* v7; // rax
	int* v8; // rdx
	__int64 v9; // rax
	__int64 v10; // rax
	int* v11; // rdi
	int* v12; // rsi
	__int64 v13; // rbx
	unsigned __int64 v14; // rbx
	int* v15; // rax
	_QWORD* v16; // rax
	__int64 v17; // r10
	__int64 v18; // rdx
	__int64(__fastcall * *v19)(); // [rsp+30h] [rbp-E8h] BYREF
	char v20[8]; // [rsp+38h] [rbp-E0h] BYREF
	_WORD* v21; // [rsp+40h] [rbp-D8h]
	_WORD* v22; // [rsp+48h] [rbp-D0h]
	__int128 v23; // [rsp+F0h] [rbp-28h]
	int* v24; // [rsp+100h] [rbp-18h]

	if (a3)
	{
		v5 = sub_1402259C0(a3);
		if (v5)
		{
			v6 = *(_DWORD*)(v5 + 56);
			if (v6)
			{
				if (!(*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
					+ 24i64))(
						qword_140C659A0,
						*(_QWORD*)(qword_140C65898 + 120),
						a3,
						0i64,
						0i64,
						0))
				{
					sub_1400B6F30((__int64)&v19);
					v19 = off_140B69230;
					v24 = 0i64;
					v23 = 0i64;
					v7 = sub_14018B280(16i64, 0);
					*(_QWORD*)&v23 = v7;
					*((_QWORD*)&v23 + 1) = v7;
					v24 = v7 + 4;
					if (v7)
						*(_WORD*)v7 = 0;
					v8 = (int*)sub_14034BDD0((__int64)(v7 + 4), v6);
					if (v8)
					{
						v9 = 0i64;
						if (*(_WORD*)v8)
						{
							do
								++v9;
							while (*((_WORD*)v8 + v9));
						}
						sub_14001C480((__int64)v20, v8, (int*)((char*)v8 + 2 * v9));
					}
					else if (v21 != v22)
					{
						*v21 = 0;
						v22 = v21;
					}
					v10 = sub_1400B7660(&v19);
					v11 = 0i64;
					v12 = *(int**)(v10 + 8);
					v13 = (__int64)(*(_QWORD*)(v10 + 16) - (_QWORD)v12) >> 1;
					if ((unsigned __int64)(v13 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
						v11 = sub_14018B280(2 * (v13 + 1), 0);
					v14 = 2 * v13;
					sub_1407DB590(v11, v12, v14);
					v15 = (int*)((char*)v11 + v14);
					if ((int*)((char*)v11 + v14))
						*(_WORD*)v15 = 0;
					if (v11 != v15)
					{
						v16 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
						v18 = *(_QWORD*)(v17 + 16);
						*(_QWORD*)v18 = *v16;
						*(_DWORD*)(v18 + 8) = *((_DWORD*)v16 + 2);
						*(_QWORD*)(v17 + 16) += 16i64;
						sub_1400F0870(*(_QWORD*)(a2 + 16), v18, L"strSpecialFailures", (unsigned __int16*)v11);
						*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
					}
					if (v11)
						sub_14018B900((__int64)v11, 0);
					if ((_QWORD)v23)
						sub_14018B900(v23, 0);
					sub_1400B7390(&v19);
				}
			}
		}
	}
}
// 140676935: variable 'v17' is possibly undefined
// 140B2FFF8: using guessed type wchar_t aStrspecialfail[19];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140676790: using guessed type char var_E0[8];

